#include "Puaz.h"

Puaz::Puaz()
{
	setTipoActor(TipoActor_Trampa);
	tipoTrampa = TipoTrampa_Puaz;
	setDireccion(Direccion_Ninguna);
	setAvatar(avatarPuaz);
	setFisico(false);

}

void Puaz::renderizar(SistemaRenderizacion* _sistemanRenderizacion)
{
	Trampa::renderizar(_sistemanRenderizacion);
}