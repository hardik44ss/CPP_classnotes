#include<iostream>
using namespace std;
class Vehicle {
    public:
        void display(void){
            cout<<"This is a Vehicle"<<endl;
        }
};
class Car : public Vehicle {
    public:
        void display(void){
            cout<<"This is a Car"<<endl;
        }
};
class bike : public Vehicle {
    public:
        void display(void){
            cout<<"This is a Bike"<<endl;
        }
};
int main () 
{
  
    Car c1;
    bike b1;
    int n;
    cout<<"Enter number n : ";
    cin>>n;
    switch (n)
    {
    case 2:
        c1.display();
        break;
    case 4 : 
        b1.display();
    default:
        cout<<"You entered a wrong number "<<endl;
        break;
    }
    return 0;
}