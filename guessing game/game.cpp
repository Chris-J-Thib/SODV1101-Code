#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int max = 100;
    int min = 1;
    char res;
    while (true)
    {
        system("CLS");
        int gCount = 1;
        int guess, num;
        srand(time(NULL));
        num = rand() % max + min;
        guess = 0;
        cout << "Guess: ";
        while (guess != num)
        {
            if (guess != 0)
            {
                if (guess > num)
                    cout << "Lower" << endl;
                else
                    cout << "Higher" << endl;
            }
            cin >> guess;
            system("CLS");
            gCount++;
        }
        cout << "Correct! You used " << gCount;
        if (gCount == 1)
            cout << " geuss." << endl;
        else
            cout << " guesses." << endl;
        cout << "Play again?[Y/N]" << endl;
        cin >> res;
        res = tolower(res);
        if (res == 'n')
            break;
    }
    system("CLS");
    return 0;
}