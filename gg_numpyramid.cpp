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
        int count=1;
        for(int j=r;j>i-1;j--){
            
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
     return 0;
}
