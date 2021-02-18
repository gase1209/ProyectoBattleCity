#include "Globo.h"
#include "Utilitarios.h"


Globo::Globo(string _NombreGlobo, string _RepresentacionVisual, int _PosicionXI, int _PosicionXD, int _PosicionYS, int _PosicionYI) : NombreGlobo(_NombreGlobo), RepresentacionVisual(_RepresentacionVisual),
PosicionXI(_PosicionXI), PosicionXD(_PosicionXD),
PosicionYS(_PosicionYS), PosicionYI(_PosicionYI)
{

}

void Globo::VisualizarEnPantalla()
{
	gotoxy(PosicionXI, PosicionYI);
	cout << RepresentacionVisual << "(((" << ")))" << endl;

}