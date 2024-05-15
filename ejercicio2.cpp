#include <iostream>
using namespace std;

int main() {
    int edad;

    // Solicitar la edad al usuario
    cout << "Ingrese su edad: ";
    cin >> edad;

    // Verificar si es mayor de edad (mayor o igual a 18)
    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }

    return 0;
}
