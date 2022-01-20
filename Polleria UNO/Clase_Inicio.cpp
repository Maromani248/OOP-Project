#include "Clase_Inicio.h"
#include "Funciones.h"
#include <fstream>
#include <cstring>
#include <iostream>
using namespace std;

Clase_Inicio::Clase_Inicio() {
	ruta = rutaDatos() + "Password.bin";
	strcpy(pass.pass , "12345"  );
	strcpy(pass.reff , "Default");
	Cargar_Pass();
}


void Clase_Inicio::Editar_password (Password p) {
	pass = p;
	Guardar_Pass();
}


Password Clase_Inicio::Traer_password ( ) { return pass; }


void Clase_Inicio::Cargar_Pass ( ) {
	if( !ExisteArchivo( ruta ) ) return;
	ifstream archivo( ruta, ios::binary );
	archivo.read(reinterpret_cast<char*>(&pass),sizeof(Password));
	archivo.close();
}


void Clase_Inicio::Guardar_Pass ( ) {
	ofstream archivo( ruta, ios::binary|ios::trunc );
	archivo.write(reinterpret_cast<char*>(&pass),sizeof(Password));
	archivo.close();
}
