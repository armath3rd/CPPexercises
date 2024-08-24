#include <iostream>

void put_char(int num)
{
	std::cout << char(num);
}

void put_nbr(int nb)
{
	int mn;

	if (nb == -2147483648)
	{
		put_char('-');
		put_char(2 + 48);
		put_nbr(nb % 1000000000 * -1);
	}
	else if (nb < 0)
	{
		nb *= -1;
		put_char('-');
	}
	else if (nb > 9)
		put_nbr(nb / 10);
	if (nb >= 0)
	{
		mn = nb % 10;
		put_char(mn + 48);
	}
}

int main() {
	put_nbr(1);
	std::cout << std::endl;
}
