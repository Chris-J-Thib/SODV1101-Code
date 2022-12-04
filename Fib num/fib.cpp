#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n = 10;
    cout << "number of terms?: ";
    cin >> n;
    n--;
    cout << setw(4);
    for (int i = 1; i <= n + 1; i++)
    {

        for (int k = 1; k < i; k++)
        {
            cout << "  ";
        }

        for (int j = 0; j < n - i + 2; j++)
        {
            cout << setw(4) << n - i + 1;
        }

        cout << endl;
    }
    return 1;
}
