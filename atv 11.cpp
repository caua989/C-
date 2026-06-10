#include <iostream>

using namespace std;

int main()
{
    int vetor[5];
    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite um valor: ";
        cin >> vetor[i];

        soma = soma + vetor[i];
    }

    cout << "Soma do vetor: " << soma;

    return 0;
}