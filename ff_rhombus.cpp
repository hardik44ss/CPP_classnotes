#include<iostream>
using namespace std;
int main () 
{
    int r;
    cout<<"Enter number of row : ";
    cin>>r;
    for(int i=r;i>0;i--){
        for(int j=0;j<i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<r;j++){
            cout<<"* ";

        }
        cout<<"\n";
    }
    return 0;
}   
