#include <iostream>
using namespace std;

#include "students.cpp"


/*
    Types of constructor
    1. Default Constructor
    2. Copy constructor => class new_obj(obj); => it will copy obj values to new_obj => example Students s2(s1) => s2.Students(s1)
    3. Copy assignment operator => it is not a function, it is an operator => isme hum ek object ki value dusre me dal rhe hain -> after its creation => and we not able to call copy constructor
    4. Destructor => same name as class, no return type, no input argument
*/

int main(){

    // Copy constructor

/*
    Students s1(13, 22);

    s1.display();

    Students s2(s1);

    s2.display();

    Students *s3 = new Students(1, 101);

    s3->display();

    Students s4(*s3);

    s4.display();

    Students *s5 = new Students(*s3);

    s5->display();

    Students *s6 = new Students(s1);

    s6 -> display();

*/

    // Copy Assignment operator

/*
    Students s1(13, 22);

    s1.display();

    Students s2(1, 101);
    s2.display();

    s2 = s1;

    s2.display();

    Students *s3 = new Students(3, 103);

    s3 -> display();

    *s3 = s1;

    s3->display();

*/

    // Destructor

/*
    Students s1(10, 1001);
    Students s2(20, 1002);

    Students *s3 = new Students(30, 1003);

    // kyunki s3 jo hai heap memory me dynamically create hua hai => to is alag se delete karna padega

    delete s3;
*/

    Students s1;  // default constructor call
    Students s2(13, 22); // parameterized constructor call
    Students s3(s1); // Copy constructor call

    s1 = s3;  // no constructor call

    // What will here happen

    Students s4 = s2; // Here also copy constructor call => Students s3(s2);

}