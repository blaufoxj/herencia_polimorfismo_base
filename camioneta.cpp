//
// Created by carolina on 18/5/21.
//

#include "camioneta.h"
#include "constantes.h"

Camioneta::Camioneta(float cilindrada, float combustible, float kilometraje):Vehiculo(cilindrada, combustible, kilometraje)
{
    this->precioBase = PRECIO_BASE_CAMIONETA;
}

float Camioneta::valorMercado()
{
    return 3 * ( this->coeficienteImpositivo() * this->precioBase ) /
                (( this->kilometraje + this->cilindrada ) * 0.003f);
}