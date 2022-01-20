///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

D_Inicio::D_Inicio( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	m_staticline5 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer11->Add( m_staticline5, 0, wxEXPAND | wxALL, 5 );
	
	m_bitmap4 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Iconos/u(5).png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_bitmap4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticline6 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer11->Add( m_staticline6, 0, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Contraseña: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	m_staticText2->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	
	bSizer12->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	tex_pass = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 150,27 ), wxTE_CENTRE|wxTE_PASSWORD|wxTE_PROCESS_ENTER );
	bSizer12->Add( tex_pass, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer11->Add( bSizer12, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticline8 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer11->Add( m_staticline8, 0, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button5 = new wxButton( this, wxID_ANY, wxT("Salir"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_button5, 0, wxALL, 5 );
	
	Ingresar = new wxButton( this, wxID_ANY, wxT("Ingresar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( Ingresar, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer13, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticline12 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer11->Add( m_staticline12, 0, wxEXPAND | wxALL, 5 );
	
	Barra_cargar = new wxGauge( this, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL );
	Barra_cargar->SetValue( 0 ); 
	bSizer11->Add( Barra_cargar, 0, wxALL|wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer11 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	tex_pass->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_Inicio::OnClickIngresar ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_Inicio::OnClickSalir ), NULL, this );
	Ingresar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_Inicio::OnClickIngresar ), NULL, this );
}

D_Inicio::~D_Inicio()
{
	// Disconnect Events
	tex_pass->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_Inicio::OnClickIngresar ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_Inicio::OnClickSalir ), NULL, this );
	Ingresar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_Inicio::OnClickIngresar ), NULL, this );
	
}

F_VentanaPrincipal::F_VentanaPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	ListaAcont = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	ListaAcont->CreateGrid( 0, 2 );
	ListaAcont->EnableEditing( false );
	ListaAcont->EnableGridLines( true );
	ListaAcont->EnableDragGridSize( false );
	ListaAcont->SetMargins( 0, 0 );
	
	// Columns
	ListaAcont->SetColSize( 0, 400 );
	ListaAcont->SetColSize( 1, 150 );
	ListaAcont->EnableDragColMove( false );
	ListaAcont->EnableDragColSize( true );
	ListaAcont->SetColLabelSize( 30 );
	ListaAcont->SetColLabelValue( 0, wxT("Acontecimiento") );
	ListaAcont->SetColLabelValue( 1, wxT("Fecha") );
	ListaAcont->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	ListaAcont->EnableDragRowSize( true );
	ListaAcont->SetRowLabelSize( 30 );
	ListaAcont->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	ListaAcont->SetDefaultCellAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	bSizer10->Add( ListaAcont, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer9->Add( bSizer10, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap5 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Iconos/Escribir 4.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_bitmap5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	tex_acontecimiento = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 250,250 ), wxTE_PROCESS_ENTER );
	bSizer11->Add( tex_acontecimiento, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	wxArrayString _diaChoices;
	_dia = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 50,-1 ), _diaChoices, 0 );
	_dia->SetSelection( 0 );
	bSizer12->Add( _dia, 0, wxALL, 5 );
	
	wxArrayString _mesChoices;
	_mes = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 100,-1 ), _mesChoices, 0 );
	_mes->SetSelection( 0 );
	bSizer12->Add( _mes, 0, wxALL, 5 );
	
	wxArrayString _anioChoices;
	_anio = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 100,-1 ), _anioChoices, 0 );
	_anio->SetSelection( 0 );
	bSizer12->Add( _anio, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer12, 0, 0, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button5 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_button5, 0, wxALL, 5 );
	
	Boton_Editar = new wxButton( this, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	Boton_Editar->Hide();
	
	bSizer13->Add( Boton_Editar, 0, wxALL, 5 );
	
	Boton_Guardar = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	Boton_Guardar->Hide();
	
	bSizer13->Add( Boton_Guardar, 0, wxALL, 5 );
	
	Boton_Agregar = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( Boton_Agregar, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer13, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	Calendario = new wxCalendarCtrl( this, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxCAL_SHOW_HOLIDAYS );
	bSizer11->Add( Calendario, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer9->Add( bSizer11, 0, 0, 5 );
	
	
	this->SetSizer( bSizer9 );
	this->Layout();
	m_toolBar1 = this->CreateToolBar( wxTB_HORIZONTAL, wxID_ANY ); 
	m_tool1 = m_toolBar1->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/1(1) copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool2 = m_toolBar1->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/2(1) copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool3 = m_toolBar1->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/4(1) copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool4 = m_toolBar1->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/5(1) copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool5 = m_toolBar1->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/3(1) copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool19 = m_toolBar1->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/CambiarContraseña3.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool22 = m_toolBar1->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/Productos(4)(1).png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolBar1->Realize(); 
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( F_VentanaPrincipal::Cambiar_tamanio ) );
	tex_acontecimiento->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( F_VentanaPrincipal::OnClickAgregar ), NULL, this );
	_mes->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( F_VentanaPrincipal::OnClickChoiceMes ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickEliminar ), NULL, this );
	Boton_Editar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickEditar ), NULL, this );
	Boton_Guardar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickGuardar ), NULL, this );
	Boton_Agregar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickAgregar ), NULL, this );
	Calendario->Connect( wxEVT_CALENDAR_DOUBLECLICKED, wxCalendarEventHandler( F_VentanaPrincipal::OnClickCalendario ), NULL, this );
	this->Connect( m_tool1->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickVentas ) );
	this->Connect( m_tool2->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickProductos ) );
	this->Connect( m_tool3->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickMateriaPrima ) );
	this->Connect( m_tool4->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickEmpleados ) );
	this->Connect( m_tool5->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickImpuestos ) );
	this->Connect( m_tool19->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_VentanaPrincipal::OnClickCambiarPass ));
	this->Connect( m_tool22->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickAyuda ) );
}

F_VentanaPrincipal::~F_VentanaPrincipal()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( F_VentanaPrincipal::Cambiar_tamanio ) );
	tex_acontecimiento->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( F_VentanaPrincipal::OnClickAgregar ), NULL, this );
	_mes->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( F_VentanaPrincipal::OnClickChoiceMes ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickEliminar ), NULL, this );
	Boton_Editar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickEditar ), NULL, this );
	Boton_Guardar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickGuardar ), NULL, this );
	Boton_Agregar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickAgregar ), NULL, this );
	Calendario->Disconnect( wxEVT_CALENDAR_DOUBLECLICKED, wxCalendarEventHandler( F_VentanaPrincipal::OnClickCalendario ), NULL, this );
	this->Disconnect( m_tool1->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickVentas ) );
	this->Disconnect( m_tool2->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickProductos ) );
	this->Disconnect( m_tool3->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickMateriaPrima ) );
	this->Disconnect( m_tool4->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickEmpleados ) );
	this->Disconnect( m_tool5->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickImpuestos ) );
	this->Disconnect( m_tool19->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_VentanaPrincipal::OnClickCambiarPass ));
	this->Disconnect( m_tool22->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( F_VentanaPrincipal::OnClickAyuda ) );
	
}

F_Productos::F_Productos( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	Grilla_prod = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	Grilla_prod->CreateGrid( 0, 2 );
	Grilla_prod->EnableEditing( true );
	Grilla_prod->EnableGridLines( true );
	Grilla_prod->EnableDragGridSize( false );
	Grilla_prod->SetMargins( 0, 0 );
	
	// Columns
	Grilla_prod->SetColSize( 0, 200 );
	Grilla_prod->SetColSize( 1, 100 );
	Grilla_prod->EnableDragColMove( false );
	Grilla_prod->EnableDragColSize( true );
	Grilla_prod->SetColLabelSize( 30 );
	Grilla_prod->SetColLabelValue( 0, wxT("Producto") );
	Grilla_prod->SetColLabelValue( 1, wxT("Precio por kg") );
	Grilla_prod->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	Grilla_prod->EnableDragRowSize( true );
	Grilla_prod->SetRowLabelSize( 30 );
	Grilla_prod->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	Grilla_prod->SetLabelFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 94, 90, false, wxEmptyString ) );
	
	// Cell Defaults
	Grilla_prod->SetDefaultCellAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	bSizer12->Add( Grilla_prod, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	m_toolBar2 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_VERTICAL ); 
	m_tool6 = m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/1 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool7 = m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/2 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool20 = m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/3 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool21 = m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/4 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolBar2->Realize(); 
	
	bSizer10->Add( m_toolBar2, 1, wxEXPAND, 5 );
	
	
	bSizer12->Add( bSizer10, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer12 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( m_tool6->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Productos::OnClickAgregar ));
	this->Connect( m_tool7->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Productos::OnClickEditar ));
	this->Connect( m_tool20->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Productos::OnClickEliminar ));
	this->Connect( m_tool21->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Productos::OnClickVaciar ));
}

F_Productos::~F_Productos()
{
	// Disconnect Events
	this->Disconnect( m_tool6->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Productos::OnClickAgregar ));
	this->Disconnect( m_tool7->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Productos::OnClickEditar ));
	this->Disconnect( m_tool20->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Productos::OnClickEliminar ));
	this->Disconnect( m_tool21->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Productos::OnClickVaciar ));
	
}

D_AgregarProducto::D_AgregarProducto( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	titulo_pro = new wxStaticText( this, wxID_ANY, wxT("Agregar producto"), wxDefaultPosition, wxDefaultSize, 0 );
	titulo_pro->Wrap( -1 );
	titulo_pro->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer11->Add( titulo_pro, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Producto:        "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 11, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer12->Add( m_staticText3, 0, wxALL, 5 );
	
	tex_producto = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,25 ), wxTE_CENTRE|wxTE_PROCESS_ENTER );
	tex_producto->SetFont( wxFont( 12, 74, 90, 90, false, wxT("Arial") ) );
	
	bSizer12->Add( tex_producto, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer12, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Precio por kg:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont( wxFont( 11, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer13->Add( m_staticText4, 0, wxALL, 5 );
	
	tex_preciopro = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,25 ), wxTE_CENTRE|wxTE_PROCESS_ENTER );
	tex_preciopro->SetFont( wxFont( 12, 74, 90, 90, false, wxT("Arial") ) );
	
	bSizer13->Add( tex_preciopro, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer13, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button5 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_button5, 0, wxALL, 5 );
	
	m_button6 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_button6, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer14, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer11 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	tex_producto->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_AgregarProducto::OnClickAgregar ), NULL, this );
	tex_preciopro->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_AgregarProducto::OnClickAgregar ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_AgregarProducto::OnClickCancelar ), NULL, this );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_AgregarProducto::OnClickAgregar ), NULL, this );
}

D_AgregarProducto::~D_AgregarProducto()
{
	// Disconnect Events
	tex_producto->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_AgregarProducto::OnClickAgregar ), NULL, this );
	tex_preciopro->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_AgregarProducto::OnClickAgregar ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_AgregarProducto::OnClickCancelar ), NULL, this );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_AgregarProducto::OnClickAgregar ), NULL, this );
	
}

F_MPrima::F_MPrima( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	Grilla_MPrima = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	Grilla_MPrima->CreateGrid( 0, 2 );
	Grilla_MPrima->EnableEditing( false );
	Grilla_MPrima->EnableGridLines( true );
	Grilla_MPrima->EnableDragGridSize( false );
	Grilla_MPrima->SetMargins( 0, 0 );
	
	// Columns
	Grilla_MPrima->SetColSize( 0, 200 );
	Grilla_MPrima->SetColSize( 1, 200 );
	Grilla_MPrima->EnableDragColMove( false );
	Grilla_MPrima->EnableDragColSize( true );
	Grilla_MPrima->SetColLabelSize( 30 );
	Grilla_MPrima->SetColLabelValue( 0, wxT("Producto") );
	Grilla_MPrima->SetColLabelValue( 1, wxT("Proveedor") );
	Grilla_MPrima->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	Grilla_MPrima->EnableDragRowSize( true );
	Grilla_MPrima->SetRowLabelSize( 30 );
	Grilla_MPrima->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	Grilla_MPrima->SetLabelFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 94, 90, false, wxEmptyString ) );
	
	// Cell Defaults
	Grilla_MPrima->SetDefaultCellAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	bSizer12->Add( Grilla_MPrima, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	m_toolBar2 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_VERTICAL ); 
	m_tool6 = m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/1 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool18 = m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/2 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool7 = m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/3 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool19 = m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/4 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolBar2->Realize(); 
	
	bSizer10->Add( m_toolBar2, 1, 0, 5 );
	
	
	bSizer12->Add( bSizer10, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer12 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( m_tool6->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_MPrima::OnClickAgregar ));
	this->Connect( m_tool18->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_MPrima::OnClickEditar ));
	this->Connect( m_tool7->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_MPrima::OnClickEliminar ));
	this->Connect( m_tool19->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_MPrima::OnClickVaciar ));
}

F_MPrima::~F_MPrima()
{
	// Disconnect Events
	this->Disconnect( m_tool6->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_MPrima::OnClickAgregar ));
	this->Disconnect( m_tool18->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_MPrima::OnClickEditar ));
	this->Disconnect( m_tool7->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_MPrima::OnClickEliminar ));
	this->Disconnect( m_tool19->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_MPrima::OnClickVaciar ));
	
}

D_MPrima::D_MPrima( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	titulo_mp = new wxStaticText( this, wxID_ANY, wxT("Agregar materia prima"), wxDefaultPosition, wxDefaultSize, 0 );
	titulo_mp->Wrap( -1 );
	titulo_mp->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer11->Add( titulo_mp, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Producto:        "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 11, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer12->Add( m_staticText3, 0, wxALL, 5 );
	
	tex_materiaprima = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,25 ), wxTE_CENTRE|wxTE_PROCESS_ENTER );
	tex_materiaprima->SetFont( wxFont( 12, 74, 90, 90, false, wxT("Arial") ) );
	
	bSizer12->Add( tex_materiaprima, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer12, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Proveedor:     "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont( wxFont( 11, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer13->Add( m_staticText4, 0, wxALL, 5 );
	
	tex_proveedor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,25 ), wxTE_CENTRE|wxTE_PROCESS_ENTER );
	tex_proveedor->SetFont( wxFont( 12, 74, 90, 90, false, wxT("Arial") ) );
	
	bSizer13->Add( tex_proveedor, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer13, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button5 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_button5, 0, wxALL, 5 );
	
	m_button6 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_button6, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer14, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer11 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	tex_materiaprima->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_MPrima::OnClickAgregar ), NULL, this );
	tex_proveedor->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_MPrima::OnClickAgregar ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_MPrima::OnClickCancelar ), NULL, this );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_MPrima::OnClickAgregar ), NULL, this );
}

D_MPrima::~D_MPrima()
{
	// Disconnect Events
	tex_materiaprima->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_MPrima::OnClickAgregar ), NULL, this );
	tex_proveedor->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_MPrima::OnClickAgregar ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_MPrima::OnClickCancelar ), NULL, this );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_MPrima::OnClickAgregar ), NULL, this );
	
}

F_Ventas::F_Ventas( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	m_toolBar8 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL ); 
	m_staticText17 = new wxStaticText( m_toolBar8, wxID_ANY, wxT("Buscar: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	m_staticText17->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	m_toolBar8->AddControl( m_staticText17 );
	m_toolBar8->AddSeparator(); 
	
	wxArrayString Choice_proChoices;
	Choice_pro = new wxChoice( m_toolBar8, wxID_ANY, wxPoint( -1,-1 ), wxSize( 200,-1 ), Choice_proChoices, 0 );
	Choice_pro->SetSelection( 0 );
	Choice_pro->SetFont( wxFont( 16, 74, 90, 90, false, wxT("Arial") ) );
	
	m_toolBar8->AddControl( Choice_pro );
	m_toolBar8->AddSeparator(); 
	
	m_toolBar8->AddSeparator(); 
	
	m_tool23 = m_toolBar8->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/3 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolBar8->Realize(); 
	
	bSizer12->Add( m_toolBar8, 0, wxEXPAND, 5 );
	
	Grilla_ventas = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	Grilla_ventas->CreateGrid( 0, 5 );
	Grilla_ventas->EnableEditing( true );
	Grilla_ventas->EnableGridLines( true );
	Grilla_ventas->EnableDragGridSize( false );
	Grilla_ventas->SetMargins( 0, 0 );
	
	// Columns
	Grilla_ventas->SetColSize( 0, 100 );
	Grilla_ventas->SetColSize( 1, 100 );
	Grilla_ventas->SetColSize( 2, 300 );
	Grilla_ventas->SetColSize( 3, 100 );
	Grilla_ventas->SetColSize( 4, 100 );
	Grilla_ventas->EnableDragColMove( false );
	Grilla_ventas->EnableDragColSize( true );
	Grilla_ventas->SetColLabelSize( 30 );
	Grilla_ventas->SetColLabelValue( 0, wxT("Producto") );
	Grilla_ventas->SetColLabelValue( 1, wxT("Precio por kg") );
	Grilla_ventas->SetColLabelValue( 2, wxT("Producto") );
	Grilla_ventas->SetColLabelValue( 3, wxT("Precio") );
	Grilla_ventas->SetColLabelValue( 4, wxT("Cantidad de kg") );
	Grilla_ventas->SetColLabelValue( 5, wxT("Hora") );
	Grilla_ventas->SetColLabelValue( 6, wxT("Fecha") );
	Grilla_ventas->SetColLabelValue( 7, wxEmptyString );
	Grilla_ventas->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	Grilla_ventas->EnableDragRowSize( true );
	Grilla_ventas->SetRowLabelSize( 30 );
	Grilla_ventas->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	Grilla_ventas->SetLabelFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 94, 90, false, wxEmptyString ) );
	
	// Cell Defaults
	Grilla_ventas->SetDefaultCellFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 90, false, wxEmptyString ) );
	Grilla_ventas->SetDefaultCellAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	bSizer12->Add( Grilla_ventas, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxHORIZONTAL );
	
	m_toolBar9 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL ); 
	m_staticText18 = new wxStaticText( m_toolBar9, wxID_ANY, wxT("Sumar por fecha:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	m_staticText18->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	m_toolBar9->AddControl( m_staticText18 );
	wxArrayString choice_sumafecChoices;
	choice_sumafec = new wxChoice( m_toolBar9, wxID_ANY, wxDefaultPosition, wxDefaultSize, choice_sumafecChoices, 0 );
	choice_sumafec->SetSelection( 0 );
	m_toolBar9->AddControl( choice_sumafec );
	m_tool24 = m_toolBar9->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/5 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_staticText19 = new wxStaticText( m_toolBar9, wxID_ANY, wxT("$"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	m_staticText19->SetFont( wxFont( 18, 74, 90, 92, false, wxT("Arial") ) );
	
	m_toolBar9->AddControl( m_staticText19 );
	
	tex_suma = new wxTextCtrl( m_toolBar9, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,35 ), wxTE_CENTRE );
	tex_suma->SetFont( wxFont( 16, 74, 90, 90, false, wxT("Arial") ) );
	
	m_toolBar9->AddControl( tex_suma );
	m_toolBar9->Realize(); 
	
	bSizer45->Add( m_toolBar9, 1, wxEXPAND, 5 );
	
	
	bSizer12->Add( bSizer45, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer12 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	Choice_pro->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( F_Ventas::OnClickChoicePro ), NULL, this );
	this->Connect( m_tool23->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Ventas::OnClickEliminar ));
	this->Connect( m_tool24->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( F_Ventas::OnClickSumarVentas ) );
}

F_Ventas::~F_Ventas()
{
	// Disconnect Events
	Choice_pro->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( F_Ventas::OnClickChoicePro ), NULL, this );
	this->Disconnect( m_tool23->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Ventas::OnClickEliminar ));
	this->Disconnect( m_tool24->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( F_Ventas::OnClickSumarVentas ) );
	
}

D_PrecioVenta::D_PrecioVenta( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("Producto: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	m_staticText20->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer47->Add( m_staticText20, 0, wxALL, 5 );
	
	nombre_producto = new wxStaticText( this, wxID_ANY, wxT("producto"), wxDefaultPosition, wxDefaultSize, 0 );
	nombre_producto->Wrap( -1 );
	nombre_producto->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer47->Add( nombre_producto, 0, wxALL, 5 );
	
	
	bSizer46->Add( bSizer47, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText22 = new wxStaticText( this, wxID_ANY, wxT("Precio: $"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	m_staticText22->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer48->Add( m_staticText22, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	tex_precio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 90,35 ), wxTE_CENTRE|wxTE_PROCESS_ENTER );
	tex_precio->SetFont( wxFont( 18, 74, 90, 90, false, wxT("Arial") ) );
	
	bSizer48->Add( tex_precio, 0, wxALL, 5 );
	
	
	bSizer46->Add( bSizer48, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button15 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer49->Add( m_button15, 0, wxALL, 5 );
	
	m_button16 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer49->Add( m_button16, 0, wxALL, 5 );
	
	
	bSizer46->Add( bSizer49, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer46 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	tex_precio->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_PrecioVenta::OnClickAceptar ), NULL, this );
	m_button15->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_PrecioVenta::OnClickCancelar ), NULL, this );
	m_button16->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_PrecioVenta::OnClickAceptar ), NULL, this );
}

D_PrecioVenta::~D_PrecioVenta()
{
	// Disconnect Events
	tex_precio->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_PrecioVenta::OnClickAceptar ), NULL, this );
	m_button15->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_PrecioVenta::OnClickCancelar ), NULL, this );
	m_button16->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_PrecioVenta::OnClickAceptar ), NULL, this );
	
}

F_Empleados::F_Empleados( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	Grilla_Empleado = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	Grilla_Empleado->CreateGrid( 0, 3 );
	Grilla_Empleado->EnableEditing( false );
	Grilla_Empleado->EnableGridLines( true );
	Grilla_Empleado->EnableDragGridSize( false );
	Grilla_Empleado->SetMargins( 0, 0 );
	
	// Columns
	Grilla_Empleado->SetColSize( 0, 200 );
	Grilla_Empleado->SetColSize( 1, 200 );
	Grilla_Empleado->SetColSize( 2, 200 );
	Grilla_Empleado->EnableDragColMove( false );
	Grilla_Empleado->EnableDragColSize( true );
	Grilla_Empleado->SetColLabelSize( 30 );
	Grilla_Empleado->SetColLabelValue( 0, wxT("Apellido y nombre") );
	Grilla_Empleado->SetColLabelValue( 1, wxT("Teléfono") );
	Grilla_Empleado->SetColLabelValue( 2, wxT("Email") );
	Grilla_Empleado->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	Grilla_Empleado->EnableDragRowSize( true );
	Grilla_Empleado->SetRowLabelSize( 30 );
	Grilla_Empleado->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	Grilla_Empleado->SetLabelFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 94, 90, false, wxEmptyString ) );
	
	// Cell Defaults
	Grilla_Empleado->SetDefaultCellAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	bSizer12->Add( Grilla_Empleado, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	m_toolBar2 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_VERTICAL ); 
	m_tool6 = m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/1 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	B_Editar = m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/2 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool23 = m_toolBar2->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/3 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolBar2->Realize(); 
	
	bSizer10->Add( m_toolBar2, 1, wxALIGN_RIGHT, 5 );
	
	
	bSizer12->Add( bSizer10, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer12 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( m_tool6->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Empleados::OnClickAgregar ));
	this->Connect( B_Editar->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Empleados::OnClickEditar ));
	this->Connect( m_tool23->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Empleados::OnClickEliminar ));
}

F_Empleados::~F_Empleados()
{
	// Disconnect Events
	this->Disconnect( m_tool6->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Empleados::OnClickAgregar ));
	this->Disconnect( B_Editar->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Empleados::OnClickEditar ));
	this->Disconnect( m_tool23->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Empleados::OnClickEliminar ));
	
}

D_AgregarEmpleado::D_AgregarEmpleado( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	titulo_emp = new wxStaticText( this, wxID_ANY, wxT("Agregar empleado"), wxDefaultPosition, wxDefaultSize, 0 );
	titulo_emp->Wrap( -1 );
	titulo_emp->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer11->Add( titulo_emp, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Apellido:  "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 11, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer12->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	tex_apempleado = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 350,25 ), wxTE_CENTRE|wxTE_PROCESS_ENTER );
	tex_apempleado->SetFont( wxFont( 11, 74, 90, 90, false, wxT("Arial") ) );
	
	bSizer12->Add( tex_apempleado, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer12, 0, 0, 5 );
	
	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText31 = new wxStaticText( this, wxID_ANY, wxT("Nombre:  "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	m_staticText31->SetFont( wxFont( 11, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer121->Add( m_staticText31, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	tex_nomempleado = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 350,25 ), wxTE_CENTRE|wxTE_PROCESS_ENTER );
	tex_nomempleado->SetFont( wxFont( 11, 74, 90, 90, false, wxT("Arial") ) );
	
	bSizer121->Add( tex_nomempleado, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer121, 0, 0, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Teléfono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont( wxFont( 11, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer13->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	tex_telempleado = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 350,25 ), wxTE_CENTRE|wxTE_PROCESS_ENTER );
	tex_telempleado->SetFont( wxFont( 11, 74, 90, 90, false, wxT("Arial") ) );
	
	bSizer13->Add( tex_telempleado, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer13, 0, 0, 5 );
	
	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText41 = new wxStaticText( this, wxID_ANY, wxT("Email:      "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	m_staticText41->SetFont( wxFont( 11, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer131->Add( m_staticText41, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	tex_emailempleado = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 350,25 ), wxTE_CENTRE|wxTE_PROCESS_ENTER );
	tex_emailempleado->SetFont( wxFont( 11, 74, 90, 90, false, wxT("Arial") ) );
	
	bSizer131->Add( tex_emailempleado, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer131, 0, 0, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button5 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_button5, 0, wxALL, 5 );
	
	m_button6 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_button6, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer14, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer11 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	tex_apempleado->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_AgregarEmpleado::OnClickAgregar ), NULL, this );
	tex_nomempleado->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_AgregarEmpleado::OnClickAgregar ), NULL, this );
	tex_telempleado->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_AgregarEmpleado::OnClickAgregar ), NULL, this );
	tex_emailempleado->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_AgregarEmpleado::OnClickAgregar ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_AgregarEmpleado::OnClickCancelar ), NULL, this );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_AgregarEmpleado::OnClickAgregar ), NULL, this );
}

D_AgregarEmpleado::~D_AgregarEmpleado()
{
	// Disconnect Events
	tex_apempleado->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_AgregarEmpleado::OnClickAgregar ), NULL, this );
	tex_nomempleado->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_AgregarEmpleado::OnClickAgregar ), NULL, this );
	tex_telempleado->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_AgregarEmpleado::OnClickAgregar ), NULL, this );
	tex_emailempleado->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_AgregarEmpleado::OnClickAgregar ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_AgregarEmpleado::OnClickCancelar ), NULL, this );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_AgregarEmpleado::OnClickAgregar ), NULL, this );
	
}

D_CambiarPass::D_CambiarPass( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Contraseña actual: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	m_staticText25->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer48->Add( m_staticText25, 0, wxALL, 5 );
	
	tex_passactual = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,25 ), wxTE_PASSWORD|wxTE_PROCESS_ENTER );
	bSizer48->Add( tex_passactual, 0, wxALL, 5 );
	
	
	bSizer47->Add( bSizer48, 0, 0, 5 );
	
	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText27 = new wxStaticText( this, wxID_ANY, wxT("Contraseña nueva: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	m_staticText27->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer51->Add( m_staticText27, 0, wxALL, 5 );
	
	tex_passnueva1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,25 ), wxTE_PASSWORD|wxTE_PROCESS_ENTER );
	bSizer51->Add( tex_passnueva1, 0, wxALL, 5 );
	
	
	bSizer47->Add( bSizer51, 0, 0, 5 );
	
	wxBoxSizer* bSizer52;
	bSizer52 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText28 = new wxStaticText( this, wxID_ANY, wxT("Repetir contraseña:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	m_staticText28->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer52->Add( m_staticText28, 0, wxALL, 5 );
	
	tex_passnueva2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,25 ), wxTE_PASSWORD|wxTE_PROCESS_ENTER );
	bSizer52->Add( tex_passnueva2, 0, wxALL, 5 );
	
	
	bSizer47->Add( bSizer52, 0, 0, 5 );
	
	wxBoxSizer* bSizer53;
	bSizer53 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText29 = new wxStaticText( this, wxID_ANY, wxT("Referencia nueva:   "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	m_staticText29->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer53->Add( m_staticText29, 0, wxALL, 5 );
	
	tex_reffnueva = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,25 ), wxTE_PROCESS_ENTER );
	bSizer53->Add( tex_reffnueva, 0, wxALL, 5 );
	
	
	bSizer47->Add( bSizer53, 0, 0, 5 );
	
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button17 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer54->Add( m_button17, 0, wxALL, 5 );
	
	m_button18 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer54->Add( m_button18, 0, wxALL, 5 );
	
	
	bSizer47->Add( bSizer54, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer47 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	tex_passactual->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_CambiarPass::OnClickAceptar ), NULL, this );
	tex_passnueva1->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_CambiarPass::OnClickAceptar ), NULL, this );
	tex_passnueva2->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_CambiarPass::OnClickAceptar ), NULL, this );
	tex_reffnueva->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_CambiarPass::OnClickAceptar ), NULL, this );
	m_button17->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_CambiarPass::OnClickCancelar ), NULL, this );
	m_button18->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_CambiarPass::OnClickAceptar ), NULL, this );
}

D_CambiarPass::~D_CambiarPass()
{
	// Disconnect Events
	tex_passactual->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_CambiarPass::OnClickAceptar ), NULL, this );
	tex_passnueva1->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_CambiarPass::OnClickAceptar ), NULL, this );
	tex_passnueva2->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_CambiarPass::OnClickAceptar ), NULL, this );
	tex_reffnueva->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_CambiarPass::OnClickAceptar ), NULL, this );
	m_button17->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_CambiarPass::OnClickCancelar ), NULL, this );
	m_button18->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_CambiarPass::OnClickAceptar ), NULL, this );
	
}

F_Impuestos::F_Impuestos( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	Grilla_Impuestos = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	Grilla_Impuestos->CreateGrid( 12, 6 );
	Grilla_Impuestos->EnableEditing( false );
	Grilla_Impuestos->EnableGridLines( true );
	Grilla_Impuestos->EnableDragGridSize( false );
	Grilla_Impuestos->SetMargins( 0, 0 );
	
	// Columns
	Grilla_Impuestos->SetColSize( 0, 100 );
	Grilla_Impuestos->SetColSize( 1, 100 );
	Grilla_Impuestos->SetColSize( 2, 100 );
	Grilla_Impuestos->SetColSize( 3, 100 );
	Grilla_Impuestos->SetColSize( 4, 100 );
	Grilla_Impuestos->SetColSize( 5, 100 );
	Grilla_Impuestos->EnableDragColMove( false );
	Grilla_Impuestos->EnableDragColSize( true );
	Grilla_Impuestos->SetColLabelSize( 30 );
	Grilla_Impuestos->SetColLabelValue( 0, wxT("Agua") );
	Grilla_Impuestos->SetColLabelValue( 1, wxT("Luz") );
	Grilla_Impuestos->SetColLabelValue( 2, wxT("Gas") );
	Grilla_Impuestos->SetColLabelValue( 3, wxT("Internet") );
	Grilla_Impuestos->SetColLabelValue( 4, wxT("Sueldos") );
	Grilla_Impuestos->SetColLabelValue( 5, wxT("Otros") );
	Grilla_Impuestos->SetColLabelValue( 6, wxT("INternet") );
	Grilla_Impuestos->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	Grilla_Impuestos->EnableDragRowSize( true );
	Grilla_Impuestos->SetRowLabelSize( 100 );
	Grilla_Impuestos->SetRowLabelValue( 0, wxT("Enero") );
	Grilla_Impuestos->SetRowLabelValue( 1, wxT("Febrero") );
	Grilla_Impuestos->SetRowLabelValue( 2, wxT("Marzo") );
	Grilla_Impuestos->SetRowLabelValue( 3, wxT("Abril") );
	Grilla_Impuestos->SetRowLabelValue( 4, wxT("Mayo") );
	Grilla_Impuestos->SetRowLabelValue( 5, wxT("Junio") );
	Grilla_Impuestos->SetRowLabelValue( 6, wxT("Julio") );
	Grilla_Impuestos->SetRowLabelValue( 7, wxT("Agosto") );
	Grilla_Impuestos->SetRowLabelValue( 8, wxT("Septiembre") );
	Grilla_Impuestos->SetRowLabelValue( 9, wxT("Octubre") );
	Grilla_Impuestos->SetRowLabelValue( 10, wxT("Noviembre") );
	Grilla_Impuestos->SetRowLabelValue( 11, wxT("Diciembre") );
	Grilla_Impuestos->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	Grilla_Impuestos->SetLabelFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 94, 90, false, wxEmptyString ) );
	
	// Cell Defaults
	Grilla_Impuestos->SetDefaultCellAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	bSizer12->Add( Grilla_Impuestos, 1, wxALL, 5 );
	
	
	this->SetSizer( bSizer12 );
	this->Layout();
	m_toolBar8 = this->CreateToolBar( wxTB_HORIZONTAL|wxTB_HORZ_LAYOUT, wxID_ANY ); 
	m_tool17 = m_toolBar8->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/1 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool18 = m_toolBar8->AddTool( wxID_ANY, wxT("tool"), wxBitmap( wxT("Iconos/3 copia.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolBar8->Realize(); 
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( m_tool17->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Impuestos::OnClickAgregar ));
	this->Connect( m_tool18->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Impuestos::OnClickEliminar ));
}

F_Impuestos::~F_Impuestos()
{
	// Disconnect Events
	this->Disconnect( m_tool17->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Impuestos::OnClickAgregar ));
	this->Disconnect( m_tool18->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( F_Impuestos::OnClickEliminar ));
	
}

D_AgregarImpuesto::D_AgregarImpuesto( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer129;
	bSizer129 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Agregar impuestos"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer129->Add( m_staticText2, 0, wxALL|wxEXPAND, 5 );
	
	wxArrayString Choice_mesimpuestoChoices;
	Choice_mesimpuesto = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( 130,30 ), Choice_mesimpuestoChoices, 0 );
	Choice_mesimpuesto->SetSelection( 0 );
	Choice_mesimpuesto->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer129->Add( Choice_mesimpuesto, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer11->Add( bSizer129, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer125;
	bSizer125 = new wxBoxSizer( wxHORIZONTAL );
	
	wxString Box_impuestoChoices[] = { wxT("Agua"), wxT("Luz"), wxT("Gas"), wxT("Internet"), wxT("Sueldos"), wxT("Otros") };
	int Box_impuestoNChoices = sizeof( Box_impuestoChoices ) / sizeof( wxString );
	Box_impuesto = new wxRadioBox( this, wxID_ANY, wxT("Impuesto"), wxDefaultPosition, wxDefaultSize, Box_impuestoNChoices, Box_impuestoChoices, 1, wxRA_SPECIFY_ROWS );
	Box_impuesto->SetSelection( 0 );
	Box_impuesto->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer125->Add( Box_impuesto, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer125, 0, 0, 5 );
	
	wxBoxSizer* bSizer127;
	bSizer127 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText71 = new wxStaticText( this, wxID_ANY, wxT("Ingrese el monto aquí:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	m_staticText71->SetFont( wxFont( 12, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer127->Add( m_staticText71, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	tex_montoimpuesto = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 150,35 ), wxTE_CENTRE|wxTE_PROCESS_ENTER );
	tex_montoimpuesto->SetFont( wxFont( 16, 74, 90, 90, false, wxT("Arial") ) );
	
	bSizer127->Add( tex_montoimpuesto, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer11->Add( bSizer127, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer128;
	bSizer128 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button18 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer128->Add( m_button18, 0, wxALL, 5 );
	
	m_button36 = new wxButton( this, wxID_ANY, wxT("Terminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer128->Add( m_button36, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer128, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer11 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	tex_montoimpuesto->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_AgregarImpuesto::OnClickTerminar ), NULL, this );
	m_button18->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_AgregarImpuesto::OnClickCancelar ), NULL, this );
	m_button36->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_AgregarImpuesto::OnClickTerminar ), NULL, this );
}

D_AgregarImpuesto::~D_AgregarImpuesto()
{
	// Disconnect Events
	tex_montoimpuesto->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( D_AgregarImpuesto::OnClickTerminar ), NULL, this );
	m_button18->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_AgregarImpuesto::OnClickCancelar ), NULL, this );
	m_button36->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( D_AgregarImpuesto::OnClickTerminar ), NULL, this );
	
}

F_Ayuda::F_Ayuda( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText26 = new wxStaticText( this, wxID_ANY, wxT("Ayuda"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	m_staticText26->SetFont( wxFont( 20, 74, 90, 90, false, wxT("Arial") ) );
	
	bSizer49->Add( m_staticText26, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	ListaAyuda = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	ListaAyuda->SetFont( wxFont( 10, 74, 90, 90, false, wxT("Arial") ) );
	
	bSizer49->Add( ListaAyuda, 1, wxALL|wxEXPAND, 5 );
	
	m_button20 = new wxButton( this, wxID_ANY, wxT("Listo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer49->Add( m_button20, 0, wxALL|wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer49 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button20->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( F_Ayuda::OnClickListo ), NULL, this );
}

F_Ayuda::~F_Ayuda()
{
	// Disconnect Events
	m_button20->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( F_Ayuda::OnClickListo ), NULL, this );
	
}
