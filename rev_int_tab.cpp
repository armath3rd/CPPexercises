#include <iostream>

void  swap (int *a, int *b){
	*a +=*b;
	*b = *a-*b;
	*a -= *b;
}

void rev_int_tab(int *tab, int size){
	int i=0;
	while(i< size /2){
		swap(&tab[i], &tab[size -i -1]);
		i++;
	}
}

int main() {
	int  size = 10;
	int tab[10] = {20, 40, 50, 70, 60, 80, 90, 130, 47, 87};
	rev_int_tab(tab, size);

	for(int i = 0; i < size;i++){
		std::cout<< tab[i] << " ";
	}
	std::cout << std::endl;}
		




	


	       	


		
	

