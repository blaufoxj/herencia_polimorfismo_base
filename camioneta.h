//
// Created by carolina on 18/5/21.
//

#ifndef H_P_CAMIONETA_H
#define H_P_CAMIONETA_H

#include "vehiculo.h"

class Camioneta: public Vehiculo
{
public:
    Camioneta(float cilindrada, float combustible, float kilometraje);

    float valorMercado();
};


#endif //H_P_CAMIONETA_H
