#ifndef V_MATERIAPRIMA_H
#define V_MATERIAPRIMA_H
#include "wxfb_project.h"
#include "Clase_MPrima.h"

class V_MateriaPrima : public F_MPrima {
	
private:
	Clase_MPrima mp;
protected:
	void OnClickVaciar( wxCommandEvent& event ) ;
	void OnClickEditar( wxCommandEvent& event ) ;
	void OnClickAgregar( wxCommandEvent& event ) ;
	void OnClickEliminar( wxCommandEvent& event ) ;
	
public:
	V_MateriaPrima(wxWindow *parent=NULL);
	~V_MateriaPrima();
	void Cargar_Grilla();
};

#endif

