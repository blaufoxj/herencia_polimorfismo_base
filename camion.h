//
// Created by carolina on 18/5/21.
//

#ifndef H_P_CAMION_H
#define H_P_CAMION_H

#include "vehiculo.h"

class Camion: public Vehiculo
{
public:
    Camion(float cilindrada, float combustible, float kilometraje);

    float valorMercado();
};



#endif //H_P_CAMION_H
