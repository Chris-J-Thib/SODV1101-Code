#include <iostream>
using namespace std;
int main()
{
    string repeat = "Y";
    while (repeat == "Y")
    {
        int count;
        cout << "How many numbers are on your list? ";
        cin >> count;
        double data[count];
        cout << "Enter the numbers: " << endl;
        for (int i = 0; i < count; ++i)
            cin >> data[i];
        cout << "List in reverse order: " << endl;
        for (int i = 0; i < count; ++i)
            cout << data[count - i - 1] << endl;
        do
        {
            cout << "Try another list? [Y/N] ";
            cin >> repeat;
        } while (repeat != "Y" && repeat != "N");
    }
    return 0;
}
