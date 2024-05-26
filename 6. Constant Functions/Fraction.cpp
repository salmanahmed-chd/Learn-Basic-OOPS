#include <iostream>
using namespace std;

class Fraction
{
public:
    int numerator;
    int denominator;

    Fraction()
    {
    }

    void display() const
    {
        cout << numerator << "/" << denominator << endl;
    }
};