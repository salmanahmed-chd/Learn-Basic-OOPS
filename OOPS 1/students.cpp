// class Students {
// public:
//     int rollNumber;
//     int age;
// };


class Students {
public:
    int rollNumber;

private:
    int age;

public:

    // Default Constructor

    Students() { 
        // when we write our own constructor, then inbuilt constructor is not available for us
        cout<<"Constructor call"<<endl;
    }

    // parameterized constructor

    Students (int r) {

        cout<<"parameterized constructor call"<<endl;
        rollNumber = r;
    }

    // parameterized constructor with age value also -> check what happen

    Students (int rollNumber, int a){
        // rollNumber = rollNumber;  in this case jo hamne rollNumber pass kiya tha usi me rollNumber ki value dal di -> jab ki hame object wale rollNumber me value dalni thi
        // aisa isliye hua kyunki both object and function rollNumber are global but function wala jyada close hai

        // Here we use a awesome keyword => that is "this"

        // this => holds the address of current object

        // cout<<"Address of current object: "<<this<<endl;
        
        cout<<"parameterized constructor with both age and rollnumber"<<endl;

        this -> rollNumber = rollNumber;

        age = a;

    }

    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }

    int getAge(){
        return age;
    }

    void setAge(int a){
        age = a;
    }

    ~Students() {
        cout<<"Destructor called"<<endl;
    }
};

// when we create object Students s1 -> then s1.Students() a function call on that object called internally
// the work of this special function to initialize all data members with their default value -> and this function is called is constructor
// default constructor -> same name as class, no return type, no input argument
// for every object constructor call always happens once in their lifetime and its time of creation

