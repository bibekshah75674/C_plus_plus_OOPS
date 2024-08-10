#include<iostream>
using namespace std;

class point{
    int x,y;
    public:
        point(int a,int b){
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }
};

int main(){
    //implicit call
    point p(1,2);
    p.displayPoint();

    //explicit call
    point q = point(3,4);
    q.displayPoint();
    
    return 0;
}