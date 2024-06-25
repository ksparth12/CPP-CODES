#include <iostream>
using namespace std;

class Student {
protected:
    int roll_number;
public:
     void set_roll_number(int);
     void get_roll_number(void);
};

void Student :: set_roll_number(int rollnumber) {
    roll_number = rollnumber;
}

void Student :: get_roll_number() {
    cout << "Roll number is: " << roll_number << endl;
}

class Exam : public Student {
    protected:
    float maths;
    float physics;

    public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam :: set_marks(float m, float p) {
    maths = m;
    physics = p;
}

void Exam :: get_marks() {
    cout << "Maths marks: " << maths << endl;
    cout << "Physics marks: " << physics << endl;
}

class Result : public Exam {
    float percentage;
    public:
    void calculate_percentage(void) {
        get_roll_number();
        get_marks();
        cout << "Percentage: " << (maths + physics) / 2 << endl;
}
};

int main() {
    Result Parth;
    Parth.set_roll_number(14367);
    Parth.set_marks(100, 95);
    Parth.calculate_percentage();
    return 0;
}