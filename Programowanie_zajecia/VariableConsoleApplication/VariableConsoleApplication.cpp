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

//* .Program obliczający pole trójkąta o podstawie b i wysokości h
void task6()
{
	int a;
	std::cout << "Podaj liczbe a \n";
	std::cin >> a;
	int b;
	std::cout << "Podaj liczbe b \n";
	std::cin >> b;
	int wynik;
	wynik = a * a + b * b;
	std::cout << "Wynik dzialania a^a + b^b wynosi :" << wynik;
}

//. Program obliczający pole trójkąta o podstawie b i wysokości h
void task7()
{
	int a;
	std::cout << "Podaj podstawe trójkąta (a): \n";
	std::cin >> a;
	int h;
	std::cout << "Podaj wysokość (h)";
	std::cin >> h;
	int wynik;
	wynik = a * h / 2;
	std::cout << "Wynik pola trójkąta (a*h\2) :" << wynik;
}

////* Program obliczający objętość kuli o promieniu r
void task8()
{
	float r;
	std::cout << "Podaj liczbe (r): \n";
	std::cin >> r;
	float v;

	v = 4.0 / 3.0 * 3.14 * (r * r * r);
	std::cout << "Wynik objętości koła wynosi:" << v;
}

///* .Program obliczający pole trapezu o podstawach a i b oraz wysokości h
void task9()
{
	int a;
	std::cout << "Podaj podstawe trapezu (a):";
	std::cin >> a;
	int b;
	std::cout << "Podaj pole drugiej podstawy (b):";
	std::cin >> b;
	int h;
	std::cout << "Podaj wysokość (h)";
	std::cin >> h;
	int w;
	w = ((a + b) * h) / 2;
	std::cout << "Wynik pola trapezu wynosi:" << w;
}

//* .Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task10()
{
	float l1;
	std::cout << "Podaj Liczbe (1):";
	std::cin >> l1;
	float l2;
	std::cout << "Podaj Liczbe (2):";
	std::cin >> l2;
	float l3;
	std::cout << "Podaj Liczbe (3):";
	std::cin >> l3;
	float w1;
	std::cout << "Podaj wage do liczby (1):";
	std::cin >> w1;
	float w2;
	std::cout << "Podaj wage do liczby (2):";
	std::cin >> w2;
	float w3;
	std::cout << "Podaj wage do liczby (3):";
	std::cin >> w3;
	float w, sumaWag;

	sumaWag = (w1 + w2 + w3);

	w = (l1 * w1 + l2 * w2 + l3 * w3) / sumaWag;
	std::cout << "Wynik średniej ważonej to :" << w;
}

void task11()
{
	int m, cm, mm;
	std::cout << "Podaj ilość metrów ,które mają być przekształcone na cm lub milimetry";
	std::cin >> m , mm;
	cm = m * 100;
	mm = m * 1000;

	std::cout << "Twoje metry w centymetrach   :" << cm << "\nTwoje metry w milimetrach   :" << mm;
}

void task12()
{
	float pln, usd;
	std::cout << "Podaj kwote PLN ,która ma być przeliczona na USD";
	std::cin >> pln;
	
	usd = pln * 3.65;
	std::cout << "Twoja suma z PLN na USD wynosi :" << usd;






}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task12();
}

//* .Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.
// 3,65