#ifndef V_IMPUESTOS_H
#define V_IMPUESTOS_H
#include "wxfb_project.h"
#include "Clase_Impuestos.h"
#include "Funciones.h"

class V_Impuestos : public F_Impuestos {
	
private:
	Clase_Impuestos ci;
	Time t;
protected:
	void OnClickAgregar( wxCommandEvent& event ) ;
	void OnClickEliminar( wxCommandEvent& event ) ;
public:
	V_Impuestos(wxWindow *parent=NULL);
	~V_Impuestos();
	void Cargar_Grilla();
	void Cargar_Grilla2(int mes);
};

#endif

