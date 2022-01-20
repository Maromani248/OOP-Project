#ifndef V_EMPLEADOS_H
#define V_EMPLEADOS_H
#include "wxfb_project.h"
#include "Clase_Persona.h"

class V_Empleados : public F_Empleados {
	
private:
	Clase_Persona cp;
protected:
	void OnClickEditar( wxCommandEvent& event ) ;
	void OnClickAgregar( wxCommandEvent& event ) ;
	void OnClickEliminar( wxCommandEvent& event ) ;
	void OnClickCambiarTamanio( wxSizeEvent& event ) ;
public:
	V_Empleados(wxWindow *parent=NULL);
	~V_Empleados();
	void Cargar_Grilla();
};

#endif

