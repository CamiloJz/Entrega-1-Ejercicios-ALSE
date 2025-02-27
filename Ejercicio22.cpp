using namespace std;
#include <iostream>

int main()
{
    int a = 0;
    bool res = false;
    cout << "Ingrese su numero: ";
    cin >> a;
    if (a > 0 && (a % 2) == 0){
        if (!res == true)
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