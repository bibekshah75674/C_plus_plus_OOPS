#include<iostream>
using namespace std;

class add{
    private:
        int a,b,c;
    public:
        void sum();
};

void add :: sum(){
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum of the numbers is "<<c;
}

int main(){
    add firstSum;       //object declaration
    firstSum.sum();     //function call
    return 0;
}
