// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double celsius, fahrinheit;
	cout << "Please enter a Celsius value:"; 
	cin >> celsius;
		cout << "degress Celsius is " << (1.8 * celsius + 32.0) <<"degress Fahrinheit"  ;
    return 0;
}

