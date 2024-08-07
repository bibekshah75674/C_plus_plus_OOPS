#include<iostream>
using namespace std;

//Forward declaration
class complex;

class Calculator{
    public:       
        int sumRealComplex(complex,complex);
        int sumCompComplex(complex,complex);
};

class complex{
    int a;
    int b;
    // //Individually declaring functions as friends
    // friend int Calculator :: sumRealComplex(complex ,complex );
    // friend int Calculator :: sumCompComplex(complex ,complex );
    //Aliter:Declaring the entire calculator class as friend
    friend class Calculator;
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

int Calculator::sumCompComplex(complex o1,complex o2){
    return (o1.b+o2.b);
}

int main(){
    complex c1,c2;
    c1.setNumber(1,2);
    c1.printNumber();


    c2.setNumber(2,3);
    c2.printNumber();

    Calculator calc1,calc2;
    int result1 = calc1.sumRealComplex(c1,c2);
    cout<<"The sum of real part of o1 and o2 is "<<result1<<endl;

    int result2 = calc2.sumCompComplex(c1,c2);
    cout<<"The sum of complex part of o1 and o2 is "<<result2<<endl;

    return 0;
}