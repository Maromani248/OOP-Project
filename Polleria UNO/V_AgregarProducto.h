#ifndef V_AGREGARPRODUCTO_H
#define V_AGREGARPRODUCTO_H
#include "wxfb_project.h"
#include "Clase_Productos.h"

class V_AgregarProducto : public D_AgregarProducto {
	
private:
	
protected:
	void OnClickAgregar( wxCommandEvent& event ) ;
	void OnClickCancelar( wxCommandEvent& event ) ;
public:
	V_AgregarProducto(wxWindow *parent=NULL);
	~V_AgregarProducto();
	Datos_pro Cargar_Datos();
	void Mostrar_Datos(Datos_pro d);
};

#endif

