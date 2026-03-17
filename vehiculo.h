#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
#include <string>

class Vehiculo {
protected:
    std::string marca;
    std::string placa;
    int anio;

public:
    // Constructor con parámetros
    Vehiculo(std::string m, std::string p, int a) : marca(m), placa(p), anio(a) {}

    // El uso de 'virtual' permite que las clases hijas 
    // ejecuten su propia versión de este método.
    virtual void mostrarInformacion() {
        std::cout << "Vehiculo: " << marca << " | Placa: " << placa << " | Anio: " << anio << std::endl;
    }

    // Destructor virtual para limpieza correcta en el Heap
    virtual ~Vehiculo() {}
};

#endif