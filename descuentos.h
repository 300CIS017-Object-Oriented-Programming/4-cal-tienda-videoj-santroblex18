#ifndef DESCUENTOS_H
#define DESCUENTOS_H

#include "catalogo.h"
const int CLIENTE_REGULAR=1;
const int CLIENTE_PLATA=2;
const int CLIENTE_ORO=3;

int leerTipoCliente();
double obtenerPorcentajeDescuento(int tipoCliente);
double calcularDescuentosAdicionales(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados);

#endif
