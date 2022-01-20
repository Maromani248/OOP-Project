#ifndef V_PRODUCTOS_H
#define V_PRODUCTOS_H
#include "wxfb_project.h"
#include "Clase_Productos.h"

class V_Productos : public F_Productos {
	
private:
	Clase_Productos cp;
	void Cargar_Grilla();
protected:
	void OnClickEditar( wxCommandEvent& event ) ;
	void OnClickVaciar( wxCommandEvent& event ) ;
	void OnClickAgregar( wxCommandEvent& event ) ;
	void OnClickEliminar( wxCommandEvent& event ) ;
public:
	V_Productos(wxWindow *parent=NULL);
	~V_Productos();
};

#endif

