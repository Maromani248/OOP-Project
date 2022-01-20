#include "Clase_Productos.h"
#include <wx/msgdlg.h>
#include "Funciones.h"
#include <fstream>
using namespace std;

Clase_Productos::Clase_Productos() {
	Cargar_vector();
}

void Clase_Productos::Agregar_Producto (Datos_pro dp) {
	v.push_back(dp);
	GuardarEnBinario();
}

void Clase_Productos::Editar_Producto (int pos,Datos_pro d2) {
	Datos_pro d;
	strcpy(d.nombre,d2.nombre);
	d.precio = d2.precio;
	v[pos] = d;
	GuardarEnBinario();
}

void Clase_Productos::Eliminar_Producto (int pos) {
	v.erase(v.begin() + pos);
	GuardarEnBinario();
}

void Clase_Productos::GuardarEnBinario ( ) {
	string ruta = rutaDatos() + "Productos.bin";
	ofstream archivo(ruta,ios::binary|ios::trunc);
	for(size_t i=0;i<v.size();++i) { 
		archivo.write(reinterpret_cast<char*> (&v[i]), sizeof(Datos_pro));
	}
	archivo.close();
}

void Clase_Productos::Cargar_vector ( ) {
	v.clear();
	string ruta = rutaDatos() + "Productos.bin";
	ifstream archivo(ruta,ios::binary|ios::in|ios::out);
	Datos_pro dp;
	while(archivo.read(reinterpret_cast<char*> (&dp), sizeof(Datos_pro))){
		v.push_back(dp);
	}
	archivo.close();
}

int Clase_Productos::Tamanio_Vector ( ) { return v.size(); }

Datos_pro Clase_Productos::operator[] (int pos) { return v[pos]; }

vector<Datos_pro> Clase_Productos::Traer_Vector ( ) { return v; }

void Clase_Productos::Vaciar_Productos ( ) {
	v.clear();
	GuardarEnBinario();
}

