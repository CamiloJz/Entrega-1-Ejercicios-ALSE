using namespace std;
#include <iostream>
#include <cmath>

int main(){
    int n = 0, t = 0;
    float p = 0, r = 0, a = 0;
    cout << "Ingrese valores correspondientes a: " << "\n";
    cout << "Cantidad invertida: "; cin >> p;
    cout << "Tasa de interés anual: "; cin >> r;
    cout << "Numero de veces que se aplica el interés al año: "; cin >> n;
    cout << "Numero de años: "; cin >> t;

    a = p*pow((1+(r/n)),n*t);
    cout << "Su interés compuesto es: " << a;
    return 0;
}