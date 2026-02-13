#ifndef CELULAR_H
#define CELULAR_H

#include <string>

using namespace std; 

class Celular {
private:
    string marca;
    string modelo;
    string color;
    int capacidadBateria; // mAh
    bool estaEncendido;

public:
    Celular(string m, string mod, string c, int bateria);

    void encender();
    void apagar();
    void llamar(string numero);
};
#endif