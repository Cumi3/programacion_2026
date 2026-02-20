#include <iostream>
#include "empleado_tiempo_completo.h"

int main() {
    std::cout << "=== Módulo de Recursos Humanos ===" << std::endl;

    std::cout << "\n--- Creando empleado (Constructor por defecto) ---" << std::endl;
    EmpleadoTiempoCompleto empleado1;
    empleado1.mostrarInformacion();
    std::cout << "Salario Total: $" << empleado1.calcularSalarioTotal() << std::endl;

    std::cout << "\n--- Actualizando datos del Empleado 1 ---" << std::endl;
    empleado1.actualizarNombre("Roberto Gomez");
    empleado1.actualizarId("EMP-101");
    empleado1.actualizarSalarioBase(12000.50);
    empleado1.actualizarHorasSemanales(40);
    empleado1.actualizarBono(1500.00);
    
    empleado1.mostrarInformacion();
    std::cout << "Salario Total (Base + Bono): $" << empleado1.calcularSalarioTotal() << std::endl;

    std::cout << "\n--- Creando empleado (Constructor con parametros) ---" << std::endl;
    EmpleadoTiempoCompleto empleado2("Lucia Fernandez", "EMP-205", 18500.00, 48, 3000.00);
    
    empleado2.mostrarInformacion();
    std::cout << "Salario Total (Base + Bono): $" << empleado2.calcularSalarioTotal() << std::endl;
    std::cout << std::endl;

    return 0;
}