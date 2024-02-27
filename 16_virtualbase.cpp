#include<iostream>
using namespace std;

class base{
    public: 
        virtual void get(){
            cout<<"Get of base class"<<endl;
        }
        void show(){
            cout<<"I am from class base "<<endl;
        }
};

class derived : public base{
    public:
        void get(){
            cout<<"Get of derived"<<endl;
        }
};


int main () 
{
    derived d1;
    base *b1=&d1;
    b1->get();
    return 0;
}