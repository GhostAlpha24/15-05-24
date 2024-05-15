#include <iostream>
using namespace std;

int main() {
    float angulo;

    // Solicitar al usuario que ingrese el ángulo
    cout << "Ingrese el angulo en grados: ";
    cin >> angulo;

    // Verificar el tipo de ángulo
    if (angulo < 90) {
        cout << "El angulo es agudo." << endl;
    } else if (angulo > 90) {
        cout << "El angulo es obtuso." << endl;
    } else {
        cout << "El angulo es recto." << endl;
    }

    return 0;
}
