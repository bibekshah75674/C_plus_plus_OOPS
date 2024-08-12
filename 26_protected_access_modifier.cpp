//protected access modifier in c++
#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;  
};

/*
   |                     |Public Derivation |Private Derivation   |Protected Derivation |            
   | 1.Private members   |  Not inherited   | Not inherited       | Not inherited       |        
   | 2.Protected members |  Protected       | Private             | Protected           |        
   | 3.Public members    |  Public          | Private             | Protected           |    
*/

class Derived : protected Base{

};

int main(){
    Base b;
    cout<<b.a;

    Derived d;
    // cout<<d.a; will not work since a is protected in both base as well as derived class
    return 0;
}


 
