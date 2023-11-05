#include <iostream>
using namespace std;

#include "staticMember.cpp"

int main(){

/*

    Student s1;

    cout<<s1.rollNumber<<" "<<s1.age<<endl;

    // Now question is this totalStudents ko access kaise kare
    // s1.totalStudents se bhi access nahi kar sakte kyon ki wo kisi student ki property bhi nahi hai

    cout<<Student::totalStudents<<endl;

    // :: -> this is called as scope resolution operator

    cout<<s1.totalStudents<<endl; // yaha pr hame error nahi mila, compiler allow kar deta hai but it is logically incorrect

    s1.totalStudents = 20;

    Student s2;

    cout<<s2.totalStudents<<endl; // yaha pr bhi hame 20 hi mila kyonki totalStudents ek static property 

    // chahe hum ise kisi object ki madad se access kare ya fir class name ki madad se ans same hi aata hai

*/

    Student s1;
    
    Student s2;

    Student s3, s4, s5;

    // cout<<Student::totalStudents<<endl;

    cout<<Student::getTotalStudents()<<endl;
}