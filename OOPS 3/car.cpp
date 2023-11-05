#include "vehicle.cpp"

class Car : public Vehicle{
    // in case when we inherit publically then protected data members or methods from base class inherit as protected in derived class
    // private members are not accessible outside the class
    // public are inherited as public member

    public:
        int numGears;

        void print(){
            cout<<"NumTyres: "<<numTyres<<endl;
            cout<<"Color: "<<color<<endl;
            cout<<"NumGears: "<<numGears<<endl;
        }
};
