#include <iostream>

void trocar(int &a, int &b)
{
    int aux;

    aux = a;
    a = b;
    b = aux;
}

int main()
{
    int x, y;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> x;

    std::cout << "Digite o segundo numero: ";
    std::cin >> y;

    trocar(x, y);

    std::cout << "Primeiro numero: " << x << std::endl;
    std::cout << "Segundo numero: " << y << std::endl;

    return 0;
}