#ifndef CLASE_PRODUCTOS_H
#define CLASE_PRODUCTOS_H
#include <vector>
using namespace std;

struct Datos_pro{
	char nombre[200];
	double precio;
};

class Clase_Productos {
private:
	vector<Datos_pro> v;
//	string nombre_usuario;
public:
	Clase_Productos();
	void Agregar_Producto(Datos_pro dp);
	void Editar_Producto(int pos, Datos_pro dp);
	void Eliminar_Producto(int pos);
	void Vaciar_Productos();
	void GuardarEnBinario();
	void Cargar_vector();
	int Tamanio_Vector();
	Datos_pro operator[](int pos);
	vector<Datos_pro> Traer_Vector();	
};

#endif

