
#include "V_AgregarImpuesto.h"
#include <cstdlib>
#include <wx/msgdlg.h>
#include <wx/radiobox.h>
#include "Funciones.h"
using namespace std;

V_AgregarImpuesto::V_AgregarImpuesto(wxWindow *parent) : D_AgregarImpuesto(parent) {
	for(int i=0;i<12;i++) Choice_mesimpuesto->Append(t.get_name_of_the_month(i+1));
	Choice_mesimpuesto->SetSelection(atoi(t.get_month().c_str())-1);
}

void V_AgregarImpuesto::OnClickAgregarImpuesto( wxCommandEvent& event )  {
	Impuestos _imp = Traer_Informacion();
	ci.GuardarEnBinario();
	int mes = Choice_mesimpuesto->GetSelection()+1;
	vi.Cargar_Grilla2(mes);
}

void V_AgregarImpuesto::OnClickTerminar( wxCommandEvent& event )  {
	if(!VerSiEsNumero(string(tex_montoimpuesto->GetValue()))){
		wxMessageBox("Solo se pueden ingresar numeros","Error",wxOK|wxICON_INFORMATION,this); return;
	}
	if(tex_montoimpuesto->IsEmpty()){
		wxMessageBox("No se agrego ningun impuesto","Error",wxOK|wxICON_INFORMATION,this); return;
	}
	wxMessageBox("Se agrego el impuesto","Agregado",wxOK|wxICON_INFORMATION,this); 
	EndModal(1);
}

V_AgregarImpuesto::~V_AgregarImpuesto() {	}


Impuestos V_AgregarImpuesto::Traer_Informacion ( ) {
	Impuestos imp = ci[ Traer_Posicion() ];
	
	int posicionBox = Box_impuesto->GetSelection();
	double monto = atof( tex_montoimpuesto->GetValue().c_str() );
	switch( posicionBox ){
	case 0: imp.agua     = monto; break; 
	case 1: imp.luz      = monto; break; 
	case 2: imp.gas      = monto; break; 
	case 3: imp.internet = monto; break; 	
	case 4: imp.sueldo   = monto; break; 
	case 5: imp.otros    = monto; break; 
	}
	return imp;
}

int V_AgregarImpuesto::Traer_Posicion ( ) {
	return Choice_mesimpuesto->GetSelection();
}

void V_AgregarImpuesto::OnClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

