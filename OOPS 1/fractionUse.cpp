#include <iostream>
using namespace std;

#include "fraction.cpp"

int main(){
    Fraction f1(10, 2);

    f1.print();

    Fraction f2(12, 2);

    f1.add(f2);

    f1.print();

    Fraction f3(4, 5);
    Fraction * f4 = new Fraction(3, 4);

    f3.multiply(*f4);

    f3.print();
}