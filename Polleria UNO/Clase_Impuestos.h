#ifndef CLASE_IMPUESTOS_H
#define CLASE_IMPUESTOS_H
#include <vector>
using namespace std;

struct Impuestos{
//	int nombre_mes;
	int anio_imp, mes_imp;
	double agua,luz,gas,internet,sueldo,otros;
};

class Clase_Impuestos {
private:
	vector<Impuestos> v;
public:
	Clase_Impuestos();
	void Agregar_Impuesto(Impuestos dmp, int pos);
	void Eliminar_Impuesto(int pos, int col);
	void GuardarEnBinario();
	void Cargar_vector();
	int Tamanio_Vector();
	vector<int> Traer_Anios( /*int anio */);
	Impuestos operator[](int pos);
};

#endif

