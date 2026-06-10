#include <iostream>

int main()
{
    int numero;

    do
    {
        std::cout << "Digite um numero: ";
        std::cin >> numero;
    }
    while (numero < 0);

    std::cout << "Numero valido: " << numero;

    return 0;
}