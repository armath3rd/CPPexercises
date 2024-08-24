#include <iostream>

void ft_ft(int *ptr);

int main() {
	int a;

	a = 10;
	std::cout << "A before ft_ft: " << a << " " << &a << std::endl;
	ft_ft(&a);
	std::cout << "A after ft_ft: " << a << " " << &a << std::endl;
}

void ft_ft(int *ptr) {
	*ptr = 20;
	std::cout << "PTR: " << *ptr << " " << ptr << std::endl;
}
