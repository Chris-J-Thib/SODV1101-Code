#include <iostream>
using namespace std;
int main() {
    static float conv = 3.28084;
    float meter;
    cout << "Meter to Feet conversion\nPlease enter number of meters... \n";
    cin >> meter;
    cout << meter* conv << " Feet";

}
