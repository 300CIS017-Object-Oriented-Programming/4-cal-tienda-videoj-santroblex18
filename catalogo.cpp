#include "catalogo.h"
#include <iostream>
using namespace std;


const int codigosJuegos[TOTAL_JUEGOS] = {101,102,103,201,202,203,301,302,303,401,402,403};
const string nombresJuegos[TOTAL_JUEGOS] = {
    "God of War", "Spiderman 2", "Halo Infinite",
    "Zelda BOTW", "Mario Odyssey", "Metroid Dread",
    "FIFA 24", "NBA 2K24", "Madden 24",
    "Civilization VI", "Age of Empires IV", "Starcraft II"
};
const double preciosJuegos[TOTAL_JUEGOS] = {60,70,55,50,60,65,70,65,60,55,60,50};
const string plataformasJuegos[TOTAL_JUEGOS] = {
    "PS5","PS5","Xbox","Switch","Switch","Switch",
    "Xbox","PS5","PC","PC","PC","PC"
};
const string categoriasJuegos[TOTAL_JUEGOS] = {
    "Accion","Accion","Accion",
    "Aventura","Aventura","Aventura",
    "Deportes","Deportes","Deportes",
    "Estrategia","Estrategia","Estrategia"
};

void mostrarCatalogoJuegos() {
    cout << "\n===== CATALOGO DE VIDEOJUEGOS =====" << endl;
    for (int i=0; i<TOTAL_JUEGOS; i++) {
        cout << codigosJuegos[i] << " - " 
             << nombresJuegos[i] << " | " 
             << plataformasJuegos[i] << " | " 
             << categoriasJuegos[i] << " | $" 
             << preciosJuegos[i] << endl;
    }
}

string obtenerNombreJuego(int codigoJuego) {
    for (int i=0; i<TOTAL_JUEGOS; i++) 
        if (codigosJuegos[i]==codigoJuego) return nombresJuegos[i];
    return "Desconocido";
}

double obtenerPrecioJuego(int codigoJuego) {
    for (int i=0; i<TOTAL_JUEGOS; i++) 
        if (codigosJuegos[i]==codigoJuego) return preciosJuegos[i];
    return 0;
}

string obtenerPlataforma(int codigoJuego) {
    for (int i=0; i<TOTAL_JUEGOS; i++) 
        if (codigosJuegos[i]==codigoJuego) return plataformasJuegos[i];
    return "Desconocida";
}

string obtenerCategoria(int codigoJuego) {
    for (int i=0; i<TOTAL_JUEGOS; i++) 
        if (codigosJuegos[i]==codigoJuego) return categoriasJuegos[i];
    return "Desconocida";
}
