//friend function
#include<iostream>
using namespace std;

//forward declaration
class Y;

class X{
    int data;
    friend int sum(X o1,Y o2);
    public:
    void setValue(int value){
        data = value;
    }
};

class Y{
    int num;
    friend int sum(X o1,Y o2);
    public:
    void setValue(int value){
        num = value;
    }
};

int sum(X o1,Y o2){
    cout<<"Summing data of X and Y objects give me "<<(o1.data+o2.num);
}

int main(){
    X a1;
    a1.setValue(5);

    Y a2;
    a2.setValue(7);

    sum(a1,a2);

    return 0;
}

