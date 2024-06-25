#include <iostream>
using namespace std;

class CWH {         //This is an abstract class because it have a pure virtual class.
protected:          //These types of classes are made for inherit purpose only.
    string title;
    float rating;
    ;

public:
    CWH(string t, float r){
        title = t;
        rating = r;
    }
    virtual void display() = 0;
     
};

class CWHvideos : public CWH {
    public:
    float videolength;
    CWHvideos(string t , float r , float vl) : CWH(t,r){
        videolength = vl;
    }
    void display(){
        cout << "Title: " << title << endl;
        cout << "Rating: " << rating << endl;
        cout << "Video Length: " << videolength << endl;
    }
};

class CWHwords : public CWH {
    public:
    int words;
    CWHwords(string t , float r , int w) : CWH(t,r){
        words = w;
    }
    void display(){
        cout << "Title: " << title << endl;
        cout << "Rating: " << rating << endl;
        cout << "Total wprds: " << words << endl;
    }
};

int main() {
    
    string title = "CPP FULL COURSE";
    float rating = 5.0;
    float videolength = 10.0;
    int words = 1000;

    CWHvideos video(title, rating, videolength);
    CWHwords word(title, rating, words);
    video.display();
    cout << endl;
    word.display();

    return 0;
}