//Inheritance
#include<iostream>
using namespace std;

//Base class 
class Employee{
    public:
    int id;
    float salary;
        Employee(int inpId){
            id = inpId;
            salary = 2000.0;
        }
        Employee(){}
};

//Derived class 
//creating a Programmer class derived from Employee base class
class Programmer : Employee{
    public:
    int languageCode = 9;
    Programmer(int inpId){
        id = inpId;
    }
    void getData(){
        cout<<id<<endl;
    }

};
 

int main(){
    Employee bibek(1),harry(2);
    cout<<bibek.salary<<endl;
    cout<<harry.salary<<endl;

    Programmer skillf(1);
    cout<<skillf.languageCode<<endl;
    skillf.getData();
    
   
    return 0;
}
/*
#include<iostream>
using namespace std;

//Base class
class Employee{
    public:
        int id;
        float salary;
        Employee(int inpId){
            id = inpId;
        }
        Employee(){
        }
};

//Derived class
class Programmer : Employee{
    //id and salary is private now
    public:
    int languagecode = 9;
    Programmer(int inpId){
        id = inpId;
    }
    void getId(){
        cout<<"The id of this programmer is "<<id<<endl;
    }
};

int main(){
    Employee bibek(1);
    cout<<bibek.id;

    Programmer bibekk(6);
    bibekk.getId();
    bibekk.languagecode;

    return 0;
}
*/



