#include<iostream>
#include<math.h>

using namespace std;

void cube(int a){
    cout<<"Cube of integer : "<<pow(a,3)<<endl;
}
void cube(float a){
    cout<<"Cube of float : "<<pow(a,3)<<endl;
}

int main () 
{
    int a=4;
    float b=5.4;
    cube(a);
    cube(b);
    return 0;
}