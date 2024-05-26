#include "Fraction.cpp"

int main()
{
    Fraction f1(4, 5);

    f1.display();

    const Fraction f2(3, 7);

    f2.display();

    Fraction f3 = f1 * f2;

    f3.display();
}
