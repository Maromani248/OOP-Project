#include "V_PrecioVenta.h"
#include "Clase_Ventas.h"
#include <cstring>
#include "Funciones.h"
#include <wx/msgdlg.h>
using namespace std;

V_PrecioVenta::V_PrecioVenta(wxWindow *parent) : D_PrecioVenta(parent) {	}

void V_PrecioVenta::OnClickAceptar( wxCommandEvent& event )  {
	if(tex_precio->IsEmpty()) { wxMessageBox(wxString() << "No se ingreso ningun precio.","Error",wxICON_ERROR|wxOK,this); return; }
	if(!VerSiEsNumero(string(tex_precio->GetValue()))) {
		wxMessageBox(wxString() << "Solo se pueden ingresar numeros","Error",wxICON_ERROR|wxOK,this);
		return;
	}
	EndModal(1);
}

void V_PrecioVenta::OnClickCancelar( wxCommandEvent& event )  {
	EndModal(0);
}

V_PrecioVenta::~V_PrecioVenta() {	}


Datos_ventas V_PrecioVenta::Traer_Producto ( ) {
	Datos_ventas dv;
	dv.dia  =  atoi( t.get_day().c_str()   );
	dv.mes  =  atoi( t.get_month().c_str() );
	dv.anio =  atoi( t.get_year().c_str()  );
	strcpy(dv.hora, t.get_hour_full().c_str() );
	dv.precio = atof( tex_precio->GetValue().c_str() );
	return dv;
}

void V_PrecioVenta::Tomar_Producto (Datos_pro p) {
	nombre_producto->SetLabel(wxString() << p.nombre);
}

