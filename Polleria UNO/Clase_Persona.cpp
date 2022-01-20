#include "Clase_Persona.h"
#include <string>
#include <fstream>
#include "Funciones.h"
#include <algorithm>
using namespace std;

Clase_Persona::Clase_Persona() {
	Cargar_Vector();
}

void Clase_Persona::Agregar_Persona (Datos_persona d) {
	dp.push_back(d);
	GuardarEnBinario();
}

void Clase_Persona::Eliminar_Persona (int pos) {
	dp.erase(dp.begin()+pos);
	GuardarEnBinario();
}

Datos_persona & Clase_Persona::operator[] (int pos) {
	return dp[pos];
}

int Clase_Persona::Tamanio_Vector ( ) {
	return dp.size();
}

void Clase_Persona::Cargar_Vector ( ) {
	dp.clear();
	string ruta = rutaDatos() + "Empleados.bin";
	ifstream archivo(ruta,ios::binary|ios::in|ios::out);
	Datos_persona dat;
	while(archivo.read(reinterpret_cast<char*> (&dat), sizeof(Datos_persona))){
		dp.push_back(dat);
	}
	archivo.close();
}

void Clase_Persona::GuardarEnBinario( ) {
	string ruta = rutaDatos() + "Empleados.bin";
	ofstream archivo(ruta,ios::binary|ios::trunc);
	for(size_t i=0;i<dp.size();++i) { 
		archivo.write(reinterpret_cast<char*> (&dp[i]), sizeof(Datos_persona));
	}
	archivo.close();
}

vector<Datos_persona> Clase_Persona::Traer_Vector ( ) { return dp; }



