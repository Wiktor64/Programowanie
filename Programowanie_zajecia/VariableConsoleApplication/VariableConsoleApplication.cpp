// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: #include <iostream>

//Napisz program który wczyta liczbę od użytkownika i ją wyświetli na konsoli
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
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;
	std::cout << "Podaj druga liczbe:\n";
	std::cin >> secondNumber;

	int avg;

	avg = (firstNumber + secondNumber) / 2;
	std::cout << "wynik sredniej" << avg << "\n";
}
//program obliczajacy pole prostokata

void task3()
{
	int firstSide, secondSide;
	std::cout << "Podaj dlugosc boku a:\n";
	std::cin >> firstSide;
	std::cout << "Podaj dlugosc boku b:\n";
	std::cin >> secondSide;

	int area;

	area = firstSide * secondSide;
	std::cout << "Pole prostokata: " << area << "\n";
}
//Program obliczający pole koła.
void task4()

{
	float r;
	std::cout << "Podaj R :\n";
	std::cin >> r;
	float area;

	area = r * 2 * 3.14;
	std::cout << "Pole koła : " << area << "\n";
}


void task5()
// Program obliczający objętość stożka.
{
	float h;
	std::cout << "Podaj H: \n";
	std::cin >> h;
	float r;
	std::cout << "Podaj R: \n";
	std::cin >> r;
	float v;
	v = (3.14 / 3) * (r * r) * h;
	std::cout << "Objetosc stozka: " << v << "\n";
}
int main()
{
	task5();
}


/*

Zmienna - pewien obszar w pamięci operacyjnej, w której można
w danej chwili przechować tylko jedną daną.

Instrukcja daklaracji zmiennej:
typ_zmienej nazwaZmiennej;

Typ zmiennej - wielkość obszaru pamięci, interpretacja ciągu bitów

int - 4 bajtowa liczba całkowita ze znakiem <-2 147 483 648, 2 147 483 647>

Nazwa zmiennej - nazwa obszaru w pamięci, identyfikator
Warunki niezbędne:
* dozwolone znaki:
	- alfabet angielski aA-zZ
	- cyfry arabskie 0-9
	- podkreślenie (podłoga) _
* pierwszym znakiem nie może być cyfra
* unikalny w swoim zakresie widoczności
* nie może to być słowo kluczowe (zarezerwowane) danego języka

Warunki programistów:
* nazwa zmiennej powinna oddawać charakter przechowywanych danych
* jeśli wiele słów to w miejscu spacji podkreślenie lub zaczynając od drugiego
  słowa piszemy je z dużej litery
* piszemy po angielsku
*/
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
