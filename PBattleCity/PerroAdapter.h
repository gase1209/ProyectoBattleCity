#pragma once
#include "Actor.h"
#include "Objeto.h"
#include "Perro.h"

class  PerroAdapter :
	public Actor, public Perro
{
public:
	int x = 0.0f;
	int y = 0.0f;
	int ancho = 1.0f;
	int alto = 1.0;
	PerroAdapter();
	void VisualizarEnPantalla();
	void renderizar(SistemaRenderizacion* _sistemaRenderizacion);

};