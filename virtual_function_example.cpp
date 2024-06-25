#include <iostream>
using namespace std;

class CWH {
protected:
    string title;
    float rating;

public:
    CWH(string s, float r) {
        title = s;
        rating = r;
    }
    virtual void display(){}
};

class CWHvideos : public CWH {
    float videolength;
        public:
        CWHvideos(string s, float r, float vl) : CWH(s, r) {
            videolength = vl;
        }
            void display(){
            cout << "Video title = "<<title<< endl;
            cout << "Video rating = "<<rating<< endl;
            cout << "Video length = "<<videolength<< endl;
            }

};

class CWHwebsite : public CWH {
    public:
    int words;
    CWHwebsite(string s, float r, int w) : CWH(s, r) {
        words = w;
    }
        void display(){
        cout << "Website title = "<<title<< endl;
        cout << "Website rating = "<<rating<< endl;
        cout << "Website words = "<<words<< endl;
        }

};

int main() {
    cout << "Hello, Parth!" << endl;
    cout << endl;
    string title = "CPP FULL COURSE";
    float rating = 5.0;
    float videolength = 10.0;
    int words = 1000;
    // CWHvideos v(title, rating, videolength);
    // cout << endl;
    // CWHwebsite w(title, rating, words);
    CWHvideos obj_video(title, rating, videolength);
    CWHwebsite obj_website(title, rating, words);

    CWH * ptr[2];
    ptr[0] = &obj_video;
    ptr[1] = &obj_website;
    for (int i = 0; i < 2; i++) {
        ptr[i]->display();
        cout << endl;
    }

    return 0;
    
}