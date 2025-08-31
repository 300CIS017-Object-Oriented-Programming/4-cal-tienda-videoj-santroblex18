#ifndef CARRITO_H
#define CARRITO_H

#include "catalogo.h"

const int MAX_ITEMS = 20;
void agregarJuegoAlCarrito(int codigos[], int cantidades[], int& cantidadJuegosRegistrados, int codigo, int cantidad);
double calcularSubtotalCarrito(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados);
void mostrarResumenCompra(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados, double porcentajeDescuento);
void cargarCompraDemo(int codigos[], int cantidades[], int& cantidadJuegosRegistrados);
void limpiarCarrito(int codigos[], int cantidades[], int& cantidadJuegosRegistrados);

#endif
