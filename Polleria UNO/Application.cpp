#include <wx/image.h>
#include "Application.h"
#include "V_Inicio.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	V_Inicio *win = new V_Inicio(NULL);
	win->Show();
	return true;
}

