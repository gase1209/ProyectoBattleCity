#pragma once
#include "Tanque.h"
#include "GameManager.h"
#include "TanqueJugador.h"
#include "Actor.h"

class TanqueEnemigo1 :
    public Tanque
{
private:
    Actor* tanqueJugador;
protected:
    float analizarTemporizador;
    float analizarTiempo;

    float ultimoAnalisisX;
    float ultimoAnalisisY;

    void analizar(Actor* _tanqueJugador);
    void moverDireccionRandom();
    void moverDireccionIA(Actor* _tanqueJugador);

public:
    /*TanqueEnemigo(TipoActor _tipoActor) {
        tipoActor = _tipoActor;
    }*/

    TanqueEnemigo1();
    //TanqueEnemigo(Actor* _tanqueJugador);
    ~TanqueEnemigo1();
    void actualizar(float _dt);

    virtual Tanque* clone() { return NULL; }
   /* Tanque* clone()
    {
        return new TanqueEnemigo();
    }*/
};

