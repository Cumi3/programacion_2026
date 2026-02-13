#include "Celular.h"
#include <iostream>

using namespace std;

Celular::Celular(string m, string mod, string c, int bateria) {
    marca = m;
    modelo = mod;
    color = c;
    capacidadBateria = bateria;
    estaEncendido = false;
}

void Celular::encender() {
    if (capacidadBateria > 0) {
        estaEncendido = true;
        cout << "El celular " << marca << " " << modelo << " se ha encendido." << endl;
    } else {
        cout << "No se puede encender. Bateria agotada." << endl;
    }
}

void Celular::apagar() {
    estaEncendido = false;
    cout << "Apagando celular..." << endl;
}

void Celular::llamar(string numero) {
    if (estaEncendido) {
        cout << "Llamando al numero: " << numero << "..." << endl;
    } else {
        cout << "El celular esta apagado. No puedes realizar llamadas." << endl;
    }
}