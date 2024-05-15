#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    float corto1, corto2, parcial1, parcial2, laboratorio, proyecto;
    float promedio;

    // Solicitar al usuario que ingrese su nombre
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    // Solicitar al usuario que ingrese las notas de las seis evaluaciones
    cout << "Ingrese la nota del Corto 1: ";
    cin >> corto1;

    cout << "Ingrese la nota del Corto 2: ";
    cin >> corto2;

    cout << "Ingrese la nota del 1er Parcial: ";
    cin >> parcial1;

    cout << "Ingrese la nota del 2do Parcial: ";
    cin >> parcial2;

    cout << "Ingrese la nota del Laboratorio: ";
    cin >> laboratorio;

    cout << "Ingrese la nota del Proyecto: ";
    cin >> proyecto;

    // Calcular el promedio final de la materia
    promedio = (corto1 * 0.10) + (corto2 * 0.10) + (parcial1 * 0.15) + (parcial2 * 0.20) + (laboratorio * 0.20) + (proyecto * 0.25);

    // Determinar si pasó o no la materia
    if (promedio >= 6.0) {
        cout << nombre << ", has pasado la materia con un promedio final de " << promedio << "." << endl;
    } else {
        cout << nombre << ", no has pasado la materia. Tu promedio final es " << promedio << "." << endl;
    }

    return 0;
}
