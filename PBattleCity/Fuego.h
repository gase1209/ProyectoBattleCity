#pragma once
#include "Trampa.h"
class Fuego :
    public Trampa
{
public:
    Fuego();
    void renderizar(SistemaRenderizacion* _sistemaRendizacion);
    void setImagen(unsigned char, ColorConsola _colorSimbolo, ColorConsola _colorFondo);
};

