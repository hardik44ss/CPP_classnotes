#include<iostream>
using namespace std;
int main () 
{
    int r,c;
    cout<<"Enter number of row : ";
    cin>>r;
    cout<<"Enter number of column : ";
    cin>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0||j==0||i==r-1||j==c-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
