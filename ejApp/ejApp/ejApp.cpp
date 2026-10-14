#include <iostream>
using namespace std;

class SesionUsuario{
private:
	string nombreUsuario;
	int tiempoLimite;
	bool activa;
public:
	// 1. Constructor per defecte (sense paràmetres)
	SesionUsuario() :nombreUsuario(""), tiempoLimite(0), activa(false) {}
	// 2. Constructor amb paràmetres
	SesionUsuario(string n, int t, bool a) :nombreUsuario(n), tiempoLimite(t), activa(a) {}
};

int main() {
	SesionUsuario u1; // Crida al constructor per defecte("",0, false)
	SesionUsuario("jose", 60,true); // Crida al constructor parametritzat
}