#include "Perro.h"
#include "Utilitarios.h"


Perro::Perro(string _NombrePerro, string _RepresentacionVisual, int _PosicionXI, int _PosicionXD, int _PosicionYS, int _PosicionYI) : NombrePerro(_NombrePerro), RepresentacionVisual(_RepresentacionVisual),
PosicionXI(_PosicionXI), PosicionXD(_PosicionXD),
PosicionYS(_PosicionYS), PosicionYI(_PosicionYI)
{
}

void Perro::VisualizarEnPantalla()
{
	gotoxy(PosicionXI, PosicionYI);
	cout << RepresentacionVisual << "(((" << ")))" << endl;

}
