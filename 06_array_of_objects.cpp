#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(){
            salary = 200;
            cout<<"Enter the id of the employee:"<<endl;
            cin>>id;
        }

        void getId(){
            cout<<"The id of this employee is "<<id<<endl;
        }

};

int main(){
    // Employee bibek,harry,ram;
    // bibek.setId();
    // bibek.getId();

    Employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}