#include "V_Inicio.h"
#include <wx/msgdlg.h>
#include <wx/iconloc.h>
#include "V_VentanaPrincipal.h"
#include "Funciones.h"

V_Inicio::V_Inicio(wxWindow *parent) : D_Inicio(parent) {
	CrearCarpeta(rutaDatos());
	wxIconLocation il; il.SetFileName("Iconos\\uno_ico.ico");
	SetIcon(wxIcon(il));
}

V_Inicio::~V_Inicio() {		}

void V_Inicio::OnClickIngresar( wxCommandEvent& event )  {
	if(tex_pass->IsEmpty()) return;
	if(tex_pass->GetValue() == string(ci.Traer_password().pass) ){
		for(int i=0;i<100;i++) { Barra_cargar->SetValue(i+1); EsperarTantosSegundos(20); }
		Barra_cargar->SetValue(0);
		
		V_VentanaPrincipal *ven = new V_VentanaPrincipal(NULL);
		ven->Show();
		Destroy();
	}else{
		wxMessageBox("Los datos no son correctos","Hubo un problema...",wxOK|wxICON_ERROR,this);
	}
}

void V_Inicio::OnClickSalir( wxCommandEvent& event )  {	Destroy();	}

void V_Inicio::OnEscribirpass( wxCommandEvent& event )  {
	if(tex_pass->IsEmpty())Ingresar->Disable();
	else Ingresar->Enable();
}

void V_Inicio::OnClickCerrar( wxCloseEvent& event )  {	Destroy();	}

