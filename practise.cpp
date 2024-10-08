//Revisiting pointer,new and delete keyword
#include<iostream>
using namespace std;

int main(){
    // Basic example
    int a = 4;
    int *ptr = &a;
    cout<<"The value of a is "<<*ptr<<endl;

    //new operator
    int *p = new int(34);
    cout<<"The value at address p is "<<*p<<endl;

    float *q = new float(34.67);
    cout<<"The value at address q is "<<*q<<endl;

    //delete operator
    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    delete[] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    return 0;
}