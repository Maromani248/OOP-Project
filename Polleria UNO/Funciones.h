#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <string>
#include <vector>
#include <ctime>
#include <windows.h>
using namespace std;

void EsperarTantosSegundos( int milisegundos );
bool VerSiEsNumero( string numero );
int Ejecutar( string comando );
bool ExisteArchivo(string ruta);
void CrearCarpeta(string ruta);
vector<string> ArchivosEnCarpeta( string ruta );
vector<string> ArchivosEnCarpetaConExtension( string ruta, string extension );
string rutaDatos();

class Time{
	struct tm f;
	void update();
public:
	string get_day();
	string get_month();
	string get_year();
	string get_hour();
	string get_minute();
	string get_second();
	string get_hour_full();
	string get_day_full();
	string get_day_full_text();
	string get_day_of_the_date_real();
	string get_day_of_the_date( int day, int month, int year );
	string get_name_of_the_month( int month );
	int get_number_of_days_of_the_month( int month );
};

#endif

