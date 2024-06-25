#include <iostream>
#include <string>
using namespace std;

class Binary {
public:
    string s;
    void read(void);
    void chk_bin(void);
    void display(void);
    void ones_compliment(void);
};

void Binary::read(void) {
    cout << "Enter the binary number: " << endl;
    cin >> s;
}

void Binary::chk_bin(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '0' && s[i] != '1') {
            cout << "Binary number is not valid" << endl;
            return;
        }
    }
    cout << "Binary number is valid" << endl;
}

void Binary::display(void) {
    cout << "The binary number is: " << s << endl;
}

void Binary::ones_compliment(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            s[i] = '1';
        } else {
            s[i] = '0';
        }
    }
    cout << "The ones' compliment of the binary number is: " << s << endl;
}

int main() {
    Binary b;

    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();

    return 0;
}
