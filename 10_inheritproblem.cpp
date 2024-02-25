#include<iostream>
using namespace std;
//Ambiguity resolution in H Y B R I D - I N H E R I T A N C E
class Base {
    public:
        int a;
        Base(){
            a=0;
        }
};
class Der1 : virtual public Base {
// class Der1 : public Base {
    public:
        int c;
};
class Der2 :virtual public Base {
// class Der2 : public Base {
    public:
        int c;
};

class Der3 : public Der1 , public Der2{
    public:
    void show(){
        cout<<"Value of a : "<<a<<endl;
    }
};


int main () 
{
    Der3 obj;
    obj.show();
    return 0;
}