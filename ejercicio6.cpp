#include <iostream>
using namespace std;

int main() {
    int tipoMotor;

    // Solicitar al usuario que ingrese el tipo de motor
    cout << "Ingrese el tipo de motor (0, 1, 2, 3, 4): ";
    cin >> tipoMotor;

    // Condicional switch para determinar el tipo de bomba según el valor de tipoMotor
    switch (tipoMotor) {
        case 0:
            cout << "No está establecido un valor definido para el tipo de bomba" << endl;
            break;
        case 1:
            cout << "La bomba es una bomba de agua" << endl;
            break;
        case 2:
            cout << "La bomba es una bomba de gasolina" << endl;
            break;
        case 3:
            cout << "La bomba es una bomba de hormigón" << endl;
            break;
        case 4:
            cout << "La bomba es una bomba de pasta alimenticia" << endl;
            break;
        default:
            cout << "No existe un valor válido para tipo de bomba" << endl;
            break;
    }

    return 0;
}
