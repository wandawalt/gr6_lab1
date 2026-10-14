// gr6_lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
//zadanie1
	cout << "X               X   X              X" << endl;
	cout << " X             X     X            X  " << endl;
	cout << "  X           X       X          X    " << endl;
	cout << "  X    X      X       X    X     X     " << endl;
	cout << "   X  X  X  X          X  X  X  X      " << endl;
	cout << "    X      X            X     X        " << endl;
	cout << endl << endl << endl;
//zadanie2
	cout << "            *        " << endl;
	cout << "           * *       " << endl;
	cout << "        *** * ***     " << endl;
	cout << "          * * *      " << endl;
	cout << "          *   *          " << endl;
	cout << "                    " << endl;
	cout << endl << endl << endl;

//zadanie4
	/*float a;
	float b;
	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << "Podaj liczbe b: ";
	cin >> b;
	float c;
	c = a * b;
	cout << "wynik dodawania: " << a + b << endl;
	cout << "wynik mnozenia: " << c << endl;*/
//zadanie5
	double f;
	double c;
	cout << "Podaj temperature w stopniach Fahrenheita: ";
	cin >> f;
	c = 5.0 * (f - 32.0) / 9.0;
	cout << "Temperatura w stopniach Celsjusza: " << c << endl;
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
