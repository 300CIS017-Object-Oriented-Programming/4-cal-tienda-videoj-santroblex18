#include "descuentos.h"
#include <iostream>
using namespace std;

int leerTipoCliente() {
    int tipo;
    cout << "\nTipo de cliente [1=Regular, 2=Plata, 3=Oro]: ";
    cin >> tipo;
    return tipo;
}

double obtenerPorcentajeDescuento(int tipoCliente) {
    if (tipoCliente==CLIENTE_ORO) return 0.15;
    if (tipoCliente==CLIENTE_PLATA) return 0.08;
    return 0.0;
}

double calcularDescuentosAdicionales(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados) {
    double descuentoExtra=0;
    for (int i=0; i<cantidadJuegosRegistrados; i++) {
        string plataforma = obtenerPlataforma(codigos[i]);
        string categoria = obtenerCategoria(codigos[i]);
        if (plataforma=="PC") descuentoExtra+=5; // ejemplo
        if (categoria=="Deportes") descuentoExtra+=3; // ejemplo
    }
    return descuentoExtra;
}
