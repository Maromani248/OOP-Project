#ifndef V_AGREGAREMPLEADO_H
#define V_AGREGAREMPLEADO_H
#include "wxfb_project.h"
#include "Clase_Persona.h"

class V_AgregarEmpleado : public D_AgregarEmpleado {
	
private:
	Clase_Persona cp;
protected:
	void OnClickAgregar( wxCommandEvent& event ) ;
	void OnClickCancelar( wxCommandEvent& event ) ;
public:
	V_AgregarEmpleado(wxWindow *parent=NULL);
	~V_AgregarEmpleado();
	Datos_persona Cargar_Datos();
	void Mostrar_Datos(Datos_persona d);
};

#endif

