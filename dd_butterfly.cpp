#include<iostream>
using namespace std;
int main () 
{
    int n;
    cout<<"Enter row numbr : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=0;j<(2*n-2*i);j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int j=0;j<(2*n-2*i);j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    } 
    
    return 0;
}
