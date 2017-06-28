

#include <iostream>
#include <string>
#include "persona.hpp"

using namespace std;


cPersona::cPersona(int ed, char ec, string nom)
	{
	        edad=ed;
		estado_civil=ec;
		nombre=nom;
	}
	
void cPersona::mostrar()
	{
		cout << "Edad: " << edad << endl;
		cout << "Nombre: " << nombre << endl;
	}


//class cAlumno:public cPersona{
//private:
//	int curso;
//	int num_asignaturas;
//public
//	cAlumno(int e,char ec, string n, int c, int na)
//	{
//	curso=c;
//	num_asignaturas=na;
//	}
//	cPersona.Persona(32,'c',"Daniel");
//}



