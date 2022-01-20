#include "V_AgregarMPrima.h"
#include <wx/msgdlg.h>

V_AgregarMPrima::V_AgregarMPrima(wxWindow *parent) : D_MPrima(parent) {	}

void V_AgregarMPrima::OnClickAgregar( wxCommandEvent& event )  {
	if(tex_materiaprima->IsEmpty() || tex_proveedor->IsEmpty()){
		wxMessageBox("Faltan completar casilleros","Hubo un problema...",wxOK|wxICON_ERROR,this);
		return;
	}
	EndModal(1);
}

void V_AgregarMPrima::OnClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

V_AgregarMPrima::~V_AgregarMPrima() {	}

Datos_MPrima V_AgregarMPrima::Cargar_datos ( ) {
	Datos_MPrima d;
	strcpy(d.nombremp,tex_materiaprima->GetValue().c_str());
	strcpy(d.proveedormp,tex_proveedor->GetValue().c_str());
	return d;
}

void V_AgregarMPrima::Mostrar_datos (Datos_MPrima d) {
	titulo_mp->SetLabel("Editar materia prima");
	tex_materiaprima->SetValue(wxString() << d.nombremp);
	tex_proveedor->SetValue(wxString() << d.proveedormp);
}

