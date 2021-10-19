#include <iostream>

#include "vehiculo.h"
#include "auto.h"
#include "camion.h"
#include "camioneta.h"

using namespace std;

/* Dado el ejericico de la clase pasada de herencia y polimorfismo, quiero leer 
argumentos del programa que me indiquen el tipo de vehiculo a crear y los valores
necesarios para inicializarlo 

Por ejemplo, al correr el programa ./vehiculos:
./vehiculos auto 10 2 3

Quiero que se me cree un auto con cilindrada = 10, combustible = 2, kilometraje = 3

*/

int main(int argc, char *argv[])
{
    cout << "Ingresaste " << argc << " argumentos:" << "\n";
    for (int i = 0; i < argc; ++i)
    cout << argv[i] << "\n";

    Auto* automovil = new Auto(10.0f,2.0f,3.0f);
    cout << automovil->valorMercado() << endl;
    cout << automovil->coeficienteImpositivo() << endl;

    delete automovil;

    return 0;
}


