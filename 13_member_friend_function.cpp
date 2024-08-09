#include<iostream>
using namespace std;

//forward declaration
class complex;

class calculator{
    public:
        int sum(int x,int y){
            return (x+y);
        }
        int sumRealComplex(complex ,complex );
};

class complex{
    int a;
    int b;
    friend int calculator::sumRealComplex(complex ,complex );
    public:
        void setNumber(int n1,int n2){
            a = n1;
            b = n2;
        }
        void printNumber(){
            cout<<"Your complex number is "<<a<<" and "<<b<<endl;
        }
};

int calculator :: sumRealComplex(complex o1,complex o2){
            return(o1.a+o2.a);
        }


int main(){
    complex o1,o2;
    o1.setNumber(1,2);
    o2.setNumber(7,4);

    calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    return 0;
}