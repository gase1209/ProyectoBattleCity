#include "GloboAdapter.h"
#include "Objeto.h"


GloboAdapter::GloboAdapter() : Actor(), Globo("GloboDestructor", "O", x, x + ancho, y, y + alto) {
	x = 10;
	y = 15;
	ancho = 1;
	alto = 1;
}

void GloboAdapter::renderizar(SistemaRenderizacion* _sistemaRenderizacion)
{
	Actor::renderizar(_sistemaRenderizacion);
}

