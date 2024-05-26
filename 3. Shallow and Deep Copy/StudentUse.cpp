#include "Student.cpp"

int main()
{
    char name[] = "abcd";
    Student s1(22, name);

    s1.display();

    name[3] = 'e';

    Student s2(24, name);

    s2.display();

    s1.display();
}