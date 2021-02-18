#pragma once
#include "Actor.h"
#include "TipoTrampas.h"


class Trampa:
	public Actor
{
public:
	TipoTrampa tipoTrampa;

public:
	Trampa();
	virtual void renderizar(SistemaRenderizacion* _sistemaRenderizacion);
	TipoTrampa getTipoTrampa() { return tipoTrampa; }
	void setTipoTrampa(TipoTrampa _tipoTrampa) { tipoTrampa = _tipoTrampa; }
	static Trampa* getTrampa(TipoTrampa _tipoTrampa);
};

