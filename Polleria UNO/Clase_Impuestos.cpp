#include "Clase_Impuestos.h"
#include "Funciones.h"
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

Clase_Impuestos::Clase_Impuestos() {
	Cargar_vector();
	if(v.empty()) {
		for(int i=0;i<12;i++) v.push_back( Impuestos{0,0,0,0,0,0} );
	}
}


void Clase_Impuestos::Agregar_Impuesto (Impuestos imp, int pos) {
	v[pos]=imp;
	GuardarEnBinario();
}


void Clase_Impuestos::Eliminar_Impuesto (int pos, int col) {
	Impuestos imp = v[pos];
	switch( col ){
	case 0: imp.agua     = 0; break; 
	case 1: imp.luz      = 0; break; 
	case 2: imp.gas      = 0; break; 
	case 3: imp.internet = 0; break; 	
	case 4: imp.sueldo   = 0; break; 
	case 5: imp.otros    = 0; break; 
	}
	v[pos] = imp;
	GuardarEnBinario();
}

void Clase_Impuestos::GuardarEnBinario ( ) {
	string ruta = rutaDatos() + "Impuestos.bin";
	ofstream archivo(ruta,ios::binary|ios::trunc);
	for(size_t i=0;i<v.size();++i) { 
		archivo.write(reinterpret_cast<char*> (&v[i]), sizeof(Impuestos));
	}
	archivo.close();
}

void Clase_Impuestos::Cargar_vector ( ) {
	v.clear();
	string ruta = rutaDatos() + "Impuestos.bin";
	ifstream archivo(ruta,ios::binary);
	Impuestos imp;
	while(archivo.read(reinterpret_cast<char*> (&imp), sizeof(Impuestos))){
		v.push_back(imp);
	}
	archivo.close();
}

int Clase_Impuestos::Tamanio_Vector ( ) {
	return v.size();
}

Impuestos Clase_Impuestos::operator[] (int pos) {
	return v[pos];
}

vector<int> Clase_Impuestos::Traer_Anios( /*int anio*/ ) {
//	vector<int> v2;
//	for(size_t i=0;i<v.size();++i) v2.push_back(v[i].anio_imp);
//	
//	sort( v2.begin(),v2.end() );
//	auto it = unique(v2.begin(),v2.end());
//	v2.erase( it, v2.end() );
//	
//	return v2;
}

