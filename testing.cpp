/*
Graded Learning Activity 4.1

Learning Objectives
Organize data using structures.
Use Structures to group related but dissimilar data types.
Write structured programming instructions so that the computer shows
input/output behaviors. Instructions

Fraction Sum

Create a struct to hold a fraction. The struct should have an integer numerator
and an integer denominator member. Declare 2 fraction variables and read them in
from the user. Write a function called multiply that takes both fractions,
multiplies them together, and prints the result out as a fraction
(numerator/denominator). You do not need to reduce the fraction to its lowest
terms.

// Enter the first fractional numbers in the format given below:
// numerator(space)(symbol)(space)denominator (e.g. 2 / 5)


Sample input/output:

Enter first fractional number: 2 / 5
Enter second fractional number: 1 / 6
Resultant fractional number: 2 / 30

  */

#include <iostream>
using namespace std;

struct frac
{
    int num;
    int dom;
};

frac multiply(frac a, frac b)
{
    frac c;
    c.num = a.num * b.num;
    c.dom = a.dom * b.dom;
    return c;
}

void split(int a[2], string in)
{
    a[0] = stoi(in.substr(0, in.find(" ")));
    in = in.substr(in.find(" "), in.length());
    in = in.substr(in.find(" "), in.length());
    a[1] = stoi(in);
}

int main()
{
    frac a, b;
    string in;
    int out[2];
    cout << "Enter first fractional number: " << endl;
    getline(cin, in);
    split(out, in);
    a.num = in[0];
    a.dom = in[1];

    cout << "Enter second fractional number: " << endl;
    getline(cin, in);
    split(out, in);

    cout << "Resultant fractional number: " << endl;
    return 0;
}