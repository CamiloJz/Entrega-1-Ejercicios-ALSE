using namespace std;
#include <iostream>
/*Este ejercicio, se apoya en el ejercicio 2.1, sin embargo los datos que tomamos para analizar
par, impar, positivo y negativo son lo datos ingresados por consola. Para esto nos ayudamos de un 
ciclo for tanto para recorrer la entrada del vector, como para recorrer la salida (toma de los datos
del vector)*/ 


int main (){
    int L = 5, a = 0, b = 0;  
    int numeros[L];  

    cout << "Ingresa 5 numeros:\n"; //Se ingresan los numeros dentro del vector
    for (int i = 0; i < L; i++) {
        cout << "Casilla " << i + 1 << ": ";
        cin >> numeros[i];
    }
    for (int i = 0; i < L; i++) { //Se suman los numeros del vector
            a = numeros[i];
            b = b + a;
    }
    cout << "Suma: " << b << "\n";

    if (b > 0 && (b % 2) == 0){ //Se muestra la naturaleza del numero
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