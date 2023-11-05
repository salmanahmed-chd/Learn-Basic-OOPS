#include <bits/stdc++.h>
using namespace std;

#include "student1.cpp"

int main(){
    // jab hum constant variable ya reference variable create karte hain usi same hame initialise karna hota hai otherwise error aa jayega

    Student s1(13, 22);
    s1.age = 22;

    cout<<s1.age<<" "<<s1.rollNumber<<endl;
}