using namespace std;
#include <iostream>
/*El presente ejercicio lo abordamos de forma que pudieramos usar condicionales, tanto de funciones 
como de operadores lógicos en la medida que fueran convenientes, es así que para evidenciar esto 
dividimos cada una de las posibilidades del ejercicio en cuanto a par, impar, positivo y negativo segun 
correspondiera el caso, además utilizamos el operador "! para evidenciar su funcionamiento aun sabiendo que 
no es lo más óptimo*/ 
int main()
{
    int a = 0;
    bool res = false;
    cout << "Ingrese su numero: ";
    cin >> a;
    if (a > 0 && (a % 2) == 0){ // uso de la funcion lógica and
        if (!res == true) //Uso del funcionamiento del inversor 
        {
            cout << "Resultado: Es positivo y par ";
        }
    }
    else if (a > 0 && (a % 2) != 0)
    {
        if (!res == true)
        {
            cout << "Resultado: Es positivo e impar ";
        }
    }
    else if (a < 0 && (a % 2) != 0)
    {
        if (!res == true)
        {
            cout << "Resultado: Es Negativo e impar ";
        }
    }
    else {
        cout << "Resultado: Es negativo y par";
    }

return 0;        
}