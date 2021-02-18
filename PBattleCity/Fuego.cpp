#include "Fuego.h"

Fuego::Fuego()
{
	setTipoActor(TipoActor_Trampa);
	tipoTrampa = TipoTrampa_Fuego;
	setDireccion(Direccion_Ninguna);
	setAvatar(avatarFuego);
	setFisico(false);
}

void Fuego::renderizar(SistemaRenderizacion* _sistemaRendizacion)
{
	Trampa::renderizar(_sistemaRendizacion);
}
