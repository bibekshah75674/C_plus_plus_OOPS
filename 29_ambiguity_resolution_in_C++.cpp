#include<iostream>
using namespace std;

class base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class base2{
    public:
        void greet(){
            cout<<"Kasto hununxa?"<<endl;
        }
};

class derived : public base1,public base2{
    int a;
    public:
    void greet(){
        base1 :: greet();
    }
};

int main(){
    base1 b1;
    b1.greet();
    base2 b2;
    b2.greet();

    derived d1;
    d1.greet();

    
    return 0;
}