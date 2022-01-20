#ifndef V_PRECIOVENTA_H
#define V_PRECIOVENTA_H
#include "wxfb_project.h"
#include "Clase_Ventas.h"
#include "Funciones.h"
#include "Clase_Productos.h"

class V_PrecioVenta : public D_PrecioVenta {
	
private:
	Time t;
	Datos_pro dp;
protected:
	void OnClickAceptar( wxCommandEvent& event ) ;
	void OnClickCancelar( wxCommandEvent& event ) ;
public:
	V_PrecioVenta(wxWindow *parent=NULL);
	~V_PrecioVenta();
	Datos_ventas Traer_Producto();
	void Tomar_Producto( Datos_pro );
};

#endif

