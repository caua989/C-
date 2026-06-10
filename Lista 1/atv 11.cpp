#include <iostream>

int main()
{
    int vetor[5];
    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Digite um valor: ";
        std::cin >> vetor[i];

        soma = soma + vetor[i];
    }

    std::cout << "Soma do vetor: " << soma;

    return 0;
}