#include <bits/stdc++.h>
using namespace std;

#include "student.cpp"

int main(){

    // Shallow and Deep copy and copy constructor

    char name[] = "Salman";

    Student s1(22, name);

    s1.display();

    // name[1] = 'u';

    // Student s2(18, name);

    // s1.display();
    // s2.display();

    Student s2(s1);

    s2.name[1] = 'u';
    s2.name[3] = 't';

    s1.display();
    s2.display();

}