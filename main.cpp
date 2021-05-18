#include <iostream>

#include "vehiculo.h"
#include "auto.h"
#include "camion.h"
#include "camioneta.h"

int main()
{
    Auto* _auto = new Auto(10.0,2.0,3.0);
    std::cout << _auto->valorMercado() << std::endl;
    std::cout << _auto->coeficienteImpositivo() << std::endl;

    delete _auto;

    return 0;
}


