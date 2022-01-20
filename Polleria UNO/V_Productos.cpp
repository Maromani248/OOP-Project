#include "V_Productos.h"
#include <wx/msgdlg.h>
#include <wx/iconloc.h>
#include "V_AgregarProducto.h"

V_Productos::V_Productos(wxWindow *parent) : F_Productos(parent) {
	wxIconLocation il; il.SetFileName("Iconos\\uno_ico.ico");
	SetIcon(wxIcon(il));
	Grilla_prod->SetSelectionMode(wxGrid::wxGridSelectRows);
	Cargar_Grilla();
}


V_Productos::~V_Productos() {	}


void V_Productos::OnClickAgregar( wxCommandEvent& event )  {
	V_AgregarProducto ap;
	if( ap.ShowModal() ){
		Datos_pro d = ap.Cargar_Datos();
		cp.Agregar_Producto(d);
		Cargar_Grilla();
	}
}

void V_Productos::OnClickEditar( wxCommandEvent& event )  {
	if(cp.Tamanio_Vector() == 0){
		wxMessageBox("No hay elementos para editar","Error", wxOK|wxICON_EXCLAMATION,this);
	}else{
		int pos = Grilla_prod->GetGridCursorRow();
		V_AgregarProducto ap;
		ap.Mostrar_Datos(cp[pos]);
		Datos_pro d = cp[pos];
		if( ap.ShowModal() ){
			d = ap.Cargar_Datos();
			cp.Editar_Producto(pos,d);
			Cargar_Grilla();
		}
	}
}

void V_Productos::OnClickEliminar( wxCommandEvent& event )  {
	if(cp.Tamanio_Vector() == 0) return;
	int pos = Grilla_prod->GetGridCursorRow();
	if(wxMessageBox("Desea eliminar el dato seleccionado? ","Eliminar", wxYES_NO|wxICON_QUESTION,this)  == wxYES){
		cp.Eliminar_Producto(pos);
		Grilla_prod->DeleteRows(pos,1);
	}
}


void V_Productos::Cargar_Grilla ( ) {
	if(Grilla_prod->GetNumberRows() != 0) Grilla_prod->DeleteRows(0,Grilla_prod->GetNumberRows());
	int tam = cp.Tamanio_Vector();
	Grilla_prod->AppendRows(tam);
	for(int i=0;i<tam;++i) {
		Datos_pro d = cp[i];
		Grilla_prod->SetCellValue(i,0,wxString() << d.nombre);
		Grilla_prod->SetCellValue(i,1,wxString() << d.precio);
	}
}

void V_Productos::OnClickVaciar( wxCommandEvent& event )  {
	if(cp.Tamanio_Vector() == 0) return;
	if(wxMessageBox("Esta seguro que quiere borrar todos los datos?","Vaciar",wxYES_NO|wxICON_EXCLAMATION,this) == wxYES){
		cp.Vaciar_Productos();
		Cargar_Grilla();
	}
}



