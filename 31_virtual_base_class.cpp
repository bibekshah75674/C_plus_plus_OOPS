#include<iostream>
using namespace std;

/*
student-->test
student-->sports
test-->result
sports-->result
*/

class student{
    protected:
        int roll_number;
    public:
        void setRollNo(int roll){
            roll_number = roll;
        }
        void getRollNo(){
            cout<<"Roll no is "<<roll_number<<endl;
        }
};

class test : virtual public student{
    protected:
        float phy;
        float maths;
    public:
        void set_marks(float m1,float m2){
            phy = m1;
            maths = m2;
        }
        void get_marks(){
            cout<<"Marks in physics:"<<phy<<endl;
            cout<<"Marks in maths:"<<maths<<endl;
        }
};

class sports : virtual public student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void get_Score(){
            cout<<"Score in PT:"<<score<<endl;
        }
};

class result : public test,public sports{
    private:
        float total;
    public:
        void display(){
            total = phy+maths+score;
            getRollNo();
            get_marks();
            get_Score();
            cout<<"Total score is "<<total<<endl;
        }
};

int main(){
    result bibek;
    bibek.setRollNo(3);
    bibek.set_marks(67,78);
    bibek.set_score(45);
    bibek.display();
    return 0;
}

