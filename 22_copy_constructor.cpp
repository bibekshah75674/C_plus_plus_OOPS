#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        //default constructor
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }
        //copy constructor     //when no copy constructor is found,compiler supplies its own copy constructor
        Number(Number &obj){
            a = obj.a;
        }
        void diplay(){
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main(){
    Number x,y,z(7);
    x.diplay();

    y.diplay();

    z.diplay();
    // z1 should exactly resemble z or x or y
    Number z1(x),z2(z); //copy constructor invoked
    z1.diplay();
    
    z2.diplay();

    Number z3 = z; //copy constructor invoked because object is declared at the same line 
    z3.diplay();   //if object was declared first and then assigned afterward as z3 = x then the copy constructor is not invoked 
    
    return 0;
}

