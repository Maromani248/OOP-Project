#include "Funciones.h"
#include <ctime>
#include <windows.h>
#include <direct.h>
#include <iostream>
#include <cctype>
#include <sstream>
#include <cstdlib>
using namespace std;

void EsperarTantosSegundos(int milisegundos) {
	int t0 = clock();
	while((clock()-t0)<milisegundos*CLOCKS_PER_SEC/1000);
}

bool VerSiEsNumero(string numero) {
	//	int espacios = 0, guion_bajo = 0;
	for(size_t i=0;i<numero.size();++i) { 
		char a(numero[i]);
		if( (a < '0' || a > '9') /*&& a != ' ' && a != '-'*/)
			return false; 
		//		if( a == ' ' ) espacios++;
		//		if(espacios > 1) return false;
		//		if( a == '-' ) guion_bajo++;
		//		if(guion_bajo > 1) return false;
		
	}
	return true;
}

int Ejecutar(string comando) {
	
	comando = "cmd /C " + comando;
	
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	
	ZeroMemory( &si, sizeof(si) );
	si.cb = sizeof(si);
	ZeroMemory( &pi, sizeof(pi) );
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	
	// Start the child process.
	if( !CreateProcess( NULL, // No module name (use command line).
					   (char*)comando.c_str(), // Command line.
					   NULL,             // Process handle not inheritable.
					   NULL,             // Thread handle not inheritable.
					   FALSE,            // Set handle inheritance to FALSE.
					   0,                // No creation flags.
					   NULL,             // Use parent's environment block.
					   NULL,             // Use parent's starting directory.
					   &si,              // Pointer to STARTUPINFO structure.
					   &pi )             // Pointer to PROCESS_INFORMATION structure.
	   )
	{
		return -1;
	}
	
	// Wait until child process exits.
	WaitForSingleObject( pi.hProcess, INFINITE );
	
	DWORD ret;
	GetExitCodeProcess(pi.hProcess, &ret);
	
	// Close process and thread handles.
	CloseHandle( pi.hProcess );
	CloseHandle( pi.hThread );
	
	return ret;
}

bool ExisteArchivo(string ruta) {
	FILE *archivo;
	archivo = fopen(ruta.c_str(),"rb");
	if(archivo != 0){ fclose(archivo); return true;} else return false;
	return -1;
}

void CrearCarpeta(string ruta) {
	mkdir(ruta.c_str());
}

vector<string> ArchivosEnCarpeta( string ruta ) {
	vector<string> dat;
	char dir[50];
	strcpy(dir,ruta.c_str());
	
	WIN32_FIND_DATA findFileData;
	HANDLE          hFind;
	strcat (dir,"\\*");
	hFind = FindFirstFile(dir, &findFileData);
	if (hFind != INVALID_HANDLE_VALUE){
		int i = 0;
		while (FindNextFile(hFind, &findFileData) != 0){
			if(i != 0){
				i++;
				dat.push_back( findFileData.cFileName );
			}else i++;
		}
	}
	return dat;
}

vector<string> ArchivosEnCarpetaConExtension( string ruta, string extension ) {
	if(extension[0] != '.') extension = "." + extension;
	
	vector<string> dat;
	char dir[50];
	strcpy(dir,ruta.c_str());
	WIN32_FIND_DATA findFileData;
	HANDLE          hFind;
	strcat (dir,"\\*");
	hFind = FindFirstFile(dir, &findFileData);
	if (hFind != INVALID_HANDLE_VALUE){
		int i = 0;
		while (FindNextFile(hFind, &findFileData) != 0){
			if(i != 0){
				i++;
				string nom = findFileData.cFileName;
				if(nom.find(extension) != string::npos){
					dat.push_back( nom.erase(nom.size()-extension.size()) );
				}
				
			}else i++;
		}
	}
	return dat;
}

/// ------------------------------------  clase Time -------------------------------------

void Time::update ( ) {
	time_t actual = time(NULL);
	f = *(localtime(&actual));
}

string Time::get_day( ) { update ( );
string dia; stringstream ss; ss << f.tm_mday; dia = ss.str();
return (f.tm_mday < 10? "0"+dia : dia);
}

string Time::get_month( ) { update ( );
string mes; stringstream ss; ss << f.tm_mon+1; mes = ss.str();
return (f.tm_mon+1 < 10? "0"+mes : mes);
}

string Time::get_year( ) { update ( );
stringstream ss; ss << f.tm_year+1900;       
return ss.str();
}

string Time::get_hour( ) { update ( );
string hora; stringstream ss; ss << f.tm_hour; hora = ss.str();
return (f.tm_hour < 10? "0"+hora : hora);
}

string Time::get_minute( ) { update ( );
string minuto; stringstream ss; ss << f.tm_min; minuto = ss.str();
return (f.tm_min < 10? "0"+minuto : minuto);
}

string Time::get_second( ) { update ( );
string segundo; stringstream ss; ss << f.tm_sec; segundo = ss.str();
return (f.tm_sec < 10? "0"+segundo : segundo);
}

string Time::get_hour_full( ) { update ( );
return get_hour() + ":" + get_minute() + ":" + get_second();
}

string Time::get_day_full( ) { update ( );
return get_day() + "/" + get_month() + "/" + get_year();
}

string Time::get_day_full_text( ) { update ( );
return get_day_of_the_date_real() + ", " + get_day() + " de " + get_name_of_the_month( atoi(get_month().c_str())) + " de " + get_year();
}

string Time::get_day_of_the_date_real ( ) { update ( );
return get_day_of_the_date( atoi(get_day().c_str()),atoi(get_month().c_str()),atoi(get_year().c_str()));	
}

string Time::get_name_of_the_month (int mes) {
	switch(mes){
	case 1:  return "Enero";
	case 2:  return "Febrero";
	case 3:  return "Marzo";
	case 4:  return "Abril";
	case 5:  return "Mayo";
	case 6:  return "Junio";
	case 7:  return "Julio";
	case 8:  return "Agosto";
	case 9:  return "Septiembre";
	case 10: return "Octubre";
	case 11: return "Noviembre";
	case 12: return "Diciembre";
	}
	return "Error Mes";
}

string Time::get_day_of_the_date (int dia, int mes, int anio) {
	int s, an, ani, divi, operacion;
	
	if(dia < 0 && dia > 31) return "Error Dia";
	
	if( mes == 1) mes=0;
	if( mes == 2) mes=3;
	if( mes == 3) mes=3;
	if( mes == 4) mes=6;
	if( mes == 5) mes=1;
	if( mes == 6) mes=4;
	if( mes == 7) mes=6;
	if( mes == 8) mes=2;
	if( mes == 9) mes=5;
	if( mes == 10) mes=0;
	if( mes == 11) mes=3;
	if( mes == 12) mes=5;
	if(mes < 1 && mes > 12) return "Error Mes";
	
	if ((anio>=1600) && (anio<=1699)) s=6;
	if ((anio>=1700) && (anio<=1799)) s=4;
	if ((anio>=1800) && (anio<=1899)) s=2;
	if ((anio>=1900) && (anio<=1999)) s=0;
	if ((anio>=2000) && (anio<=2999)) s=6;
	if(anio < 1600 && anio > 2999) return "Error Año";
	
	an=(anio/100);
	ani=anio-(an*100);
	divi=(ani/4);
	
	operacion=(((dia+mes+ani+divi+s) % 7));
	
	if(operacion == 0) return "Domingo";
	if(operacion == 1) return "Lunes";
	if(operacion == 2) return "Martes";
	if(operacion == 3) return "Miércoles";
	if(operacion == 4) return "Jueves";
	if(operacion == 5) return "Viernes";
	if(operacion == 6) return "Sábado";
	return "Error DiaDeLaFecha";
}

int Time::get_number_of_days_of_the_month (int month) {
	if(month == 2) return 28;
	if(month == 11 || month == 4 || month == 6 || month == 9) return 30;
	else return 31;
}
///-------------------------------------------  Fin de la clase Time ----------------------------------------


//void ReproducirSonido (string soundfile) {
//	soundfile += ".wav";
//	PlaySoundA((LPCSTR)soundfile.c_str(),NULL,SND_LOOP|SND_ASYNC);
//}
//
//void SilenciarSonido ( ) {
//	PlaySoundA(0,0,0);
//}

string rutaDatos( ) {
	string ruta = string(getenv("APPDATA"));
	ruta += "\\UNO\\";
	return ruta;
}

string PasarDeIntAString(int numero) {
	string aux; stringstream ss; ss << numero; aux = ss.str();
	return aux;
}
