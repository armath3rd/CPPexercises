#include <iostream>

void print_comb() {
	int a, b, c;

	for (a = 0; a < 8; a++) {
		for (b = a + 1; b < 9; b++) {
			for (c = b + 1; c < 10; c++) {
				std::cout << a << b << c << "  ";
			}
		}
	}
	std::cout << std::endl;
}

int main()
{
	print_comb();
}
