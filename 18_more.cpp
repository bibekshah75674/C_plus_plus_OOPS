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
    point p(1,2);
    p.displayPoint();

    point q(2,3);
    q.displayPoint();
    
    return 0;
}