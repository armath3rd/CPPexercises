#include <iostream>

int main() {
	int i=97;
	while (i<123) {
		std::cout << char(i);
		i++;
	}
	std::cout << std::endl;
}
