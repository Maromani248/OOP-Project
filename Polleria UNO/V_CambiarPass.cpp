#include "V_CambiarPass.h"
#include <wx/msgdlg.h>

V_CambiarPass::V_CambiarPass(wxWindow *parent) : D_CambiarPass(parent) {	}

void V_CambiarPass::OnClickAceptar( wxCommandEvent& event )  {
	Password nueva;
	strcpy(nueva.pass, tex_passnueva1->GetValue().c_str()) ;
	strcpy(nueva.reff, tex_reffnueva->GetValue().c_str());
	
	if(Errores() != ""){ wxMessageBox(wxString() << Errores()); return;}
	else ci.Editar_password(nueva);
	wxMessageBox(wxString() << "Se cambio con exito");
	EndModal(0);
}

void V_CambiarPass::OnClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

V_CambiarPass::~V_CambiarPass() {	}


bool V_CambiarPass::Casilleros_vacios ( ) {
	if((tex_passactual->IsEmpty()) || 
		(tex_passnueva1->IsEmpty()) || 
		(tex_passnueva2->IsEmpty()) ||
		(tex_reffnueva->IsEmpty())) return true;
	else return false;
}

string V_CambiarPass::Errores ( ) {
	string msj;
	if(tex_passactual->GetValue() != ci.Traer_password().pass){ 
		return msj = "Las contraseñas no coinciden";
	}else if(tex_passnueva1->GetValue() != tex_passnueva2->GetValue()){ 
		return msj = "Las contraseñas no coinciden";
	}else if(Casilleros_vacios()) return msj = "Faltan completar casilleros";
	return msj = "";
}
