#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Variables para almacenar los coeficientes de la ecuación cuadrática
    double a, b, c;

    // Solicitar al usuario que ingrese los valores de a, b y c
    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    // Verificar si a es igual a cero
    if (a == 0) {
        if (b == 0) {
            cout << "La ecuación no es cuadrática, b y a son cero." << endl;
        } else {
            cout << "La ecuación no es cuadrática, a es cero." << endl;
        }
        return 1;
    }

    // Calcular el discriminante
    double discriminante = b * b - 4 * a * c;

    // Verificar si el discriminante es negativo
    if (discriminante < 0) {
        cout << "La ecuacion no tiene soluciones reales." << endl;
    } else {
        // Calcular las raíces
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);

        // Mostrar las raíces
        cout << "Las raices de la ecuacion son: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    return 0;
}
