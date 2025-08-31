#ifndef CATALOGO_H
#define CATALOGO_H

#include <string>
using namespace std;

const int TOTAL_JUEGOS = 12;
extern const int codigosJuegos[TOTAL_JUEGOS];
extern const string nombresJuegos[TOTAL_JUEGOS];
extern const double preciosJuegos[TOTAL_JUEGOS];
extern const string plataformasJuegos[TOTAL_JUEGOS];
extern const string categoriasJuegos[TOTAL_JUEGOS];

void mostrarCatalogoJuegos();
string obtenerNombreJuego(int codigoJuego);
double obtenerPrecioJuego(int codigoJuego);
string obtenerPlataforma(int codigoJuego);
string obtenerCategoria(int codigoJuego);

#endif

