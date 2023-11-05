// int a -> data type then variable name
// in similar way Student s1 -> Student(user defined data type) s1(object)
// statically Student s1 and dynamically Student *s2 = new Student

// dynamically -> is similar way like -> int * a = new int

#include <iostream>
using namespace std;

#include "students.cpp"

// int main(){

//     // create object statically
//     Students s1; 
//     Students s2;
//     Students s3, s4, s5;

//     // create objects dynamically

//     Students *s6 = new Students;

//     // Set values

//     // for static objects

//     s1.age = 22;
//     s1.rollNumber = 33;

//     cout<<s1.age<<" "<<s1.rollNumber<<endl;

//     // for dynamic objects

//     (*s6).age = 13;
//     (*s6).rollNumber = 101;

//     cout<<(*s6).age<<" "<<(*s6).rollNumber<<endl;

//     // other way to write for dynamic variable;

//     s6 -> age = 20;
//     s6 -> rollNumber = 13;

//     cout<<s6 -> age<<" "<<s6 -> rollNumber<<endl;
// }



// --------------------------------------------------------------------------------------------


int main(){
    Students s1;

    Students *s2 = new Students;

    s1.display();

    (*s2).display();

    s2 -> display();

    cout<<s2 -> getAge()<<endl;

    s1.setAge(23);

    s1.display();
}