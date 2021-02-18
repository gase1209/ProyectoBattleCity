#pragma once
#include "Actor.h"
#include "Objeto.h"
#include "Globo.h"

class  GloboAdapter :
	public Actor, public Globo
{
public:
	int x = 0.0f;
	int y = 0.0f;
	int ancho = 1.0f;
	int alto = 1.0;
	GloboAdapter();
	void VisualizarEnPantalla();
	void renderizar(SistemaRenderizacion* _sistemaRenderizacion);

};


