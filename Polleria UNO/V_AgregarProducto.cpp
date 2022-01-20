#include "V_AgregarProducto.h"
#include <wx/msgdlg.h>
#include "Funciones.h"

V_AgregarProducto::V_AgregarProducto(wxWindow *parent) : D_AgregarProducto(parent) {	}

void V_AgregarProducto::OnClickAgregar( wxCommandEvent& event )  {
	if(tex_producto->IsEmpty() || tex_preciopro->IsEmpty()){
		wxMessageBox("Faltan completar casilleros","Hubo un problema...",wxOK|wxICON_ERROR,this);
		return;
	}
	if(!VerSiEsNumero(string(tex_preciopro->GetValue()))) {
		wxMessageBox(wxString() << "Solo se pueden ingresar numeros","Error",wxICON_ERROR|wxOK,this);
		return;
	}
	EndModal(1);
}

void V_AgregarProducto::OnClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

V_AgregarProducto::~V_AgregarProducto() {	}


Datos_pro V_AgregarProducto::Cargar_Datos ( ) {
	Datos_pro d;
	strcpy(d.nombre,tex_producto->GetValue().c_str());
	d.precio = atof(tex_preciopro->GetValue().c_str());
	return d;
}

void V_AgregarProducto::Mostrar_Datos (Datos_pro d) {
	titulo_pro->SetLabel("Editar producto");
	tex_producto->SetValue(wxString() << d.nombre);
	tex_preciopro->SetValue(wxString() << d.precio);
}

