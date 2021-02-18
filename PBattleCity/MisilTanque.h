#pragma once
#include "Actor.h"
#include "Municion.h"


enum TipoMisil {
	Misil_DestruirTanque,
	Misil_DestruirParedMetal,
	Misil_DestruirParedLadrillo,
	Misil_DestruirTanqueEnemigo
};

enum MaterialMisil {
	MaterialMisil_Hierro,
	MaterialMisil_Acero,
	MaterialMisil_Plata
};


enum Desplazamiento {
	Desplazamiento_Vuelo
};


class MecanismoDespazamiento {
	Desplazamiento desplazamiento;
};

class Modelo {
public:
	MaterialMisil materialMisil;
};

class Energia {
public:
	int* combustible;
};


class MisilTanque:
	public Municion
{private:
	TipoMisil tipoMisil;
	Modelo* modelo;
	MecanismoDespazamiento* mecanismoDesplazamiento;
	Energia* energia;
};

