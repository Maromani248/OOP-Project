#include "Clase_Agenda.h"
#include "Funciones.h"
#include <string>
#include <fstream>
using namespace std;

Clase_Agenda::Clase_Agenda() {
	CrearCarpeta(rutaDatos());
	Cargar_vector();
}

void Clase_Agenda::Agregar_Acontecimiento (Datos_Agenda acon) {
	v.push_back(acon);
	GuardarEnBinario();
}

void Clase_Agenda::Eliminar_Acontecimiento (int pos) {
	v.erase(v.begin() + pos);
	GuardarEnBinario();
}

void Clase_Agenda::GuardarEnBinario ( ) {
	string ruta = rutaDatos() + "Agenda.bin";
	ofstream archivo(ruta,ios::binary|ios::trunc);
	for(size_t i=0;i<v.size();++i) { 
		archivo.write(reinterpret_cast<char*> (&v[i]), sizeof(Datos_Agenda));
	}
	archivo.close();
}

void Clase_Agenda::Cargar_vector ( ) {
	v.clear();
	string ruta = rutaDatos() + "Agenda.bin";
	ifstream archivo(ruta,ios::binary|ios::in|ios::out);
	Datos_Agenda acon;
	while(archivo.read(reinterpret_cast<char*> (&acon), sizeof(Datos_Agenda))){
		v.push_back(acon);
	}
	archivo.close();
}

int Clase_Agenda::Tamanio_Vector ( ) {
	return v.size();
}

Datos_Agenda Clase_Agenda::operator[] (int pos) {
	return v[pos];
}


vector<int> Clase_Agenda::TraerPosiciones (Datos_Agenda d) {
	vector<int> arr;
	for(size_t i=0;i<v.size();++i) { 
		if( d.a_dia == v[i].a_dia && d.a_mes == v[i].a_mes && d.a_anio == v[i].a_anio)
			arr.push_back( i );
	}
	return arr;
}
