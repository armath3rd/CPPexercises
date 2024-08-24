#include <iostream>

int pow(int n, int k)
{
	int num = 1;

	for (int i = 0; i < n; i++)
		num *= k;
	return num;
}

bool is_unique(int a)
{
	int mn;

	while (a) {
		mn = a % 10;
		a /= 10;
		if (a % 10 >= mn)
			return false;
	}
	return true;
}

int gen_lnum(int n) {
	int result;

	result = 0;
	while (n) {
		result *= 10;
		result += 10 - n;
		n--;
	}
	return result;
}

void print_combn(int n) {
	int a;
	int ln = gen_lnum(n);
	
	for(a = pow(n-2, 10); a < pow(n, 10); a++) {
		if (is_unique(a)) {
			if (a < pow(n-1, 10))
				std::cout << 0;
			std::cout << a;
			if (a != ln)
				std::cout << ", ";
		}
	}
}

int main() {
	print_combn(3);
	std::cout << std::endl;
}
