#ifndef CLASE_MPRIMA_H
#define CLASE_MPRIMA_H
#include <vector>
using namespace std;

struct Datos_MPrima{
	char nombremp[100];
	char proveedormp[100];
}; 

class Clase_MPrima {
private:
	vector<Datos_MPrima> v;
public:
	Clase_MPrima();
	void Agregar_MPrima(Datos_MPrima dmp);
	void Editar_MPrima(int pos, Datos_MPrima d2);
	void Eliminar_MPrima(int pos);
	void Vaciar_MPrima();
	void GuardarEnBinario();
	void Cargar_vector();
	int Tamanio_Vector();
	Datos_MPrima operator[](int pos);
};

#endif
