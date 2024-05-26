#include <iostream>
using namespace std;

class Student
{
public:
    int age;
    static int totalStudents;

    Student()
    {
        totalStudents++;
    }

    Student(int age)
    {
        this->age = age;
        totalStudents++;
    }
};

int Student ::totalStudents = 0;