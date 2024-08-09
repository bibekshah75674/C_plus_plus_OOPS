//friend function
#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
        void setData(int n1,int n2){
            a = n1;
            b = n2;
        }
        void getData(){
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

int main(){
    complex c1,c2;
    c1.setData(1,2);
    c1.getData();

    return 0;
}