#include<iostream>
using namespace std;

class salary{
    int BS,hr;
    float DA,GS;
    public:
        void input(void);
        void output(void);
};

void salary :: input(void){
    cout << "Enter Basic Salary : ";
    cin >> BS;
    DA=0.5*BS;
    cout<< "Enter hr bonus :";
    cin>>hr;
}
void salary :: output(void){
    GS = BS + DA +hr;
    cout << "\nGross Salary of the Employee : " << GS ;
}

int main () 
{
    salary emp;
    emp.input();
    emp.output();
    return 0;
}
