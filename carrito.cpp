#include "carrito.h"
#include <iostream>
using namespace std;

void agregarJuegoAlCarrito(int codigos[], int cantidades[], int& cantidadJuegosRegistrados, int codigo, int cantidad) {
    for (int i=0; i<cantidadJuegosRegistrados; i++) {
        if (codigos[i]==codigo) {
            cantidades[i]+=cantidad;
            return;
        }
    }
    if (cantidadJuegosRegistrados<MAX_ITEMS) {
        codigos[cantidadJuegosRegistrados]=codigo;
        cantidades[cantidadJuegosRegistrados]=cantidad;
        cantidadJuegosRegistrados++;
    } else {
        cout << "Carrito lleno, no se puede agregar mas." << endl;
    }
}

double calcularSubtotalCarrito(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados) {
    double subtotal=0;
    for (int i=0; i<cantidadJuegosRegistrados; i++) {
        subtotal += obtenerPrecioJuego(codigos[i]) * cantidades[i];
    }
    return subtotal;
}

void mostrarResumenCompra(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados, double porcentajeDescuento) {
    cout << "\n===== RESUMEN DE COMPRA =====" << endl;
    double subtotal=0;
    for (int i=0; i<cantidadJuegosRegistrados; i++) {
        double precio = obtenerPrecioJuego(codigos[i]);
        double totalJuego = precio * cantidades[i];
        cout << obtenerNombreJuego(codigos[i]) << " (" << cantidades[i] << ") - $" << totalJuego << endl;
        subtotal += totalJuego;
    }
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento aplicado: " << porcentajeDescuento*100 << "%" << endl;
    cout << "Total final: $" << subtotal*(1-porcentajeDescuento) << endl;
}

void cargarCompraDemo(int codigos[], int cantidades[], int& cantidadJuegosRegistrados) {
    codigos[0]=101; cantidades[0]=1;
    codigos[1]=202; cantidades[1]=2;
    codigos[2]=301; cantidades[2]=1;
    cantidadJuegosRegistrados=3;
}

void limpiarCarrito(int codigos[], int cantidades[], int& cantidadJuegosRegistrados) {
    cantidadJuegosRegistrados=0;
}
