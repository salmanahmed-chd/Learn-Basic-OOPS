class Student{

        static int totalStudents;

    public:

        int rollNumber;
        int age;
        // int totalStudents; // kya totalStudents kisi specific object ki property hai ya fir ye sabhi combined students ki property hai;
        // is property ki value har ek object ke liye same hogi and ye class ki property hai na ki kisi specific object ki

        // agar hum kisi property ko har ek object ke liye create nahi karna chahte hain to, use "static" declare kar sakte hai

        // static int totalStudents;

        // static -> which belongs to class

        Student(){
            totalStudents++;
        }

        // similarly we can make static function

        // let say totalStudents is private then make a function getTotalStudents

        static int getTotalStudents(){
            return totalStudents;

            // static function only static members and static functions ko hi access kar sakta hai
            // static function ke pass this keyword nahi hota
        }

};

// kyonki totalStudents hamare pure class ki property hai isliye iska initialisation class ke bahar kiya jata hai

int Student::totalStudents = 0;  // initialise static data member