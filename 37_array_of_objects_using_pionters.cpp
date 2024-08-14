#include<iostream>
using namespace std;

int main(){
    int x = 4;
    int *ptr = &x;

    cout<<"The value of x is "<<(*ptr)<<endl;

    
    return 0;
}