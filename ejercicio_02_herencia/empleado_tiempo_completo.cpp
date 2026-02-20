#include <iostream>
#include "empleado_tiempo_completo.h"

EmpleadoTiempoCompleto::EmpleadoTiempoCompleto() : Empleado() {
    horasSemanales = 0;
    bono = 0.0f;
}

// Constructor con parámetros
EmpleadoTiempoCompleto::EmpleadoTiempoCompleto(std::string nombre, std::string id, float salarioBase, int horasSemanales, float bono)
    : Empleado(nombre, id, salarioBase) {
    this->horasSemanales = horasSemanales;
    this->bono = bono;
}

// Setters
void EmpleadoTiempoCompleto::actualizarHorasSemanales(int nuevasHoras) { horasSemanales = nuevasHoras; }
void EmpleadoTiempoCompleto::actualizarBono(float nuevoBono) { bono = nuevoBono; }

// Getters
int EmpleadoTiempoCompleto::obtenerHorasSemanales() { return horasSemanales; }
float EmpleadoTiempoCompleto::obtenerBono() { return bono; }

// Visualización (Sobrescritura)
void EmpleadoTiempoCompleto::mostrarInformacion() {
    Empleado::mostrarInformacion(); // Directriz cumplida: Llama al método de la clase base primero
    std::cout << "Horas Semanales: " << horasSemanales << std::endl;
    std::cout << "Bono Adicional: $" << bono << std::endl;
}

// Cálculo del salario total
float EmpleadoTiempoCompleto::calcularSalarioTotal() {
    return salarioBase + bono; 
}