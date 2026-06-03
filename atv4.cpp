#include <iostream>

int main() {
	int idade = 0;
	std::cout << "Digite uma idade: ";
	std::cin >> idade;
	
	if (idade > 18) {
	std::cout << "Maior de idade";
	} else {
		std::cout << "Menor de idade";
	}
	
	return 0;
}