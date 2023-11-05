class Student {
    public:

        int age;
        const int rollNumber;
        int &x; // agar hum x me age ki value store karwana chahte hain to

    // Initialisation List: ye hamare data members ko constructor me jane se pahle hi initialise kar deta hai at the time of memory allocation

        Student(int r, int age) : rollNumber(r), age(age), x(this -> age) { // x me this karke isliye pas kiya kyon ki wahan pr argument wala age bhi hai

        }

        void display(){
            cout<<rollNumber<<" "<<age<<endl;
        }
};