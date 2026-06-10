#include <iostream>

int main() {
	int nota = 0;
	std::cout << "Digite a nota de 1 a 100: ";
	std::cin >> nota;
	
	if (nota >= 90) {
	std::cout << "Excelente";
	} else if (nota >= 70) {
		std::cout << "Bom";
	} else {
		std::cout << "Precisa melhorar";
	}
	
	return 0;
}