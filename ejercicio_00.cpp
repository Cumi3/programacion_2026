#include <iostream>
#include <string>

using namespace std;
const int CAPACIDAD = 10; 

struct Estudiante {
    string Nombre;
    string Codigo;
    int Edad;
    float Promedio;
    bool Activo;
};

int main() {
    Estudiante lista[CAPACIDAD]; 
    int cantidad = 0;    
    int opcion = 0;

    string nombre, codigo;
    int edad;
    float promedio;

    do {
        cout << "\nGESTION ESCOLAR" << endl;
        cout << "1. Agregar Estudiante" << endl;
        cout << "2. Ver lista de alumnos" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            if (cantidad < CAPACIDAD) {
                cout << "\n--- Nuevo Estudiante" << endl;
                
                cout << "Nombre completo: ";
               cin.ignore();    
                getline(cin, lista[cantidad].Nombre);

                cout << "Codigo: ";
                cin >> lista[cantidad].Codigo;

                cout << "Edad: ";
                cin >> lista[cantidad].Edad;

                cout << "Promedio: ";
                cin >> lista[cantidad].Promedio;

                lista[cantidad].Activo = true;
                cantidad++; 
                cout << "¡Alumno guardado!" << endl;
            } else {
                cout << "La clase esta llena." << endl;
            }
        }
        else if (opcion == 2) {
            cout << "\n--- LISTA DE CLASE ---" << endl;
        if (cantidad == 0) {
                cout << "Aun no hay alumnos registrados." << endl;
            } 
        else {
                for(int i = 0; i < cantidad; i++) {
                    cout << "Alumno #" << i+1 << endl;
                    cout << "Nombre: " << lista[i].Nombre << endl;
                    cout << "Codigo: " << lista[i].Codigo << endl;
                    cout << "Nota:   " << lista[i].Promedio << endl;
                }
            }
        }
    } while (opcion != 3);
    return 0;
}