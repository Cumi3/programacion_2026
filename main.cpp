#include <iostream>
#include <vector>
#include "vehiculo.h"
#include "coche.h"
#include "motocicleta.h"

int main() {
    // Vector polimórfico que guarda punteros de la clase base
    std::vector<Vehiculo*> inventario;

    // Agregando objetos al HEAP usando 'new'
    inventario.push_back(new Coche("Toyota", "YUC-001", 2024, 4));
    inventario.push_back(new Motocicleta("Italika", "ABC-99", 2025, 250));
    inventario.push_back(new Coche("Ford", "RNG-044", 2023, 2));

    std::cout << "=== INVENTARIO POLIMORFICO ===" << std::endl;

    // Ciclo que demuestra el polimorfismo dinámico
    for (size_t i = 0; i < inventario.size(); i++) {
        inventario[i]->mostrarInformacion();
    }

    // Liberación de memoria para evitar Memory Leaks
    for (Vehiculo* v : inventario) {
        delete v;
    }
    inventario.clear();

    return 0;
}