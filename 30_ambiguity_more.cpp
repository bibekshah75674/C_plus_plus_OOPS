#include<iostream>
using namespace std;

class base{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class derived : public base{
    int a;
    //derived's new say() method will override base class's say() method
    public:
        void say(){
            cout<<"Hello beautiful people"<<endl;
        }
};

int main(){
    derived d1;
    d1.say();

    return 0;
}


