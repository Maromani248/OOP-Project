#ifndef V_CAMBIARPASS_H
#define V_CAMBIARPASS_H
#include "wxfb_project.h"
#include "Clase_Inicio.h"
#include <string>
using namespace std;

class V_CambiarPass : public D_CambiarPass {
	
private:
	Clase_Inicio ci;
protected:
	void OnClickCancelar( wxCommandEvent& event ) ;
	void OnClickAceptar( wxCommandEvent& event ) ;
public:
	V_CambiarPass(wxWindow *parent=NULL);
	~V_CambiarPass();
	bool Casilleros_vacios();
	string Errores();
};

#endif

