#include "Trampa.h"
#include "Fuego.h"
#include "Puaz.h"
#include "Mina.h"
#include "TipoTrampas.h"

Trampa::Trampa() {
	setTipoActor(TipoActor_Trampa);
	tipoTrampa = TipoTrampa_None;
}

void Trampa::renderizar(SistemaRenderizacion* _sistemaRenderizacion)
{
	Actor::renderizar(_sistemaRenderizacion);
}

Trampa* Trampa::getTrampa(TipoTrampa _tipoTrampa)
{
	if (_tipoTrampa == TipoTrampa_Mina) {
		return new Mina();
	}
	else if (_tipoTrampa == TipoTrampa_Puaz) {
		return new Puaz();
	}
	else if (_tipoTrampa == TipoTrampa_Fuego) {
		return new Fuego();
	}
	else {
		return NULL;
	}
}

