#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));
    int NumSec = rand() % 100 + 1;
    int intento;
    cout << "Adivina el numero secreto del 1 - 100" << endl;
    
    while (intento != NumSec) {
        cout << "Ingresa tu intento: ";
        cin >> intento;
        if (intento < NumSec) {
            cout << "El numero es mayor que " << intento << endl;
            cout << "Intenalo de nuevo." << endl;
        } else if (intento > NumSec) {
            cout << "El numero es menor que " << intento << endl;
            cout << "Intentalo de nuevo." << endl;
        } else {
            cout << "Felicidades. Adivinaste el numero secreto: " << NumSec << endl;
        }
    }
    return 0;
}
