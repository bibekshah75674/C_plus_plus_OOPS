#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    //creating a constructor
    //constructor is a special member function with same name as of the class.
    //It is used to initialize the objects of the class
    complex(void);  //constructor declaration
    void printNumber(){
        cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex :: complex(void){ //this is a default constructor as it accepts no parameters     
    a = 76;
    b = 45;
    cout<<"Hello"<<endl;
}

int main(){
    complex c1,c2,c3;
    c1.printNumber();
    // c2.printNumber();
    // c3.printNumber();
    return 0;
}