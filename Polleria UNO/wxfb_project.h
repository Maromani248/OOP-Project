///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WXFB_PROJECT_H__
#define __WXFB_PROJECT_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/statline.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/gauge.h>
#include <wx/dialog.h>
#include <wx/grid.h>
#include <wx/choice.h>
#include <wx/calctrl.h>
#include <wx/toolbar.h>
#include <wx/frame.h>
#include <wx/radiobox.h>
#include <wx/listbox.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class D_Inicio
///////////////////////////////////////////////////////////////////////////////
class D_Inicio : public wxDialog 
{
	private:
	
	protected:
		wxStaticLine* m_staticline5;
		wxStaticBitmap* m_bitmap4;
		wxStaticLine* m_staticline6;
		wxStaticText* m_staticText2;
		wxTextCtrl* tex_pass;
		wxStaticLine* m_staticline8;
		wxButton* m_button5;
		wxButton* Ingresar;
		wxStaticLine* m_staticline12;
		wxGauge* Barra_cargar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickIngresar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickSalir( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		D_Inicio( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Hola"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 473,316 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~D_Inicio();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class F_VentanaPrincipal
///////////////////////////////////////////////////////////////////////////////
class F_VentanaPrincipal : public wxFrame 
{
	private:
	
	protected:
		wxGrid* ListaAcont;
		wxStaticBitmap* m_bitmap5;
		wxTextCtrl* tex_acontecimiento;
		wxChoice* _dia;
		wxChoice* _mes;
		wxChoice* _anio;
		wxButton* m_button5;
		wxButton* Boton_Editar;
		wxButton* Boton_Guardar;
		wxButton* Boton_Agregar;
		wxCalendarCtrl* Calendario;
		wxToolBar* m_toolBar1;
		wxToolBarToolBase* m_tool1; 
		wxToolBarToolBase* m_tool2; 
		wxToolBarToolBase* m_tool3; 
		wxToolBarToolBase* m_tool4; 
		wxToolBarToolBase* m_tool5; 
		wxToolBarToolBase* m_tool19; 
		wxToolBarToolBase* m_tool22; 
		
		// Virtual event handlers, overide them in your derived class
		virtual void Cambiar_tamanio( wxSizeEvent& event ) { event.Skip(); }
		virtual void OnClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickChoiceMes( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickGuardar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCalendario( wxCalendarEvent& event ) { event.Skip(); }
		virtual void OnClickVentas( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickProductos( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickMateriaPrima( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEmpleados( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickImpuestos( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCambiarPass( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickAyuda( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		F_VentanaPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Menu"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,514 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~F_VentanaPrincipal();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class F_Productos
///////////////////////////////////////////////////////////////////////////////
class F_Productos : public wxFrame 
{
	private:
	
	protected:
		wxGrid* Grilla_prod;
		wxToolBar* m_toolBar2;
		wxToolBarToolBase* m_tool6; 
		wxToolBarToolBase* m_tool7; 
		wxToolBarToolBase* m_tool20; 
		wxToolBarToolBase* m_tool21; 
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickVaciar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		F_Productos( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Productos"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 461,422 ), long style = wxCAPTION|wxDEFAULT_FRAME_STYLE|wxMINIMIZE_BOX|wxTAB_TRAVERSAL );
		
		~F_Productos();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class D_AgregarProducto
///////////////////////////////////////////////////////////////////////////////
class D_AgregarProducto : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* titulo_pro;
		wxStaticText* m_staticText3;
		wxTextCtrl* tex_producto;
		wxStaticText* m_staticText4;
		wxTextCtrl* tex_preciopro;
		wxButton* m_button5;
		wxButton* m_button6;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCancelar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		D_AgregarProducto( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 324,147 ), long style = 0 ); 
		~D_AgregarProducto();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class F_MPrima
///////////////////////////////////////////////////////////////////////////////
class F_MPrima : public wxFrame 
{
	private:
	
	protected:
		wxGrid* Grilla_MPrima;
		wxToolBar* m_toolBar2;
		wxToolBarToolBase* m_tool6; 
		wxToolBarToolBase* m_tool18; 
		wxToolBarToolBase* m_tool7; 
		wxToolBarToolBase* m_tool19; 
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickVaciar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		F_MPrima( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Materia prima"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 561,383 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~F_MPrima();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class D_MPrima
///////////////////////////////////////////////////////////////////////////////
class D_MPrima : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* titulo_mp;
		wxStaticText* m_staticText3;
		wxTextCtrl* tex_materiaprima;
		wxStaticText* m_staticText4;
		wxTextCtrl* tex_proveedor;
		wxButton* m_button5;
		wxButton* m_button6;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCancelar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		D_MPrima( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 304,148 ), long style = 0 ); 
		~D_MPrima();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class F_Ventas
///////////////////////////////////////////////////////////////////////////////
class F_Ventas : public wxFrame 
{
	private:
	
	protected:
		wxToolBar* m_toolBar8;
		wxStaticText* m_staticText17;
		wxChoice* Choice_pro;
		wxToolBarToolBase* m_tool23; 
		wxGrid* Grilla_ventas;
		wxToolBar* m_toolBar9;
		wxStaticText* m_staticText18;
		wxChoice* choice_sumafec;
		wxToolBarToolBase* m_tool24; 
		wxStaticText* m_staticText19;
		wxTextCtrl* tex_suma;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickChoicePro( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickSumarVentas( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		F_Ventas( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Ventas"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 765,460 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~F_Ventas();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class D_PrecioVenta
///////////////////////////////////////////////////////////////////////////////
class D_PrecioVenta : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText20;
		wxStaticText* nombre_producto;
		wxStaticText* m_staticText22;
		wxTextCtrl* tex_precio;
		wxButton* m_button15;
		wxButton* m_button16;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickAceptar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCancelar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		D_PrecioVenta( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 244,129 ), long style = 0 ); 
		~D_PrecioVenta();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class F_Empleados
///////////////////////////////////////////////////////////////////////////////
class F_Empleados : public wxFrame 
{
	private:
	
	protected:
		wxGrid* Grilla_Empleado;
		wxToolBar* m_toolBar2;
		wxToolBarToolBase* m_tool6; 
		wxToolBarToolBase* B_Editar; 
		wxToolBarToolBase* m_tool23; 
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		F_Empleados( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Empleados"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 763,467 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~F_Empleados();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class D_AgregarEmpleado
///////////////////////////////////////////////////////////////////////////////
class D_AgregarEmpleado : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* titulo_emp;
		wxStaticText* m_staticText3;
		wxTextCtrl* tex_apempleado;
		wxStaticText* m_staticText31;
		wxTextCtrl* tex_nomempleado;
		wxStaticText* m_staticText4;
		wxTextCtrl* tex_telempleado;
		wxStaticText* m_staticText41;
		wxTextCtrl* tex_emailempleado;
		wxButton* m_button5;
		wxButton* m_button6;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCancelar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		D_AgregarEmpleado( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 458,217 ), long style = 0 ); 
		~D_AgregarEmpleado();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class D_CambiarPass
///////////////////////////////////////////////////////////////////////////////
class D_CambiarPass : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText25;
		wxTextCtrl* tex_passactual;
		wxStaticText* m_staticText27;
		wxTextCtrl* tex_passnueva1;
		wxStaticText* m_staticText28;
		wxTextCtrl* tex_passnueva2;
		wxStaticText* m_staticText29;
		wxTextCtrl* tex_reffnueva;
		wxButton* m_button17;
		wxButton* m_button18;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickAceptar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCancelar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		D_CambiarPass( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 383,186 ), long style = 0 ); 
		~D_CambiarPass();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class F_Impuestos
///////////////////////////////////////////////////////////////////////////////
class F_Impuestos : public wxFrame 
{
	private:
	
	protected:
		wxGrid* Grilla_Impuestos;
		wxToolBar* m_toolBar8;
		wxToolBarToolBase* m_tool17; 
		wxToolBarToolBase* m_tool18; 
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		F_Impuestos( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Impuestos"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 719,364 ), long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX|wxTAB_TRAVERSAL );
		
		~F_Impuestos();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class D_AgregarImpuesto
///////////////////////////////////////////////////////////////////////////////
class D_AgregarImpuesto : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText2;
		wxChoice* Choice_mesimpuesto;
		wxRadioBox* Box_impuesto;
		wxStaticText* m_staticText71;
		wxTextCtrl* tex_montoimpuesto;
		wxButton* m_button18;
		wxButton* m_button36;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickTerminar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickCancelar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		D_AgregarImpuesto( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 577,211 ), long style = 0 ); 
		~D_AgregarImpuesto();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class F_Ayuda
///////////////////////////////////////////////////////////////////////////////
class F_Ayuda : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText26;
		wxListBox* ListaAyuda;
		wxButton* m_button20;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClickListo( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		F_Ayuda( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Ayuda"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 486,448 ), long style = 0|wxTAB_TRAVERSAL );
		
		~F_Ayuda();
	
};

#endif //__WXFB_PROJECT_H__
