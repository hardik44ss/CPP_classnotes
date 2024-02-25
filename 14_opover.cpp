#include<iostream>
using namespace std;

class count {
    private:
        int a;
    public:
        count():a(5){}
        void operator++(){
            ++a;
        }
        void display(){
            cout<<"count "<<a<<endl;
        }
};

int main () 
{
    count c1;
    ++c1;
    c1.display();

    return 0;
}