#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>

class Empleado {
protected:
    std::string nombre;
    std::string id;
    float salarioBase;

public:
    Empleado();
    Empleado(std::string nombre, std::string id, float salarioBase);

    // Setters
    void actualizarNombre(std::string nuevoNombre);
    void actualizarId(std::string nuevoId);
    void actualizarSalarioBase(float nuevoSalario);

    // Getters
    std::string obtenerNombre();
    std::string obtenerId();
    float obtenerSalarioBase();

    // Visualización
    void mostrarInformacion();
};

#endif // EMPLEADO_H