#include <iostream>

int main()
{
    int vetor[5];

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Digite um valor: ";
        std::cin >> vetor[i];
    }

    std::cout << "Valores digitados:" << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << vetor[i] << std::endl;
    }

    return 0;
}