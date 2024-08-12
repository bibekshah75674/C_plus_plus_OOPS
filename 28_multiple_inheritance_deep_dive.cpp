#include<iostream>
using namespace std;

/*
Syntax for inheriting in multiple inheritance
class DerivedC:visibility-mode base1, visibility-mode base2
{
class body of class "DerivedC"
}
*/

//first base class 
class Base1{
    protected:
        int a;
    public:
        void setData1(int n1){
            a = n1;
        }
};

//second base class
class Base2{
    protected:
        int b;
    public:
        void setData2(int n2){
            b = n2;
        }
};

//Derived class from two base class
class Derived : public Base1,public Base2{
    public:
        void display_sum(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The sum of a and b is "<<a+b<<endl;
        }
};

int main(){
    Derived d1;
    d1.setData1(3);
    d1.setData2(6);
    d1.display_sum();
    return 0;
}

//Note:There can be multiple base class and a single derived class