#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initialization-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
        Test(int i,int j) : a(i),b(j){
            constructor-body
        }
};
*/

class Test{
    int b;
    int a;
    // int b;
    public:
        // case 1
        // Test(int i,int j) : a(i), b(j) 

        // case 2
        // Test(int i,int j) : a(i)
        // {   b = j;

        //case 3
        // Test(int i,int j) : a(i) , b(i+j)

        //case 4
        // Test(int i,int j) : a(i) , b(2*j)


        //case 5
        // Test(int i,int j) : a(i) , b(a+j)


        //case 6
        // Test(int i,int j) : b(a+j),a(i) ->throws garbage value
           //can be solved if int b;
            //                int a; 
            //Note:The first declared should be first initialized

        Test(int i,int j) :b(j), a(i+b)
        {   
            cout<<"Constructor executed"<<endl;
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(){
    Test t1(4,5);

    return 0;
}
