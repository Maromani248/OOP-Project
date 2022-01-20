#ifndef V_INICIO_H
#define V_INICIO_H
#include "wxfb_project.h"
#include "Clase_Inicio.h"

class V_Inicio : public D_Inicio {
private:
	Clase_Inicio ci;
protected:
	void OnClickIngresar( wxCommandEvent& event ) ;
	void OnClickSalir( wxCommandEvent& event ) ;
	void OnClickCerrar( wxCloseEvent& event ) ;
	void OnEscribirpass( wxCommandEvent& event ) ;
public:
	V_Inicio(wxWindow *parent=NULL);
	~V_Inicio();
};

#endif

