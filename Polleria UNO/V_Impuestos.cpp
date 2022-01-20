#include "V_Impuestos.h"
#include "V_AgregarImpuesto.h"
#include <wx/msgdlg.h>
#include "Clase_Impuestos.h"
#include <wx/iconloc.h>

V_Impuestos::V_Impuestos(wxWindow *parent) : F_Impuestos(parent) {
	wxIconLocation il; il.SetFileName("Iconos\\uno_ico.ico"); SetIcon(wxIcon(il));
	Cargar_Grilla( ); 
}

void V_Impuestos::OnClickAgregar( wxCommandEvent& event )  {
	V_AgregarImpuesto aimp;
	aimp.ShowModal();
	
	Impuestos d = aimp.Traer_Informacion();
	int pos = aimp.Traer_Posicion();
	
	ci.Agregar_Impuesto(d,pos);
	Cargar_Grilla();
	
}

void V_Impuestos::OnClickEliminar( wxCommandEvent& event )  {
	if(ci.Tamanio_Vector() == 0) return;
	
	int fila = Grilla_Impuestos->GetGridCursorRow();
	int col  = Grilla_Impuestos->GetGridCursorCol();
	if(Grilla_Impuestos->GetCellValue(fila,col) == wxString() << "0"){
		wxMessageBox(wxString() << "No hay elemento para eliminar","Esta vacio", wxOK|wxICON_EXCLAMATION,this);
	}else{
		if(wxMessageBox("Desea eliminar el dato seleccionado? ","Eliminar", wxYES_NO|wxICON_QUESTION,this)  == wxYES){
			ci.Eliminar_Impuesto(fila,col);
			Cargar_Grilla2( fila );
		}
	}
}

V_Impuestos::~V_Impuestos() {	}


void V_Impuestos::Cargar_Grilla ( ) {
	for(int i=0;i<12;i++) Cargar_Grilla2(i);
}

void V_Impuestos::Cargar_Grilla2 (int mes) {
	Impuestos imp = ci[mes];
	Grilla_Impuestos->SetCellValue(mes,0,wxString() << imp.agua );
	Grilla_Impuestos->SetCellValue(mes,1,wxString() << imp.luz );
	Grilla_Impuestos->SetCellValue(mes,2,wxString() << imp.gas );
	Grilla_Impuestos->SetCellValue(mes,3,wxString() << imp.internet );
	Grilla_Impuestos->SetCellValue(mes,4,wxString() << imp.sueldo );
	Grilla_Impuestos->SetCellValue(mes,5,wxString() << imp.otros );
}

