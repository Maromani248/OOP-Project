#include "V_AgregarEmpleado.h"
#include <wx/msgdlg.h>
#include "Clase_Persona.h"
#include "Funciones.h"

V_AgregarEmpleado::V_AgregarEmpleado(wxWindow *parent) : D_AgregarEmpleado(parent) {	}

void V_AgregarEmpleado::OnClickAgregar( wxCommandEvent& event )  {
	if(tex_apempleado->IsEmpty() || tex_nomempleado->IsEmpty() || tex_telempleado->IsEmpty() || tex_emailempleado->IsEmpty()){
		wxMessageBox("Faltan completar casilleros","Hubo un problema...",wxOK|wxICON_ERROR,this);
		return;
	}
	if(!VerSiEsNumero(string(tex_telempleado->GetValue()))) {
		wxMessageBox(wxString() << "Solo se pueden ingresar numeros","Error",wxICON_ERROR|wxOK,this);
		return;
	}
	EndModal(1);
}

void V_AgregarEmpleado::OnClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

V_AgregarEmpleado::~V_AgregarEmpleado() {	}

Datos_persona V_AgregarEmpleado::Cargar_Datos ( ) {
	Datos_persona d;
	strcpy(d.apellido,tex_apempleado->GetValue().c_str());
	strcpy(d.nombre,tex_nomempleado->GetValue().c_str());
	strcpy(d.telefono,tex_telempleado->GetValue().c_str());
	strcpy(d.email,tex_emailempleado->GetValue().c_str());
	return d;
}

void V_AgregarEmpleado::Mostrar_Datos (Datos_persona d) {
	titulo_emp->SetLabel("Editar empleado");
	tex_apempleado->SetValue(wxString()    << d.apellido);
	tex_nomempleado->SetValue(wxString()   << d.nombre);
	tex_telempleado->SetValue(wxString()   << d.telefono);
	tex_emailempleado->SetValue(wxString() << d.email);
}

