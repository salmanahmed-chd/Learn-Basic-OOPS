#include <iostream>
using namespace std;

#include "fraction.cpp"

int main(){

    // operator overloading: iska matlab hai kisi pre existing operator ki functionality ko extend karna taki wo hamare user defined classes ke liye bhi work kare

    // Example f3 = f1+f2 where f1, f2, f3 are objects

/*

    Fraction f1(10, 2);
    Fraction f2(15, 4);

    Fraction f3 = f1.add(f2);

    f3.print();

    // but ab mai ye add function nahi use karna chahta -> what I want f3 = f1+f2

    // operator overloading

    Fraction f4 = f1 + f2;

    f4.print();

    Fraction f5 = f1.multiply(f2);

    f5.print();

    Fraction f6 = f1 * f2;

    f6.print();

    bool isEqual = f5 == f6;

    cout<<isEqual<<endl;

*/
    

    Fraction f1(10, 2);

    ++f1;

    f1.print();

}