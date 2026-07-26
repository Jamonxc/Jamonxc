#include <iostream>
using namespace std;
int main() {
    char o;
    float x, y, z;
    cout << "Calculadora simple" << endl;
    cout << "1 - +" << endl;
    cout << "2 - -" << endl;
    cout << "3 - *" << endl;
    cout << "4 - /" << endl; 
    cin >> o;
    switch (o) {
        case '1': 
        cout << "SUMA" << endl;
        cout << "Ingrese el primer digito: ";
        cin >> x;
        cout << "Ingrese el segundo digito: ";
        cin >> y;
        z = x + y;
        cout << "El resultado es: " << z << endl;
        break;
        case '2': 
        cout << "RESTA" << endl;
        cout << "Ingresa el primer digito: ";
        cin >> x;
        cout << "Ingresa el segundo digito: ";
        cin >> y;
        z = x - y;
        cout << "El resultado es: " << z << endl;
        break;
        case '3': 
        cout << "MULTIPLICAR" << endl;
        cout << "Ingresa el primer digito: ";
        cin >> x;
        cout << "Ingresa el segundo digito: ";
        cin >> y;
        z = x * y;
        cout << "El resultado es: " << z << endl;
        break;
        case '4': 
        cout << "DIVIDIR" << endl;
        cout << "Ingresa el primer digito: ";
        cin >> x;
        cout << "Ingresa el segundo digito: ";
        cin >> y;
        if (y == 0) {
            cout << "ERROR" << endl;

        } else {
            z = x / y;
            cout << "El resultado es: " << z << endl;
        }
    } 
    return 0;
}
