// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include"iostream"
using namespace std;
int farlongtold(int);
int main()
{
	int farlong;
	cout << "Enter the weight in farlong ";
	cin >> farlong;
	int pounds = farlongtold(farlong);
	cout << farlong << "farlong are";
	cout << pounds << "yards.\n";
	return 0;
}
int farlongtold(int sts)
{
	return 220 * sts;
    return 0;
}

