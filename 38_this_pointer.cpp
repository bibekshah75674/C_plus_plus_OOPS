#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void setData(int a){ 
            this->a = a; //local variable is given more precendance than class variable
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    //this is a keyword which is a pointer which points to the object which invoked the
    //member function
    A a;
    a.setData(6);
    a.getData();
    return 0;
}