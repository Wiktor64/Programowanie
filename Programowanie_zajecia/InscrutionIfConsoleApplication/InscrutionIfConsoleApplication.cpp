

#include <iostream>

void task1()
{
	int number;
	std::cout << "Podaj liczbe calkowita \n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Poda³eœ liczbe dodatni¹\n";

	std::cout << "Koniec programu";




}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();
}

