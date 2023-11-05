#include <iostream>
using namespace std;

#include "constantFunction.cpp"

int main(){

    Fraction const f1;

    // Error neeche wale line pr hi aa jayega but yaha pr koi value change nahi kr rhe hai, fir error kyon?
    // actually hamara compiler kisi normal function ke through hamare const object me changes nahi karne deta kyonki use tension hai ki hum usme ja ke changes kar denge
    // so hum const object ke through only "constant function" hi call kar sakte hai
    // Constant Function: which doesn't change any property of current object
    cout<<f1.getNum()<<" "<<f1.getDen()<<endl;

    // cout<<f1.setNum(4)<<endl;
}