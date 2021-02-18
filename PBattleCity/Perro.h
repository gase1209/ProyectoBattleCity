#pragma once
#include <iostream>
#include "Objeto.h"

using namespace std;

class Perro
{

private:
	string NombrePerro;
	string RepresentacionVisual;
	int PosicionXI;
	int PosicionXD;
	int PosicionYS;
	int PosicionYI;
public:
	Perro(string Nombre, string RepresentacionVisual, int _PosicionXI, int _PosicionXD, int _PosicionYS, int PosicionYI);
	void VisualizarEnPantalla();
};


