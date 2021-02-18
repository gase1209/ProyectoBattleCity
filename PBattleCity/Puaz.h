#pragma once
#include "Trampa.h"
class Puaz :
    public Trampa
{
public:
    Puaz();
    void renderizar(SistemaRenderizacion* _sistemanRenderizacion);
    void setImagen(unsigned char _simbolo, ColorConsola _colorSimbolo, ColorConsola _colorFondo);
};

