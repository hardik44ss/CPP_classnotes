// find largest integer in an __ARRAY_OPERATORS
#include<iostream>
using namespace std;

int main () 
{
    int arr[8]={3,4,7,5,4,6,4,6};
    int r=INT64_MIN;
    
    for(int i =0 ;i < sizeof(arr)/sizeof(int) ;i++){
        if(arr[i]>r){
            r=arr[i];
        }
    }
    cout<<"Maximum value is : "<<r<<endl;
    return 0;
}