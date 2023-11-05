#include <iostream>
using namespace std;

#include "car.cpp"

int main(){
    Vehicle v;

    v.color = "Blue";
    // v.maxSpeed = 100;
    // v.numTyres = 4;

    Car c;

    c.color = "Black";
    // c.numTyres = 4;
    c.numGears = 5;
}