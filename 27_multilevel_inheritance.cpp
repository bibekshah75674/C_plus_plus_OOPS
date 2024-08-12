#include<iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int roll);
        void get_roll_number();
};

void student :: set_roll_number(int roll){
    roll_number = roll;
}

void student :: get_roll_number(){
    cout<<"The roll number is "<<roll_number<<endl;
}

class exam : public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float m1,float m2);
        void get_marks();
};

void exam :: set_marks(float m1,float m2){
    maths = m1;
    physics = m2;
}

void exam :: get_marks(){
    cout<<"The marks in maths is "<<maths<<endl;
    cout<<"The marks in physics is "<<physics<<endl;
}

class result : public exam{
    float percentage;
    public:
        void display_results(){
            get_roll_number();
            get_marks();
            cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
        }
};

int main(){
    result bibek;
    bibek.set_roll_number(34);
    bibek.set_marks(50,50);
    bibek.display_results();
    

    return 0;
}

/*
If we are inheriting B from A and C from B : [A-->B-->C]
1.A is the base class for B and B is the base class for C
2.ABC(A-->B-->C) is called inheritance path
*/