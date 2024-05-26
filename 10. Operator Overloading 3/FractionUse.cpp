#include "Fraction.cpp"

int main()
{
    // Fraction f1(4, 5);

    // f1.display();

    // const Fraction f2(3, 7);

    // f2.display();

    // Fraction f3 = f1 * f2;

    // f3.display();

    // ++f3;

    // f3.display();

    // Fraction f4 = ++f3;

    // f4.display();

    /*
    // pre increment

    Fraction f1(10, 2);
    Fraction f2 = ++(++f1);

    f1.display();
    f2.display();
    */

    // --------------------------------

    /*
    // post increment

    Fraction f1(10, 2);
    Fraction f2 = f1++;

    f1.display();
    f2.display();

    f1++;

    f1.display();
    */

    Fraction f1(2, 3);

    Fraction f2(4, 5);

    f1 *= f2;

    f1.display();
    f2.display();

    Fraction f3(1, 5);

    (f3 *= f2) *= f2;

    f3.display();
}
