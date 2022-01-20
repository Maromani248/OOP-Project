#ifndef CLASE_INICIO_H
#define CLASE_INICIO_H
#include <string>
using namespace std;

struct Password{
	char pass[110];
	char reff[2010];
};

class Clase_Inicio {
private:
	Password pass;
	string ruta;
public:
	Clase_Inicio();
	void Editar_password( Password p );
	Password Traer_password();
	void Cargar_Pass();
	void Guardar_Pass();
};

#endif
