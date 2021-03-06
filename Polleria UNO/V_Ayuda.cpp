#include "V_Ayuda.h"
#include <wx/msgdlg.h>

V_Ayuda::V_Ayuda(wxWindow *parent) : F_Ayuda(parent) {
	Mostrar_Info();
}

void V_Ayuda::OnClickListo( wxCommandEvent& event )  {
	Close();
}

V_Ayuda::~V_Ayuda() {	}


void V_Ayuda::Mostrar_Info () {
	ListaAyuda->Append(wxString() << "			Bienvenido");
	ListaAyuda->Append(wxString() << "Este es un software hecho especialmente para Polleria UNO, el");
	ListaAyuda->Append(wxString() << "cual permitir? una mejor administraci?n y reemplazar? algunos mecanismos.");
	ListaAyuda->Append(wxString() << "");
	ListaAyuda->Append(wxString() << "En la pantalla principal se encuentran las opciones:");
	ListaAyuda->Append(wxString() << "productos,ventas, materia prima, empleados, impuestos.");
	ListaAyuda->Append(wxString() << "A continuaci?n, se explicar?n detalladamente cada uno de ellos.");
	
	ListaAyuda->Append(wxString() << "");
	
	ListaAyuda->Append(wxString() << "			~Productos");
	ListaAyuda->Append(wxString() << "Agregue todos los productos que est?n en venta." );
	ListaAyuda->Append(wxString() << "S?lo haga click en agregar. Complete los casilleros");
	ListaAyuda->Append(wxString() << "y haga click en aceptar o presione tecla Enter."); 
	
	ListaAyuda->Append(wxString() << "");
	
	ListaAyuda->Append(wxString() << "			~Ventas");
	ListaAyuda->Append(wxString() << "Nota: primero debe ir a la opci?n Productos e ingresar");
	ListaAyuda->Append(wxString() << "cada producto que est? a la venta.");
	ListaAyuda->Append(wxString() << "");
	ListaAyuda->Append(wxString() << "Seleccione, en la barra buscar, el producto que se vendi?. ");
	ListaAyuda->Append(wxString() << "Luego, ingrese el costo y presione aceptar o tecla Enter. ");
	ListaAyuda->Append(wxString() << "As? quedar? registrada detalladamente cada venta que");
	ListaAyuda->Append(wxString() << "se lleve a cabo.");
	ListaAyuda->Append(wxString() << "");
	ListaAyuda->Append(wxString() << "En la parte inferior de la ventana, puede sumar las ventas");
	ListaAyuda->Append(wxString() << "por fecha o el total, si as? lo desea. Para ello, seleccione");
	ListaAyuda->Append(wxString() << "una fecha y haga click en sumar.");
	
	ListaAyuda->Append(wxString() << "");
	
	ListaAyuda->Append(wxString() << "			~Materia prima");
	ListaAyuda->Append(wxString() << "Agregue todos los productos o materias primas,");
	ListaAyuda->Append(wxString() << "necesarios para producir. S?lo haga click en agregar.");
	ListaAyuda->Append(wxString() << "Complete los casilleros y haga click en aceptar o"); 
	ListaAyuda->Append(wxString() << "presione tecla Enter.");
	
	ListaAyuda->Append(wxString() << "");
	
	ListaAyuda->Append(wxString() << "			~Empleados");
	ListaAyuda->Append(wxString() << "Anote a sus empleados. S?lo haga click en agregar.");
	ListaAyuda->Append(wxString() << "Complete los casilleros y haga click en aceptar o");
	ListaAyuda->Append(wxString() << "presione tecla Enter.");
	
	ListaAyuda->Append(wxString() << "");
	
	ListaAyuda->Append(wxString() << "			~Impuestos ");
	ListaAyuda->Append(wxString() << "Agregue cada impuesto para una mejor administraci?n.");
	ListaAyuda->Append(wxString() << "S?lo haga click en agregar. Seleccione un mes, un");
	ListaAyuda->Append(wxString() << "impuesto e ingrese el importe. Luego haga click en terminar.");
	
	ListaAyuda->Append(wxString() << "");
	
	ListaAyuda->Append(wxString() << "			~Cambiar contrase?a ");
	ListaAyuda->Append(wxString() << "Es recomendable cambiar la contrase?a que trae por defecto,");
	ListaAyuda->Append(wxString() << "por una que s?lo usted conozca. Para eso, haga click en");
	ListaAyuda->Append(wxString() << "Cambiar contrase?a, complete los casilleros y haga");
	ListaAyuda->Append(wxString() << "click en aceptar o presione Enter.");
	
	ListaAyuda->Append(wxString() << "");
	ListaAyuda->Append(wxString() << "			Espero que le sea de mucha ayuda.");
}

