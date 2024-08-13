//constructor in derived class
#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int d1){
            data1 = d1;
            cout<<"Base1 class constructor called."<<endl;
        }
        void printData1(){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int d2){
            data2 = d2;
            cout<<"Base2 class constructor called."<<endl;
        }
        void printData2(){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class Derived : public Base1,public Base2{
    int data3,data4;
    public:
            Derived(int a,int b,int c,int d) : Base1(a),Base2(b){
            data3 = c;
            data4 = d;
            cout<<"Derived class constructor called."<<endl;
        }
        void displayRemData(){
            cout<<"The value of data3 is "<<data3<<endl;
            cout<<"The value of data4 is "<<data4<<endl;
        }
};

int main(){
    Derived obj1(1,2,3,4);
    obj1.printData1();
    obj1.printData2();
    obj1.displayRemData();

    
    return 0;
}