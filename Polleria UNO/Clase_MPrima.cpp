#include "Clase_MPrima.h"
#include <fstream>
#include "Funciones.h"
using namespace std;

Clase_MPrima::Clase_MPrima() {
	Cargar_vector();
}


void Clase_MPrima::Agregar_MPrima (Datos_MPrima dmp) {
	v.push_back(dmp);
	GuardarEnBinario();
}

void Clase_MPrima::Editar_MPrima (int pos, Datos_MPrima d2) {
	Datos_MPrima d;
	strcpy(d.nombremp,d2.nombremp);
	strcpy(d.proveedormp,d2.proveedormp);
	v[pos] = d;
	GuardarEnBinario();
}

void Clase_MPrima::Eliminar_MPrima (int pos) {
	v.erase(v.begin() + pos);
	GuardarEnBinario();
}


void Clase_MPrima::GuardarEnBinario ( ) {
	string ruta = rutaDatos() + "MateriaPrima.bin";
	ofstream archivo(ruta,ios::binary|ios::trunc);
	for(size_t i=0;i<v.size();++i) { 
		archivo.write(reinterpret_cast<char*> (&v[i]), sizeof(Datos_MPrima));
	}
	archivo.close();
}

void Clase_MPrima::Cargar_vector ( ) {
	v.clear();
	string ruta = rutaDatos() + "MateriaPrima.bin";
	ifstream archivo(ruta,ios::binary|ios::in|ios::out);
	Datos_MPrima dmp;
	while(archivo.read(reinterpret_cast<char*> (&dmp), sizeof(Datos_MPrima))){
		v.push_back(dmp);
	}
	archivo.close();
}

int Clase_MPrima::Tamanio_Vector ( ) { return v.size(); }

Datos_MPrima Clase_MPrima::operator[] (int pos) { return v[pos]; }


void Clase_MPrima::Vaciar_MPrima ( ) {
	v.clear();
	GuardarEnBinario();
}

