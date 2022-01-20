#include "V_Empleados.h"
#include "Clase_Persona.h"
#include <wx/msgdlg.h>
#include "V_AgregarEmpleado.h"
#include <wx/iconloc.h>
#include "Funciones.h"

V_Empleados::V_Empleados(wxWindow *parent) : F_Empleados(parent) {
	wxIconLocation il; il.SetFileName("Iconos\\uno_ico.ico"); SetIcon(wxIcon(il));
	Grilla_Empleado->SetSelectionMode(wxGrid::wxGridSelectRows);
	Cargar_Grilla();
}

void V_Empleados::OnClickAgregar( wxCommandEvent& event )  {
	V_AgregarEmpleado ae; 
	if( ae.ShowModal() ){
		Datos_persona d = ae.Cargar_Datos();
		cp.Agregar_Persona(d);
		Cargar_Grilla();
	}
}

void V_Empleados::OnClickEditar( wxCommandEvent& event )  {
	if(cp.Tamanio_Vector() == 0){
		wxMessageBox("No hay elementos para editar","Error", wxOK|wxICON_EXCLAMATION,this);
	}else{
		int pos = Grilla_Empleado->GetGridCursorRow();
		V_AgregarEmpleado ae;
		ae.Mostrar_Datos(cp[pos]);
		if( ae.ShowModal() ){
			cp[pos] = ae.Cargar_Datos();
			cp.GuardarEnBinario();
			Cargar_Grilla();
		}
	}
}

void V_Empleados::OnClickEliminar( wxCommandEvent& event )  {
	if(cp.Tamanio_Vector() == 0) return;
	int pos = Grilla_Empleado->GetGridCursorRow();
	if(wxMessageBox("Desea eliminar el dato seleccionado? ","Eliminar", wxYES_NO|wxICON_QUESTION,this)  == wxYES){
		cp.Eliminar_Persona(pos);
		Grilla_Empleado->DeleteRows(pos,1);
	}
}

V_Empleados::~V_Empleados() {	}


void V_Empleados::OnClickCambiarTamanio (wxSizeEvent & event) {
	Layout();
}

void V_Empleados::Cargar_Grilla ( ) {
	if(Grilla_Empleado->GetNumberRows() != 0) Grilla_Empleado->DeleteRows(0,Grilla_Empleado->GetNumberRows());
	int tam = cp.Tamanio_Vector();
	Grilla_Empleado->AppendRows(tam);
	for(int i=0;i<tam;++i) {
		Datos_persona d = cp[i];
		Grilla_Empleado->SetCellValue(i,0,wxString() << d.apellido << ", " << d.nombre);
		Grilla_Empleado->SetCellValue(i,1,d.telefono);
		Grilla_Empleado->SetCellValue(i,2,d.email);
	}
}
