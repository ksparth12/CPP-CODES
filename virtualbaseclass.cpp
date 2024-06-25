#include <iostream>
using namespace std;

class Student  {
protected:
    int roll_numer;

public:

    void set_number(int rollnumber){
        roll_numer = rollnumber;
    }
    void get_number(void){
        cout <<"UID is  " <<roll_numer << endl;
    }
};

class Test : virtual public Student {
    protected:
    float maths, physics;
    public:
    void set_marks(float m1, float p1){
        maths = m1;
        physics = p1;
    }
    void get_marks(void){
        cout <<"Maths marks : "<< maths << endl;
        cout <<"Physics marks : "<< physics << endl;
    }

};

class Sports : virtual public Student {
    protected:
    int score;
    public:
    void set_score(int s1){
        score = s1;
    }
    void get_score(void){
        cout <<"Sport score out of 10 is :"<< score << endl;
    }   
     
};

class Result : public Test, public Sports {
    private:
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        get_number();
        get_marks();
        get_score();
        cout<<"Your total score is "<<total << endl;
    }
};
int main() {
    Result Parth;
    Parth.set_number(14367);
    Parth.set_score(9);
    Parth.set_marks(98,99);
    Parth.display();
    return 0;
}
//apple iphone 15 pro max