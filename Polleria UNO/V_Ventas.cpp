#include "V_Ventas.h"
#include <wx/iconloc.h>
#include <vector>
#include "Clase_Productos.h"
#include "V_PrecioVenta.h"
#include <wx/msgdlg.h>
#include <numeric>
#include <algorithm>
using namespace std;

V_Ventas::V_Ventas(wxWindow *parent) : F_Ventas(parent) {
	Cargar_Grilla();
	wxIconLocation il; il.SetFileName("Iconos\\uno_ico.ico");
	SetIcon(wxIcon(il));
	Grilla_ventas->SetSelectionMode(wxGrid::wxGridSelectRows);
	vector<Datos_pro> vec = cp.Traer_Vector();
	for(size_t i=0;i<vec.size();++i) { Choice_pro->Append(vec[i].nombre); }
	Choice_pro->SetSelection(0);
}

bool Iguales( Datos_ventas v, int f) {
	int fecha = (((v.anio*10000)+(v.mes*100))+v.dia);
	return fecha == f;
}

void V_Ventas::OnClickSumarVentas( wxCommandEvent& event )  {
	vector<Datos_ventas> v = cv.Traer_Vector();
	double suma = 0;
	if( choice_sumafec->GetStringSelection() == "Sumar todo"){
		for(size_t i=0;i<v.size();++i) suma += v[i].precio;
		tex_suma->SetValue( wxString() << suma );
	}else{
		int pos = choice_sumafec->GetSelection(); pos--;
		int f = Ordenar_Choice_Fechas()[pos];
		for(size_t i=0;i<v.size();++i) {
			if( Iguales(v[i],f) ) suma += v[i].precio;
		}
		tex_suma->SetValue( wxString() << suma );
	}
}

V_Ventas::~V_Ventas() {	}

void V_Ventas::OnClickChoicePro( wxCommandEvent& event )  {
	V_PrecioVenta pv;
	int pos = Choice_pro->GetSelection();
	pv.Tomar_Producto( cp[pos] );
	if( pv.ShowModal() ){
		Datos_ventas d = pv.Traer_Producto();
		
		strcpy( d.nombre , cp[pos].nombre );
		d.kg = d.precio / cp[pos].precio; 
		
		cv.Agregar_Venta(d);
		Cargar_Grilla();
	}
}

void V_Ventas::OnClickEliminar( wxCommandEvent& event )  {
	if(cv.TamanioVector() == 0) return;
	int pos = Grilla_ventas->GetGridCursorRow();
	if(wxMessageBox("Desea eliminar el dato seleccionado? ","Eliminar", wxYES_NO|wxICON_QUESTION,this)  == wxYES){
		cv.Eliminar_Venta(pos);
		Grilla_ventas->DeleteRows(pos,1);
		Cargar_Grilla();
	}
}

void V_Ventas::Cargar_Grilla ( ) {
	if(Grilla_ventas->GetNumberRows() != 0) Grilla_ventas->DeleteRows(0,Grilla_ventas->GetNumberRows());
	choice_sumafec->Clear();
	vector<int> fechas = Ordenar_Choice_Fechas();
	choice_sumafec->Append("Sumar todo");
	for(size_t i=0;i<fechas.size();++i) { 
		choice_sumafec->Append(wxString() << cv[i].dia << "/" << cv[i].mes << "/" << cv[i].anio);
	}
	
	int tam = cv.TamanioVector();
	Grilla_ventas->AppendRows(tam);
	for(int i=0;i<tam;++i) {
		Datos_ventas d = cv[i];
		Grilla_ventas->SetCellValue(i,0,wxString() << d.dia << "/" << d.mes << "/" << d.anio);		
		Grilla_ventas->SetCellValue(i,1,wxString() << d.hora);
		Grilla_ventas->SetCellValue(i,2,wxString() << d.nombre);
		Grilla_ventas->SetCellValue(i,3,wxString() << d.precio);
		Grilla_ventas->SetCellValue(i,4,wxString() << d.kg);
	}
}

vector<int> V_Ventas::Ordenar_Choice_Fechas ( ) {
	vector<int> vec_fechas;
	vector<Datos_ventas> otro_v = cv.Traer_Vector();
	int fecha;
	for(size_t i=0;i<cv.TamanioVector();++i) { 
		fecha = (((otro_v[i].anio*10000)+(otro_v[i].mes*100))+otro_v[i].dia);
		vec_fechas.push_back(fecha);
	}
	sort(vec_fechas.begin(),vec_fechas.end());
	auto it = unique(vec_fechas.begin(),vec_fechas.end());
	vec_fechas.erase(it, vec_fechas.end());
//	for(size_t i=0;i<vec_fechas.size();++i) { 
//		cout << i << " - " << vec_fechas[i] << endl;
//	}
	return vec_fechas;
}
