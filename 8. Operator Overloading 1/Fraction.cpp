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

    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void display() const
    {
        cout << numerator << "/" << denominator << endl;
    }

    Fraction operator*(Fraction const &f) const
    {
        int numerator = this->numerator * f.numerator;
        int denominator = this->denominator * f.denominator;

        Fraction fNew(numerator, denominator);

        return fNew;
    }
};