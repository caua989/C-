#include <iostream>

float calcularArea(float base, float altura)
{
    return base * altura;
}

int main()
{
    float base, altura;

    std::cout << "Digite a base: ";
    std::cin >> base;

    std::cout << "Digite a altura: ";
    std::cin >> altura;

    std::cout << "Area do retangulo: " << calcularArea(base, altura);

    return 0;
}