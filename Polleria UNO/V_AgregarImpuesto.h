#ifndef V_AGREGARIMPUESTO_H
#define V_AGREGARIMPUESTO_H
#include "wxfb_project.h"
#include "Clase_Impuestos.h"
#include "Funciones.h"
#include "V_Impuestos.h"

class V_AgregarImpuesto : public D_AgregarImpuesto {
	
private:
	V_Impuestos vi;
	Clase_Impuestos ci;
	Time t;
protected:
	void OnClickCancelar( wxCommandEvent& event ) ;
	void OnClickAgregarImpuesto( wxCommandEvent& event ) ;
	void OnClickTerminar( wxCommandEvent& event ) ;
public:
	V_AgregarImpuesto(wxWindow *parent=NULL);
	~V_AgregarImpuesto();
	Impuestos Traer_Informacion();
	int Traer_Posicion();
};

#endif

