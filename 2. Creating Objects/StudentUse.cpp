#include "../1. Introduction to OOPS/Student.cpp"

int main()
{
    // Create objects statically

    Student s1;

    Student s2, s3, s4;

    // Create dynamically

    Student(*s5) = new Student;

    s1.age = 24;
    s1.rollNumber = 101;

    cout << s1.age << endl;

    (*s5).age = 13;
    (*s5).rollNumber = 102;

    cout << (*s5).rollNumber << endl;

    cout << s2.age << endl;
}