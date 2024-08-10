#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        //default constructor
        complex(){
            a = 0;
            b = 0;
        }
        //two parameter
        complex(int x,int y){
            a = x;
            b = y;
        }
        //single parameter 
        complex(int x){
            a = x;
            b = 0;
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
}; 

int main(){
    complex c1(1,2);
    c1.printNumber();

    complex c2(6);
    c2.printNumber();

    complex c3;
    c3.printNumber();

    return 0;
}

