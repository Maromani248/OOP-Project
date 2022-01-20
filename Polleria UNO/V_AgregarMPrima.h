#ifndef V_AGREGARMPRIMA_H
#define V_AGREGARMPRIMA_H
#include "wxfb_project.h"
#include "Clase_MPrima.h"

class V_AgregarMPrima : public D_MPrima {
private:
	Clase_MPrima mp;
protected:
	void OnClickAgregar( wxCommandEvent& event ) ;
	void OnClickCancelar( wxCommandEvent& event ) ;
public:
	V_AgregarMPrima(wxWindow *parent=NULL);
	~V_AgregarMPrima();
	Datos_MPrima Cargar_datos();
	void Mostrar_datos(Datos_MPrima d);
};

#endif

