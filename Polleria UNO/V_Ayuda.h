#ifndef V_AYUDA_H
#define V_AYUDA_H
#include "wxfb_project.h"

class V_Ayuda : public F_Ayuda {
	
private:
	
protected:
	void OnClickListo( wxCommandEvent& event ) ;
public:
	V_Ayuda(wxWindow *parent=NULL);
	~V_Ayuda();
	void Mostrar_Info();
};

#endif

