#ifndef MOTOCICLETA_H
#define MOTOCICLETA_H

#include "vehiculo.h"

class Motocicleta : public Vehiculo {
private:
    int cilindrada;

public:
    Motocicleta(std::string m, std::string p, int a, int cil) 
        : Vehiculo(m, p, a), cilindrada(cil) {}

    void mostrarInformacion() override {
        std::cout << "[MOTO] " << marca << " | Placa: " << placa 
                  << " | Cilindrada: " << cilindrada << "cc" << std::endl;
    }
};

#endif