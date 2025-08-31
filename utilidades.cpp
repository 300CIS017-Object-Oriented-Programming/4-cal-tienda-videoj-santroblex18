#include "utilidades.h"
#include <iostream>
using namespace std;
int leerCodigoJuego() {
    int codigo;
    cout << "Ingrese el codigo del juego: ";
    cin >> codigo;
    return codigo;
}
int leerCantidadJuegos() {
    int cantidad;
    cout << "Ingrese la cantidad: ";
    cin >> cantidad;
    return cantidad;
}
