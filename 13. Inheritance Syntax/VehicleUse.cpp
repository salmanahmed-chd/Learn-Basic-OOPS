#include "Car.cpp"

int main()
{
    Vehicle v;

    v.color = "Black";
    // v.numTyres = 4; -> protected data member only access through derived classes
    // v.maxSpeed = 6; -> private data member

    Car c;

    c.color = "Blue";
    c.numGears = 4;
    // c.numTyres = 4; -> protected data member only acces through devived classes
}