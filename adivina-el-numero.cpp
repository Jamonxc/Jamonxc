#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));
    int NumSec = rand() % 100 + 1;
    int intento = 0;
    cout << "Adivina el numero del 1 - 100" << endl;
    
    while (intento != NumSec) {
        cout << "Ingresa tu intento: ";
        cin >> intento;
        if (intento < NumSec) {
            cout << "El numero es mayor que " << intento << " Intentalo de nuevo." << endl;
        } else if (intento > NumSec) {
            cout << "El numero es menor que " << intento << " Intentalo de nuevo." << endl;
        } else {
            cout << "Felicidades!!! Adivinaste el numero: " << NumSec << endl;
        }
    }
    return 0;
}
