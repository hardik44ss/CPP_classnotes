// 4,6,7,8,
// LOgic : Real - fibbonacci
#include<iostream>
using namespace std;

class notfibb{
    int n;
    
    public:
        
        void fib(){
        cout<<"Enter number of terms : ";
        cin>>n;

        cout<<"\nFibbonacci series : \n";
        int a=0,b=1,c;
        for(int i=0;i<n;i++){
            cout<<a<<endl;
            c=a+b;
            a=b;
            b=c;
           }
        }
        int a1=0,b1=1,c1;

       
        void nfib(){
            cout<<"\nNot fibbonacci Series : \n";
            for(int i=1;i<n;i++){
                c1=a1+b1;
                
                for(;i<c1;i++){
                    cout<<i<<endl;
                    
                    }
                a1=b1;
                b1=c1;
            }

        }

};
int main(){
    notfibb fb1;
    fb1.fib();
    fb1.nfib();

}
