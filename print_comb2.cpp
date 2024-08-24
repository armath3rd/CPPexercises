#include <iostream>
 
void print_comb2() {
	int a,b;

	for (a=0; a < 99; a++){
	       for (b=a+1; b < 100; b++){
		       if (a < 10)
			       std::cout << 0;
		       std::cout << a << " ";
		       if (b < 10)
			       std::cout << 0;
		       std::cout << b << ", ";
		}
	}
	std::cout << std::endl;

}	
int main() {
         print_comb2();
}
