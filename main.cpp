#include <iostream>

#include "vehiculo.h"
#include "auto.h"
#include "camion.h"
#include "camioneta.h"

int main()
{
    Auto* automovil = new Auto(10.0,2.0,3.0);
    std::cout << automovil->valorMercado() << std::endl;
    std::cout << automovil->coeficienteImpositivo() << std::endl;

    delete automovil;

    return 0;
}


