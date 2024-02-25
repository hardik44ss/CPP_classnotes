#include<iostream>
using namespace std;

class A {
    public:
        virtual void samefn(){
            cout<<"This is function of A"<<endl;
        }
};
class B : public A {
    public:
        void samefn(){
            cout<<"This is function of B"<<endl;
        }
};
class C : public A {
    public:
        void samefn(){
            cout<<"This is function of C"<<endl;
        }
};
class D : public B ,public C{
    public:
        void samefn(){
            cout<<"This is function of D"<<endl;
        }
};

int main () 
{
    D obj;
    obj.B::samefn(); // Accessing samefn from class B
    return 0;
}
