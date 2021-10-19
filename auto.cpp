//
// Created by carolina on 18/5/21.
//

#include "auto.h"
#include "constantes.h"

Auto::Auto(float cilindrada, float combustible, float kilometraje):Vehiculo(cilindrada, combustible, kilometraje)
{
    this->precioBase = PRECIO_BASE_AUTO;
}

float Auto::valorMercado()
{
    return (this->coeficienteImpositivo() * this->precioBase * this->combustible) /
            (1 + 0.001f * this->kilometraje);
}