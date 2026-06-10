#include <iostream>

using namespace std;

int main()
{
    int numero;

    do
    {
        cout << "Digite um numero: ";
        cin >> numero;
    }
    while (numero < 0);

    cout << "Numero valido: " << numero;

    return 0;
}