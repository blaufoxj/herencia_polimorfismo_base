//
// Created by carolina on 18/5/21.
//

#include "vehiculo.h"

Vehiculo::Vehiculo(float cilindrada, float combustible, float kilometraje)
{
    this->cilindrada = cilindrada;
    this->combustible = combustible;
    this->kilometraje = kilometraje;
}

float Vehiculo::coeficienteImpositivo()
{
    return (this->precioBase * this->cilindrada) / 1000000;
}