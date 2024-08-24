#include <iostream>

void ult_ft(int *********ptr)
{
	*********ptr = 200;
}

int main() {
	int a = 10;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****f = &e;
	int ******g = &f;
	int *******h = &g;
	int ********i = &h;
	ult_ft(&i);
	std::cout << a << std::endl;
	std::cout << ********i << std::endl;
}
