#ifndef CLASE_VENTAS_H
#define CLASE_VENTAS_H
#include <vector>
#include "Funciones.h"
#include "Clase_Productos.h"
using namespace std;

struct Datos_ventas : public Datos_pro{
	double kg;
	int dia;
	int mes;
	int anio;
	char hora[20];
};

class Clase_Ventas {
private:
	Datos_ventas dv;
	vector<Datos_ventas> v;
	Time t;
public:
	Clase_Ventas();
	void Agregar_Venta( Datos_ventas dv );
	void Eliminar_Venta(int pos);
	void Cargar_Vector();
	void GuardarEnBinario();
	Datos_ventas &operator[](int pos);
	size_t TamanioVector();
	vector<Datos_ventas> Traer_Vector ( );
};

#endif
