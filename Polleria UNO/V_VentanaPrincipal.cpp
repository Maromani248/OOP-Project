#include "V_VentanaPrincipal.h"
#include "Clase_Agenda.h"
#include <wx/iconloc.h>
#include <wx/datetime.h>
#include <wx/msgdlg.h>
#include <cstring>
#include <vector>
#include <wx/calctrl.h>
#include "V_Ventas.h"
#include "V_Productos.h"
#include "V_MateriaPrima.h"
#include "V_Empleados.h"
#include "V_Impuestos.h"
#include "V_CambiarPass.h"
#include "V_Ayuda.h"
using namespace std;


V_VentanaPrincipal::V_VentanaPrincipal(wxWindow * parent) : F_VentanaPrincipal(parent)  {
	CrearCarpeta(rutaDatos());
	Maximize();
	wxIconLocation il; il.SetFileName("Iconos\\uno_ico.ico"); SetIcon(wxIcon(il));
	ListaAcont->SetSelectionMode(wxGrid::wxGridSelectRows);
	Cargar_Grilla();
	Cargar_Choice();
	Boton_Guardar->Show(false);
}

void V_VentanaPrincipal::OnClickEliminar (wxCommandEvent & event) {
	if(ca.Tamanio_Vector() == 0) return;
	int pos = ListaAcont->GetGridCursorRow();
	if(wxMessageBox("Desea eliminar el dato seleccionado? ","Eliminar", wxYES_NO|wxICON_QUESTION,this)  == wxYES){
		ca.Eliminar_Acontecimiento(pos);
		ListaAcont->DeleteRows(pos);
	}
}

void V_VentanaPrincipal::OnClickAgregar (wxCommandEvent & event) {
	if(tex_acontecimiento->IsEmpty()){
		wxMessageBox("No hay nada escrito","Hubo un problema...",wxOK|wxICON_ERROR,this);
		return;
	}else{
		Datos_Agenda da;
		strcpy(da.texto , tex_acontecimiento->GetValue().c_str());
		da.a_dia = _dia->GetSelection()+1;
		da.a_mes = _mes->GetSelection()+1;
		da.a_anio = atoi(_anio->GetString(_anio->GetSelection()).c_str());
		ca.Agregar_Acontecimiento(da);
		Cargar_Grilla();
	}
}

void V_VentanaPrincipal::OnClickVentas (wxCommandEvent & event) {
	V_Ventas *vd = new V_Ventas;
	vd->Show();
}

void V_VentanaPrincipal::OnClickProductos (wxCommandEvent & event) {
	V_Productos *vp = new V_Productos;
	vp->Show();
}

void V_VentanaPrincipal::OnClickMateriaPrima (wxCommandEvent & event) {
	V_MateriaPrima *vmp = new V_MateriaPrima;
	vmp->Show();
}

void V_VentanaPrincipal::OnClickEmpleados (wxCommandEvent & event) {
	V_Empleados *ve = new V_Empleados;
	ve->Show();
}

void V_VentanaPrincipal::OnClickImpuestos (wxCommandEvent & event) {
	V_Impuestos *vimp = new V_Impuestos;
	vimp->Show();
}

void V_VentanaPrincipal::OnClickAyuda( wxCommandEvent& event )  {
	V_Ayuda *a = new V_Ayuda;
	a->Show();
}

V_VentanaPrincipal::~V_VentanaPrincipal ( ) {	}

void V_VentanaPrincipal::Cargar_Choice ( ) {
	int anio = atoi(t.get_year().c_str());
	int mes = atoi(t.get_month().c_str());
	int dia = atoi(t.get_day().c_str());
	
	_anio->Clear();
	for(int i=0;i<50;i++) 	_anio->Append(wxString() << anio-i);
	_anio->SetSelection(0);
	
	_mes->Clear();
	for(int i=0;i<12;i++) 	_mes->Append(wxString() << t.get_name_of_the_month(i+1));
	_mes->SetSelection(mes-1);
	
	_dia->Clear();
	int cantDias = t.get_number_of_days_of_the_month(mes);
	for(int i=0; i<cantDias; i++) _dia->Append( wxString() << i+1);
	_dia->SetSelection(dia-1);
}

void V_VentanaPrincipal::OnClickCalendario( wxCalendarEvent& event )  {
	Cargar_Grilla();
	Datos_Agenda d;
	wxDateTime dt = Calendario->GetDate();
	d.a_dia = dt.GetDay();
	d.a_mes = dt.GetMonth()+1;
	d.a_anio = dt.GetYear();
	
	vector<int> pos = ca.TraerPosiciones( d );
	
	for(size_t i=0;i<pos.size();++i) { 
		ListaAcont->SelectRow(pos[i]);
	}
	Refresh();
}

void V_VentanaPrincipal::OnClickChoiceMes( wxCommandEvent& event )  {
	int dia = atoi(t.get_day().c_str());
	int cantDias = t.get_number_of_days_of_the_month(_mes->GetSelection()+1);
	_dia->Clear();
	for(int i=0; i<cantDias; i++) _dia->Append( wxString() << i+1);
	_dia->SetSelection(dia-1);
}

void V_VentanaPrincipal::Cargar_Grilla ( ) {
	if(ListaAcont->GetNumberRows() != 0) ListaAcont->DeleteRows(0,ListaAcont->GetNumberRows());
	int tam = ca.Tamanio_Vector();
	ListaAcont->AppendRows(tam);
	for(int i=0;i<tam;++i) {
		Datos_Agenda d = ca[i];
		ListaAcont->SetCellValue(i,0,wxString() << d.texto );
		ListaAcont->SetCellValue(i,1,wxString() << d.a_dia << "/" << d.a_mes << "/" << d.a_anio);
	}
}

void V_VentanaPrincipal::OnClickAcontecimiento( wxCommandEvent& event )  {
	int pos = ListaAcont->GetGridCursorRow();
	Datos_Agenda d = ca[pos];
}


void V_VentanaPrincipal::Cambiar_tamanio ( wxSizeEvent& event) {
	Layout();
	Refresh();
	int CantCol = ListaAcont->GetNumberCols();
	
	int tam[CantCol], anchoviejo = 0;
	for(int i=0;i<CantCol;i++) { 
		tam[i] = ListaAcont->GetColSize(i);
		anchoviejo += tam[i];
	}
	
	int anchonuevo = ListaAcont->GetSize().GetWidth();
	ListaAcont->BeginBatch();
	for(int i=0;i<CantCol;i++) { 
		ListaAcont->SetColSize(i,tam[i]*anchonuevo/anchoviejo);
	}
	ListaAcont->EndBatch();
}

void V_VentanaPrincipal::OnClickCambiarPass( wxCommandEvent& event )  {
	V_CambiarPass().ShowModal();
}


void V_VentanaPrincipal::OnClickEditar( wxCommandEvent& event )  {
	Boton_Agregar->Enable(false);
	Boton_Editar->Show(false);
	Boton_Guardar->Show();
	int pos = ListaAcont->GetGridCursorRow();
	Datos_Agenda da(ca[pos]);
	tex_acontecimiento->SetValue( da.texto );
	_dia->SetSelection( da.a_dia-1 );
	_mes->SetSelection( da.a_mes-1 );
	_anio->SetLabel( wxString() << da.a_anio );
}

void V_VentanaPrincipal::OnClickGuardar( wxCommandEvent& event )  {
	Boton_Agregar->Enable();
	Boton_Editar->Show();
	Boton_Guardar->Show(false);
	
	Datos_Agenda da;
	strcpy(da.texto , tex_acontecimiento->GetValue().c_str());
	da.a_dia = _dia->GetSelection()+1;
	da.a_mes = _mes->GetSelection()+1;
	da.a_anio = atoi(_anio->GetString(_anio->GetSelection()).c_str());
	
	int pos = ListaAcont->GetGridCursorRow();
	ca[pos] = da;
	
	Cargar_Grilla();
}
