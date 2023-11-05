class Student {
    private:
        int age;

    public:

        char *name = new char;
        
        Student(int age, char *name){
            this -> age = age;
            this -> name = new char[strlen(name) + 1];
            strcpy(this -> name, name);
        }

        Student (Student const &s){
            this -> age = s.age;

            this -> name = new char[strlen(s.name)+1];
            strcpy(this -> name, s.name);
        }

        void display(){
            cout<<"My name is "<<name<<" and I am "<<age<<" years old."<<endl;
        }

};