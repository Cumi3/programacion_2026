#ifndef COCHE_H
#define COCHE_H

#include "vehiculo.h"

class Coche : public Vehiculo {
private:
    int numeroPuertas;

public:
    Coche(std::string m, std::string p, int a, int puertas) 
        : Vehiculo(m, p, a), numeroPuertas(puertas) {}

    // 'override' asegura que estamos sobrescribiendo el método virtual
    void mostrarInformacion() override {
        std::cout << "[COCHE] " << marca << " | Placa: " << placa 
                  << " | Puertas: " << numeroPuertas << std::endl;
    }
};

#endif