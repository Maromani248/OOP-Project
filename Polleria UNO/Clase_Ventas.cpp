#include "Clase_Ventas.h"
#include "Funciones.h"
#include <fstream>
#include <string>
#include <vector>
using namespace std;

Clase_Ventas::Clase_Ventas() {
	Cargar_Vector();
}

void Clase_Ventas::GuardarEnBinario ( ) {
	string ruta = rutaDatos() + "Ventas.bin";
	ofstream archivo(ruta,ios::binary|ios::trunc);
	for(size_t i=0;i<v.size();++i) { 
		archivo.write(reinterpret_cast<char*> (&v[i]), sizeof(Datos_ventas));
	}
	archivo.close();
}

void Clase_Ventas::Agregar_Venta ( Datos_ventas dv ) {
	v.push_back(dv);
	GuardarEnBinario();
}

void Clase_Ventas::Eliminar_Venta (int pos) {
	v.erase(v.begin() + pos);
	GuardarEnBinario();
}

void Clase_Ventas::Cargar_Vector ( ) {
	v.clear();
	string ruta = rutaDatos() + "Ventas.bin";
	ifstream archivo(ruta,ios::binary|ios::in|ios::out);
	Datos_ventas dv;
	while(archivo.read(reinterpret_cast<char*> (&dv), sizeof(Datos_ventas))){
		v.push_back(dv);
	}
	archivo.close();
}

Datos_ventas & Clase_Ventas::operator[] (int pos) { return v[pos]; }

size_t Clase_Ventas::TamanioVector ( ) { return v.size(); }

vector<Datos_ventas> Clase_Ventas::Traer_Vector ( ) {
	return v;
}

