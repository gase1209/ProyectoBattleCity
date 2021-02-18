#pragma once
#include "FabricaNiveles.h"

class GameManager;

class FabricaNivel1 :
	public FabricaNiveles
{
public:
	FabricaNivel1(GameManager* _gameManager);
	void crearInstanciasMapaNivel1();
    Actor* crearInstanciaArbusto(float _x, float _y);
    Actor* crearInstanciaParedMetal(float _x, float _y);
    Actor* crearInstanciaParedLadrillo(float _x, float _y);
    Actor* crearInstanciaPantano(float _x, float _y);
    Actor* crearInstanciaTanqueEnemigo(float _x, float _y);
    Actor* crearInstanciaTanqueJugador(float _x, float _y);
    Actor* crearInstanciaObstaculo(float _x, float _y);
    Actor* crearInstanciaMina(float _x, float _y);
    Actor* crearInstanciaPuaz(float _x, float _y);
    Actor* crearInstanciaFuego(float _x, float _y);
    Actor* crearInstanciaTrampa(float _x, float _y);
    Actor* crearInstanciaGlobo(float _x, float _y);
};

