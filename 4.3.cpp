#include <iostream>
using namespace std;

struct CandyBar{
    string name;
    double mass;
    int kalorii;
};
string input_name()
{
    string name;
    cout <<"Имя:";
    cin >> name;
    return name;
}
double input_mass()
{
    double mass;
    cout << "Масса: ";
    cin >> mass;
    return mass;
}
int input_kalorii()
{
    int kalorii;
    cout << "Калории: ";
    cin >> kalorii;
    return kalorii;
}
int main()
{
CandyBar food_1;
CandyBar food_2;
CandyBar food_3;
food_1.name = input_name();
food_1.mass = input_mass();
food_1.kalorii = input_kalorii();

food_2.name = input_name();
food_2.mass = input_mass();
food_2.kalorii = input_kalorii();

food_3.name = input_name();
food_3.mass = input_mass();
food_3.kalorii = input_kalorii();

cout << "Итог" << endl;
cout<< "food_1: " << food_1.name << " | mass:" << food_1.mass << " | kallorii: " << food_1.kalorii;
cout << endl;
cout  <<"food_2: " << food_2.name << " | mass:" << food_2.mass << " | kallorii: " << food_2.kalorii;
cout << endl;
cout <<"food_3: " << food_3.name << " | mass:" << food_3.mass << " | kallorii: " << food_3.kalorii;
cout << endl;
return 0;
}