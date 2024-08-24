#include <iostream>

void is_negative(int n) {
	if (n<0)
		std::cout << "N";
	else 
		std::cout << "P";
	std::cout << std::endl;

			
}


int main() {
	is_negative (-9);
	is_negative (5);
	is_negative (0);
}

	
