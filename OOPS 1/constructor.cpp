#include <iostream>
using namespace std;

#include "students.cpp"

int main(){

/*
    // Default constructor demo

    Students s1;
    s1.display();

    Students *s2 = new Students;

    s2 -> display();

    // Parameterized constructor demo

    Students s1(45);

    s1.display();

    Students *s2 = new Students(23);

    s2 -> display();

    // Constructor with both age and roll no.

    Students s3(1, 101);

    s3.display();

*/

    Students s1(13, 22);

    cout<<"Address of s1: "<<&s1<<endl;

    s1.display();
}