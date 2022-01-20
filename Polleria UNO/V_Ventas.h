#ifndef V_VENTAS_H
#define V_VENTAS_H
#include "wxfb_project.h"
#include "Clase_Productos.h"
#include "Clase_Ventas.h"

class V_Ventas : public F_Ventas {
	
private:
	Clase_Productos cp;
	Clase_Ventas cv;
protected:
	void OnClickChoicePro( wxCommandEvent& event ) ;
	void OnClickAgregar( wxCommandEvent& event ) ;
	void OnClickEliminar( wxCommandEvent& event ) ;
	void OnClickSumarVentas( wxCommandEvent& event ) ;
public:
	V_Ventas(wxWindow *parent=NULL);
	~V_Ventas();
	vector<int> Ordenar_Choice_Fechas();
	void Cargar_Grilla();
};

#endif

