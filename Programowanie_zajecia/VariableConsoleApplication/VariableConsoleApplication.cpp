// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: #include <iostream>

//Napisz program kt�ry wczyta liczb� od u�ytkownika i j� wy�wietli na konsoli
void task1()
{
	//1
	int numberFromUser;
	//2
	std::cout << "Podaj Liczbe:\n";
	//3     
	std::cin >> numberFromUser;
	//4
	std::cout << "Podales " << numberFromUser << "\n";
}
void task2()
{


}

int main()
{
	task2();
}


/*

Zmienna - pewien obszar w pami�ci operacyjnej, w kt�rej mo�na
w danej chwili przechowa� tylko jedn� dan�.

Instrukcja daklaracji zmiennej:
typ_zmienej nazwaZmiennej;

Typ zmiennej - wielko�� obszaru pami�ci, interpretacja ci�gu bit�w

int - 4 bajtowa liczba ca�kowita ze znakiem <-2 147 483 648, 2 147 483 647>

Nazwa zmiennej - nazwa obszaru w pami�ci, identyfikator
Warunki niezb�dne:
* dozwolone znaki:
	- alfabet angielski aA-zZ
	- cyfry arabskie 0-9
	- podkre�lenie (pod�oga) _
* pierwszym znakiem nie mo�e by� cyfra
* unikalny w swoim zakresie widoczno�ci
* nie mo�e to by� s�owo kluczowe (zarezerwowane) danego j�zyka

Warunki programist�w:
* nazwa zmiennej powinna oddawa� charakter przechowywanych danych
* je�li wiele s��w to w miejscu spacji podkre�lenie lub zaczynaj�c od drugiego
  s�owa piszemy je z du�ej litery
* piszemy po angielsku
*/
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
