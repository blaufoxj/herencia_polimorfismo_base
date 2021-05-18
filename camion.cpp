//
// Created by carolina on 18/5/21.
//

#include "camion.h"
#include "constantes.h"

Camion::Camion(float cilindrada, float combustible, float kilometraje):Vehiculo(cilindrada, combustible, kilometraje)
{
    this->precioBase = PRECIO_BASE_CAMION;
}

float Camion::valorMercado()
{
    return ( this->coeficienteImpositivo() * this->precioBase ) /
            ( ( this->kilometraje + this->cilindrada + this->combustible ) * 0.002 );
}