#pragma once
#include "Actor.h"
#include "Objeto.h"
#include "PerroAdapter.h"

PerroAdapter::PerroAdapter() : Actor(), Perro("GloboDestructor", "O", x, x + ancho, y, y + alto) {
	x = 10;
	y = 15;
	ancho = 1;
	alto = 1;
}

void PerroAdapter::renderizar(SistemaRenderizacion* _sistemaRenderizacion)
{
	Actor::renderizar(_sistemaRenderizacion);
}
