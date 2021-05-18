//
// Created by carolina on 18/5/21.
//

#ifndef H_P_VEHICULO_H
#define H_P_VEHICULO_H

class Vehiculo
{

protected:
    float kilometraje;
    float combustible;
    float precioBase;
    float cilindrada;

public:
    Vehiculo(float cilindrada, float combustible, float kilometraje);

    virtual float valorMercado() = 0;

    float coeficienteImpositivo();

};


#endif //H_P_VEHICULO_H
