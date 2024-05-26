#include <iostream>
using namespace std;

class Student
{
public:
    int age;
    int const rollNumber;
    int &x; // reference to age

    Student(int r, int age) : rollNumber(r), age(age), x(this->age)
    {
    }

    void display()
    {
        cout << rollNumber << " " << age << endl;
    }
};