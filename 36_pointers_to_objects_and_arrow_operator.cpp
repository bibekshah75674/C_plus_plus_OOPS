#include<iostream>
using namespace std;

class complex{
    int real,imaginary;
    public:
        void setData(int n1,int n2){
            real = n1;
            imaginary = n2;
        }
        void getData(){
            cout<<"The value of real part is "<<real<<endl;
            cout<<"The value of imaginary part is "<<imaginary<<endl;
        }
};

int main(){
    // complex c1;
    // c1.setData(34,45);
    // c1.getData();

    // complex c1;
    // complex *ptr = &c1;
    // (*ptr).setData(34,45);
    // (*ptr).getData();

    // complex *ptr = new complex;
    // (*ptr).setData(34,45);
    // (*ptr).getData();

    //arrow operator
    // complex *ptr = new complex;
    // ptr->setData(34,45);
    // ptr->getData();

    //array of objects
    complex *ptr = new complex[4];
    ptr->setData(34,45);
    ptr->getData();


    return 0;
}
