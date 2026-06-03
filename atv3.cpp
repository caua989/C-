#include <iostream>

int main() {
	int x = 0;
	int y = 0;
	
	std::cout << "Coloque um numero" << std::endl;
	std:: cin >> x;
	
	std::cout << std::endl << "Coloque outro numero" << std::endl;
	std:: cin >> y;
	
	std::cout << std::endl <<"Soma: " << x + y;
	
	return 0;
}