#include<iostream>
using namespace std;

class construct {
    int x,y;
    public:
        construct(int x1,int y1){
            x=x1;
            y=y1;
        }
        construct(construct &ob1){
            x=2*ob1.x;
            y=2*ob1.y;
        }
        void display(){
            cout<<"  Value of x is "<<x<<endl;
            cout<<"  Value of y is "<<y<<endl;
        }
};

int main () 
{
    construct ob1(10,20);
    construct ob2=ob1;
    cout<<"NORMAL CONSTRUCTOR :"<<endl;
    ob1.display();
    cout<<"\nCOPY CONSTRUCTOR :"<<endl;
    ob2.display();

    return 0;
}
