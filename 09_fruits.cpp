#include<iostream>
using namespace std;

class Mango {
    protected:
        int mng;
    public:
        Mango(){
            cout<<"Enter no. of Mango : ";
            cin>>mng;
        }

};
class Apple {
    protected:
        int apl;
    public: 
        Apple(){
            cout<<"Enter no. of Apple : ";
            cin>>apl;
        }
    
};
//M U L T I P L E - I n h e r i t a n c e
class Fruit : public Mango , public Apple{
    int frut;
    public:
        Fruit(){
            frut=apl+mng;
        }
        void Display(){
            cout<<"\nTotal No.of Fruits : " <<frut <<endl;
            cout<<"Total NO. of APples : "<<apl<<endl;
            cout<<"Total No. of  Mangos : "<<mng<<endl;
        }      
};

int main () 
{
    Fruit f;
    f.Display();
    return 0;
}