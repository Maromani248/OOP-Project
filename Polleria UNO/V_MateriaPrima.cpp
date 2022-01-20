#include "V_MateriaPrima.h"
#include <wx/iconloc.h>
#include <wx/msgdlg.h>
#include "V_AgregarMPrima.h"
#include "Clase_MPrima.h"

V_MateriaPrima::V_MateriaPrima(wxWindow *parent) : F_MPrima(parent) {
	wxIconLocation il; il.SetFileName("Iconos\\uno_ico.ico"); SetIcon(wxIcon(il));
	Grilla_MPrima->SetSelectionMode(wxGrid::wxGridSelectRows);
	Cargar_Grilla();
}

void V_MateriaPrima::OnClickAgregar( wxCommandEvent& event )  {
	V_AgregarMPrima amp;
	if( amp.ShowModal() ){
		Datos_MPrima d = amp.Cargar_datos();
		mp.Agregar_MPrima(d);
		Cargar_Grilla();
	}
}

void V_MateriaPrima::OnClickEditar( wxCommandEvent& event )  {
	if(mp.Tamanio_Vector() == 0){
		wxMessageBox("No hay elementos para editar","Error", wxOK|wxICON_EXCLAMATION,this);
	}else{
		int pos = Grilla_MPrima->GetGridCursorRow();
		V_AgregarMPrima amp;
		amp.Mostrar_datos(mp[pos]);
		Datos_MPrima d = mp[pos];
		if( amp.ShowModal() ){
			d = amp.Cargar_datos();
			mp.Editar_MPrima(pos,d);
			Cargar_Grilla();
		}
	}
}

void V_MateriaPrima::OnClickEliminar( wxCommandEvent& event )  {
	if(mp.Tamanio_Vector() == 0) return;
	int pos = Grilla_MPrima->GetGridCursorRow();
	if(wxMessageBox("Desea eliminar el dato seleccionado? ","Eliminar", wxYES_NO|wxICON_QUESTION,this)  == wxYES){
		mp.Eliminar_MPrima(pos);
		Grilla_MPrima->DeleteRows(pos,1);
	}
}

V_MateriaPrima::~V_MateriaPrima() {	}


void V_MateriaPrima::Cargar_Grilla ( ) {
	if(Grilla_MPrima->GetNumberRows() != 0) Grilla_MPrima->DeleteRows(0,Grilla_MPrima->GetNumberRows());
	int tam = mp.Tamanio_Vector();
	Grilla_MPrima->AppendRows(tam);
	for(int i=0;i<tam;++i) {
		Datos_MPrima d = mp[i];
		Grilla_MPrima->SetCellValue(i,0,wxString() << d.nombremp);
		Grilla_MPrima->SetCellValue(i,1,wxString() << d.proveedormp);
	}
}


void V_MateriaPrima::OnClickVaciar( wxCommandEvent& event )  {
	if(mp.Tamanio_Vector() == 0) return;
	if(wxMessageBox("Esta seguro que quiere borrar todos los datos?","Vaciar",wxYES_NO|wxICON_EXCLAMATION,this) == wxYES){
		mp.Vaciar_MPrima();
		Cargar_Grilla();
	}
}

