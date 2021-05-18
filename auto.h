//
// Created by carolina on 18/5/21.
//

#ifndef H_P_AUTO_H
#define H_P_AUTO_H

#include "vehiculo.h"

class Auto: public Vehiculo
{
public:
    Auto(float cilindrada, float combustible, float kilometraje);

    float valorMercado();
};


#endif //H_P_AUTO_H
