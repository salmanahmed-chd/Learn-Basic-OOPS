#include <iostream>
using namespace std;

#include "complex.cpp"

int main(){
    
    Complex c1(2,5);

    Complex c2(5,8);

    c1.print();

    c1.add(c2);

    c1.print();

    c1.multiply(c2);

    c1.print();
}