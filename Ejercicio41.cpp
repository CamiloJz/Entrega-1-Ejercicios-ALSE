using namespace std;
#include <iostream>

int main (){
    int L = 5, a = 0, b = 0;  
    int numeros[L];  

    cout << "Ingresa 5 numeros:\n";
    for (int i = 0; i < L; i++) {
        cout << "Casilla " << i + 1 << ": ";
        cin >> numeros[i];
    }
    for (int i = 0; i < L; i++) {
            a = numeros[i];
            b = b + a;
    }
    cout << "Suma: " << b << "\n";

    if (b > 0 && (b % 2) == 0){
            cout << "Resultado: Es positivo y par ";
    }
    else if (b > 0 && (b % 2) != 0)
    {
            cout << "Resultado: Es positivo e impar ";
    }
    else if (b < 0 && (b % 2) != 0)
    {
            cout << "Resultado: Es Negativo e impar ";
    }
    else {
        cout << "Resultado: Es negativo y par";
    }
    return 0;
}