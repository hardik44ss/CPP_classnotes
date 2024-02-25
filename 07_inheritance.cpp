// Design a class "BankAccount" with methods to deposit, withdraw, and display balance. Create an object of this class and perform these operations.
#include<iostream>
using namespace std;

class BankAccount {
    string name ; 
    int age; 
    long long int contact;
    int pin;
    public:
       
        BankAccount(){
           
            cout<<"-:Enter details for the Bank Account :-\n";
            cout<<"Enter name : ";
            cin>>name;
            cout<<"Enter your age : ";
            cin>>age;
            cout<<"Enter contact : ";
            cin>>contact;
            cout<<"Set PIN : ";
            cin>>pin;
        }
        void getdata(){
            string naam;
            int  pass;
            cout<<"\n\n Enter your name : ";
            cin>>naam;
            cout<<"Enter your PIN : ";
            cin>>pass;

            checkdata(naam,pass);
        }
        void checkdata(string setname , int setpin){
            if(setname==name && setpin==pin){
                display();
            }
            else{
                cout<<"\n\n!!Wrong username or password. Please try again.";
            }
        }
        void display() {
            cout << "\n\nName : " << name ;
            cout << "\nAge : " << age ;
            cout <<"\nContact number  : "<<contact;
        }
};

int main () 
{
    cout<<"\n\n**** WELCOME TO F A R R A R  BANK GHARUAN \n\n";
    BankAccount cust[3];
    cust->checkdata();
    return 0;
}