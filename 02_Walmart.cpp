#include<iostream>
using namespace std;

class mart {
    int storeID;
    string name;
    string place;
    public:
        void input(int id,string naam,string jagah){
            storeID=id;
            name=naam;
            place=jagah;
        }
        void output(){
            cout<<"You enter only one store for a day : \n";
            cout << "\nStore ID : "<<storeID;
            cout << "\nName of the Mart : "<<name;
            cout << "\nPlace of the Mart : "<<place;
        }
};

int main () 
{
    mart m1;
    m1.input(20,"Walmart","delhi");
    m1.output();
    return 0;
}
