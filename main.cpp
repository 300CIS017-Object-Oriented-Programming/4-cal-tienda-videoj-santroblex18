#include <iostream>
#include "catalogo.h"
#include "carrito.h"
#include "descuentos.h"
#include "utilidades.h"
using namespace std;
int main() {
    int codigos[MAX_ITEMS], cantidades[MAX_ITEMS];
    int cantidadJuegosRegistrados=0;
    int opcion;
    do {
        cout << "\n===== MENU GAMESTORE =====" << endl;
        cout << "1. Mostrar catalogo" << endl;
        cout << "2. Agregar juego al carrito" << endl;
        cout << "3. Mostrar resumen compra" << endl;
        cout << "4. Cargar compra demo" << endl;
        cout << "5. Limpiar carrito" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        switch(opcion) {
            case 1:
                mostrarCatalogoJuegos();
            break;
            case 2: {
                int codigo=leerCodigoJuego();
                int cantidad=leerCantidadJuegos();
                agregarJuegoAlCarrito(codigos,cantidades,cantidadJuegosRegistrados,codigo,cantidad);
                break;
            }
            case 3: {
                int tipo=leerTipoCliente();
                double desc=obtenerPorcentajeDescuento(tipo);
                mostrarResumenCompra(codigos,cantidades,cantidadJuegosRegistrados,desc);
                break;
            }
            case 4:
                cargarCompraDemo(codigos,cantidades,cantidadJuegosRegistrados);
            break;
            case 5:
                limpiarCarrito(codigos,cantidades,cantidadJuegosRegistrados);
            break;
        }
    } while(opcion!=0);

    return 0;
}
