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

    // preincrement operator

    Fraction &operator++()
    {
        numerator = numerator + denominator;

        return *this;
    }

    // post increment

    Fraction operator++(int)
    {
        Fraction f(numerator, denominator);
        numerator = numerator + denominator;

        return f;
    }

    Fraction &operator*=(Fraction const &f)
    {
        numerator = numerator * f.numerator;
        denominator = denominator * f.denominator;

        return *this;
    }
};