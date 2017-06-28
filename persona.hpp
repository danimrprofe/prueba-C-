

#include <iostream>
#include <string>

using namespace std;

class cPersona{
protected:	//queremos que la clase que hereda tenga acceso
	int edad;
	char estado_civil;
	string nombre;
public:
	cPersona(int ed, char ec, string nom);
	void mostrar();
};



