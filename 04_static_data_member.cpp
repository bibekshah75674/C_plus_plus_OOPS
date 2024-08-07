#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void setData(){
            cout<<"Enter the id:"<<endl;
            cin>>id;
            count++;
        }
        void getData(){
            cout<<"The id of this employee is "<<id<<" and this is the employee no "<<count<<endl;
        }
};

int Employee :: count; //Default value is 0

int main(){
    Employee bibek,harry,ram;
    // bibek.id = 1;
    // bibek.count = 1;  //cannot do this as ID and count are private   

    bibek.setData();
    bibek.getData();

    harry.setData();
    harry.getData();

    ram.setData();
    ram.getData();

    return 0;
}