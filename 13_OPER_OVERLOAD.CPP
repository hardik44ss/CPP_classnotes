#include <iostream>
using namespace std;

class score {
private:
    int a;
public:
    score() {
        a = 0;
    }
    void operator++() {
        a = a + 1;
    }
    void operator++(int) { //Typecasting of postfix 
        a = a + 1;
    }
    int show() { return a; }
};

int main() {
    score s1, s2;
    ++s1;//prefix
    s1++;//postfix
    s2++;
    cout << s1.show() << endl;
    cout << s2.show() << endl;
    return 0;
}
