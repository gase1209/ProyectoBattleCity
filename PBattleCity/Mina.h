#pragma once
#include "Trampa.h"
class Mina :
    public Trampa
{
public:
    Mina();
    void renderizar(SistemaRenderizacion* _sistemanRenderizacion);
    void setImagen(unsigned char _simbolo, ColorConsola _colorSimbolo, ColorConsola _colorFondo);
};

