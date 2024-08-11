#include<iostream>
using namespace std;

class base{
    int data1;
    public:
        void setData();
        int getData1();
};

void base :: setData(){
    data1 = 3;
}

int base :: getData1(){
    return data1;
}

int main(){
    base b1;
    b1.setData();
    cout<<b1.getData1();
    
    return 0;
}