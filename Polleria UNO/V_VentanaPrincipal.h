#ifndef V_VENTANAPRINCIPAL_H
#define V_VENTANAPRINCIPAL_H
#include "wxfb_project.h"
#include "Funciones.h"
#include "Clase_Agenda.h"

class V_VentanaPrincipal : public F_VentanaPrincipal {
	
private:
	Clase_Agenda ca;
	void Cargar_Choice();
	Time t;
protected:
	void OnClickGuardar( wxCommandEvent& event ) ;
	void OnClickEditar( wxCommandEvent& event ) ;
	void OnClickCambiarPass( wxCommandEvent& event ) ;
	void Cambiar_tamanio( wxSizeEvent& event );
	void OnClickChoiceMes( wxCommandEvent& event ) ;
	void OnClickCalendario( wxCalendarEvent& event ) ;
	///************************************************///
	void OnClickAcontecimiento( wxCommandEvent& event ) ;
	void OnClickEliminar( wxCommandEvent& event ) ;
	void OnClickAgregar( wxCommandEvent& event ) ;
	///*************************************************///
	void OnClickVentas( wxCommandEvent& event ) ;
	void OnClickProductos( wxCommandEvent& event ) ;
	void OnClickMateriaPrima( wxCommandEvent& event ) ;
	void OnClickEmpleados( wxCommandEvent& event ) ;
	void OnClickImpuestos( wxCommandEvent& event ) ;
	void OnClickAyuda( wxCommandEvent& event ) ;
public:
	void Cargar_Grilla();
	V_VentanaPrincipal(wxWindow *parent=NULL);
	~V_VentanaPrincipal();
};

#endif

