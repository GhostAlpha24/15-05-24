#include <iostream>
using namespace std;

int main() {
    // Definición de variables
    int sector;
    int cantidadEntradas;
    double costoEntrada;
    double totalPagar;

    // Mostrar opciones de sectores al usuario
    cout << "Seleccione el sector del estadio:\n";
    cout << "1. Sol general\n";
    cout << "2. Sol preferente\n";
    cout << "3. Sombra\n";
    cout << "4. Tribuna\n";
    cout << "5. Platea\n";
    cout << "Ingrese el numero correspondiente al sector: ";
    cin >> sector;

    // Validar el sector seleccionado y asignar el costo de la entrada
    switch (sector) {
        case 1:
            costoEntrada = 3;
            break;
        case 2:
            costoEntrada = 5;
            break;
        case 3:
            costoEntrada = 8;
            break;
        case 4:
            costoEntrada = 15;
            break;
        case 5:
            costoEntrada = 20;
            break;
        default:
            cout << "Opción inválida.\n";
            return 1; // Salir del programa con código de error
    }

    // Solicitar al usuario la cantidad de entradas
    cout << "Ingrese la cantidad de entradas solicitadas: ";
    cin >> cantidadEntradas;

    // Calcular el total a pagar
    totalPagar = costoEntrada * cantidadEntradas;

    // Mostrar el total a pagar
    cout << "El total a pagar por las " << cantidadEntradas << " entradas en el sector seleccionado es: $" << totalPagar << endl;

    return 0;
}
