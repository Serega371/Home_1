// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const double d = 0.0254;
const double f = 12;
const double pb = 2.2;

int main()
{
	double ft_rost, d_rost, massa;
	cout << "please enter our rost (ft) here:";
	cin >> ft_rost;
	cout << "please enter our rost (d) here:";
	cin >> d_rost;
	cout << "please enter our massa (pb) here:";
	cin >> massa;
	massa = massa / pb;
	ft_rost = ft_rost *f; // ft in d
	d_rost = (d_rost + ft_rost)*d;
	double BMI = massa / (d_rost*d_rost);
	cout << BMI << endl;
    return 0;
}

