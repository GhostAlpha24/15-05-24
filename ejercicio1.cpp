#include <iostream>
using namespace std;

int main() {
    float angulo1, angulo2, angulo3;

    // Solicitar al usuario que ingrese los dos ángulos
    cout << "Ingrese el primer angulo en grados: ";
    cin >> angulo1;

    cout << "Ingrese el segundo angulo en grados: ";
    cin >> angulo2;

    // Calcular el tercer ángulo
    angulo3 = 180 - angulo1 - angulo2;

    // Mostrar el tercer ángulo
    cout << "El tercer angulo es: " << angulo3 << " grados." << endl;

    return 0;
}
