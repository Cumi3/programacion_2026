#ifndef EMPLEADO_TIEMPO_COMPLETO_H
#define EMPLEADO_TIEMPO_COMPLETO_H

#include "empleado.h"

// Herencia pública de Empleado
class EmpleadoTiempoCompleto : public Empleado {
private:
    int horasSemanales;
    float bono;

public:
    EmpleadoTiempoCompleto();
    EmpleadoTiempoCompleto(std::string nombre, std::string id, float salarioBase, int horasSemanales, float bono);

    // Setters
    void actualizarHorasSemanales(int nuevasHoras);
    void actualizarBono(float nuevoBono);

    // Getters
    int obtenerHorasSemanales();
    float obtenerBono();

    // Métodos específicos
    void mostrarInformacion(); // Sobrescribe el método de la clase base
    float calcularSalarioTotal();
};

#endif // EMPLEADO_TIEMPO_COMPLETO_H