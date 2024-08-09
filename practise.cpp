#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(void); //constructor declaration
    void printNumber(){
        cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex :: complex(void){
    a = 44;
    b = 45;
}

int main(){
    complex c1;
    c1.printNumber();
    return 0;
}