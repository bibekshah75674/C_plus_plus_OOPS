#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        complex(int x, int y); //constructor declaration
        void printNumber(){
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

complex :: complex(int x,int y){ //this is a parameterized constructor as it takes two parameter
    a = x;
    b = y;
}

int main(){
    //Implicit call
    complex c1(3,4);
    c1.printNumber();

    //explicit call
    complex b = complex(5,7);
    b.printNumber();
    return 0;
}

