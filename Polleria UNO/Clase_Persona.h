#ifndef CLASE_PERSONA_H
#define CLASE_PERSONA_H
#include <vector>
using namespace std;

struct Datos_persona{
	char nombre[100];
	char apellido[100];
	char telefono[100];
	char email[100];
};

class Clase_Persona {
private:
	vector<Datos_persona> dp;
public:
	Clase_Persona();
	void Agregar_Persona(Datos_persona d);
	void Eliminar_Persona(int pos);
	Datos_persona &operator[](int pos);
	int Tamanio_Vector();
	vector<Datos_persona> Traer_Vector();
	void Cargar_Vector();
	void GuardarEnBinario();
};

#endif

