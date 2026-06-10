#include <iostream>

int main() {
	int nota;
	int nota2;
	int nota3;
	float media;
	
	std::cout << "Digite as 3 notas: " << std::endl;
	std::cin >> nota;
	std::cin >> nota2;
	std::cin >> nota3;
	
	media = (nota + nota2 + nota3)/3.0;
	
	std::cout << std::endl <<"Media: " << media;
	
	return 0;
}