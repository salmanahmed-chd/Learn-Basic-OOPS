#include "Polynomial.cpp"

int main()
{

    /*
    Polynomial p1;

    p1.setCoefficient(4, 1);
    p1.setCoefficient(3, -6);
    p1.setCoefficient(2, 3);
    p1.setCoefficient(0, -4);
    p1.setCoefficient(23, 96);

    p1.print();
    cout << p1.capacity << endl;

    Polynomial p2(p1);

    p1.print();
    p2.print();

    p2.setCoefficient(4, 5);

    p1.print();
    p2.print();

    Polynomial p3 = p1;

    p3.setCoefficient(3, 100);

    p1.print();
    p3.print();
    */

    /*
    // Example 1
    Polynomial p1, p2;
    p1.setCoefficient(3, 2);
    p1.setCoefficient(2, -3);
    p1.setCoefficient(1, 4);
    p1.setCoefficient(0, -5);

    p2.setCoefficient(2, 1);
    p2.setCoefficient(1, 2);
    p2.setCoefficient(0, -1);

    cout << "Example 1:" << endl;
    cout << "Polynomial 1: ";
    p1.print();
    cout << "Polynomial 2: ";
    p2.print();

    Polynomial sum1 = p1 + p2;
    cout << "Sum: ";
    sum1.print();
    cout << endl;

    // Example 2
    Polynomial p3, p4;
    p3.setCoefficient(4, 3);
    p3.setCoefficient(3, -2);
    p3.setCoefficient(2, 5);
    p3.setCoefficient(1, -1);
    p3.setCoefficient(0, 7);

    p4.setCoefficient(3, -2);
    p4.setCoefficient(2, 4);
    p4.setCoefficient(1, -3);
    p4.setCoefficient(0, 2);

    cout << "Example 2:" << endl;
    cout << "Polynomial 1: ";
    p3.print();
    cout << "Polynomial 2: ";
    p4.print();

    Polynomial sum2 = p3 + p4;
    cout << "Sum: ";
    sum2.print();
    cout << endl;

    */

    /*
    Polynomial p1, p2;
    p1.setCoefficient(5, 4);
    p1.setCoefficient(4, -3);
    p1.setCoefficient(3, 2);
    p1.setCoefficient(2, -5);
    p1.setCoefficient(1, 6);
    p1.setCoefficient(0, -7);

    p2.setCoefficient(4, 2);
    p2.setCoefficient(3, 3);
    p2.setCoefficient(2, -2);
    p2.setCoefficient(1, 1);
    p2.setCoefficient(0, -3);

    cout << "Polynomial 1: ";
    p1.print();
    cout << "Polynomial 2: ";
    p2.print();

    Polynomial result = p1 - p2;
    cout << "Result of subtraction (Polynomial 1 - Polynomial 2): ";
    result.print();
    */

    Polynomial p1, p2;
    p1.setCoefficient(4, 3);
    p1.setCoefficient(3, -2);
    p1.setCoefficient(2, 1);
    p1.setCoefficient(1, -5);
    p1.setCoefficient(0, 7);

    p2.setCoefficient(3, 2);
    p2.setCoefficient(2, 4);
    p2.setCoefficient(1, -3);
    p2.setCoefficient(0, 2);

    cout << "Polynomial 1: ";
    p1.print();
    cout << "Polynomial 2: ";
    p2.print();

    Polynomial result = p1 * p2;
    cout << "Result of multiplication (Polynomial 1 * Polynomial 2): ";
    result.print();
}