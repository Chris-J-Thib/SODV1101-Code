#include <iostream>
using namespace std;

enum class Food
{
    Burger = 1,
    Fries = 2,
    Nuggies = 3,
};

int main()
{
    cout << "Welcome to the digital food station!" << endl;
    cout << "What food would you like? " << endl
         << endl;
    cout << " 1 - Burger" << endl;
    cout << " 2 - Fries" << endl;
    cout << " 3 - Nuggies" << endl;
    int input;
    cin >> input;
    Food food;
    food = {static_cast<Food>(input)};
    switch (food)
    {
    case Food::Burger:
        cout << "Burger" << endl;
        break;
    case Food::Fries:
        cout << "Fries" << endl;
        break;
    case Food::Nuggies:
        cout << "Nuggies" << endl;
        break;
    default:
        cout << "Invalid selection" << endl;
    }
    return 0;
}