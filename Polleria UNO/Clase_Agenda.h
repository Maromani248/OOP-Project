#ifndef CLASE_AGENDA_H
#define CLASE_AGENDA_H
#include <vector>
using namespace std;

struct Datos_Agenda{
	char texto[1000];
	int a_dia;
	int a_mes;
	int a_anio;
};

class Clase_Agenda {
private:
	vector<Datos_Agenda> v;
public:
	Clase_Agenda();
	void Agregar_Acontecimiento(Datos_Agenda acon);
	void Eliminar_Acontecimiento(int pos);
	void GuardarEnBinario();
	void Cargar_vector();
	int Tamanio_Vector();
	Datos_Agenda operator[](int pos);
	vector<int> TraerPosiciones( Datos_Agenda d );
};

#endif
