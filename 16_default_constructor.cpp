#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
        complex(void);
        void printNumber(){
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

complex :: complex(void){
    a = 78;
    b = 98;
}

int main(){
    complex c1;
    c1.printNumber();
    return 0;
}