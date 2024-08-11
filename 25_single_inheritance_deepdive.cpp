#include<iostream>
using namespace std;

//Base class 
class base{
    int data1;  //data1 is private by default and it cannot be directly inherited 
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void base :: setData(){
    data1 = 30;
    data2 = 40;
}

int base :: getData1(){
    return data1;
}

int base :: getData2(){
    return data2;
}

//derived class 
class derived : private base{
    int data3;
    public:
     void process();
     void display();
};

void derived :: process(){
    setData();
    data3 = data2 * getData1();

}

void derived :: display(){
    cout<<"The value of data1 is "<<getData1()<<endl;
    cout<<"The value of data2 is "<<data2<<endl;
    cout<<"The value of data3 is "<<data3<<endl;
}

int main(){
    derived d1;
    // d1.setData();
    d1.process();
    d1.display();

    return 0;
}

