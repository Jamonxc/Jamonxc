#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    int NumRan = rand() % 3;
    string compu = "";
    int opcion;
    cout << "Piedra papel o tijera" << endl;
    cout << "1. Piedra" << endl;
    cout << "2. Papel" << endl;
    cout << "3. Tijera" << endl;
    cout << "Elige una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
        cout << "Elegiste piedra" << endl;
        cout << "La computadora eligio: ";
        if (NumRan == 0) {
            compu = "Piedra";
            cout << compu << endl;
            cout << "Empate" << endl;
        } else if (NumRan == 1) {
            compu = "Papel";
            cout << compu << endl; 
            cout << "Perdiste" << endl;
        } else {
            compu = "Tijera";
            cout << compu << endl;
            cout << "Ganaste" << endl;
        }
        break;
        case 2: 
        cout << "Elegiste papel" << endl;
        cout << "La computadora eligio: ";
        if (NumRan == 0) {
            compu = "Piedra";
            cout << compu << endl;
            cout << "Ganaste" << endl;
        } else if (NumRan == 1) {
            compu = "Papel";
            cout << compu << endl;
            cout << "Empate" << endl;
        } else {
            compu = "Tijera";
            cout << compu << endl;
            cout << "Perdiste" << endl;
        }
        break;
        case 3:
        cout << "Elegiste tijera" << endl;
        cout << "La computadora eligio: ";
        if (NumRan == 0) {
            compu = "Piedra";
            cout << compu << endl;
            cout << "Perdiste" << endl;
        } else if (NumRan == 1) {
            compu = "Papel";
            cout << compu << endl;
            cout << "Ganaste" << endl;
        } else {
            compu = "Tijera";
            cout << compu << endl;
            cout << "Empate" << endl;
        }
        break;
        default:
        cout << "Opcion Invalidad" << endl;
    }
    return 0;
}
