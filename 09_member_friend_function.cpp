#include<iostream>
using namespace std;

//Forward declaration
class complex;

class Calculator{
    public:       
        int sumRealComplex(complex,complex);
};

class complex{
    int a;
    int b;
    //friend function declaration
    friend int Calculator :: sumRealComplex(complex ,complex );
    public:
        void setNumber(int n1,int n2){
            a = n1;
            b = n2;
        }
        void printNumber(){
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

int Calculator::sumRealComplex(complex o1,complex o2){
    return (o1.a+o2.a);

}

int main(){
    complex c1,c2;
    c1.setNumber(1,2);
    c1.printNumber();


    c2.setNumber(2,3);
    c2.printNumber();

    Calculator calc;
    int result = calc.sumRealComplex(c1,c2);
    cout<<"The sum of real part of o1 and o2 is "<<result<<endl;


    
    return 0;
}