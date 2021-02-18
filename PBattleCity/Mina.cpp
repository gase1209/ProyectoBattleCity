#include "Mina.h"

Mina::Mina()
{
	setTipoActor(TipoActor_Trampa);
	tipoTrampa = TipoTrampa_Mina;
	setDireccion(Direccion_Ninguna);
	setAvatar(avatarMina);
	setFisico(false);
	
}

void Mina::renderizar(SistemaRenderizacion* _sistemanRenderizacion)
{
	Trampa::renderizar(_sistemanRenderizacion);
}
