#include <iostream>
using namespace std;
int main() {
    int math[4],eng[4],dsa[4],cpp[4],iee[4],avg[4],total[4];

    
    for (int i=0;i<=4;i++){
        cout<<"*** Enter Marks of Student "<<i+1<< " ****"<<endl;
    cout<<"Enter marks in Math: ";
    cin>>math[i];
    cout<<"Enter marks in English: ";
    cin>>eng[i];
    cout<<"Enter marks in DSA : ";
    cin>>dsa[i];
    cout<<"Enter marks in CPP : ";
    cin>>cpp[i];
    cout<<"Enter marks in IEEE : ";
    cin>>iee[i];
    
    total[i]=math[i]+eng[i]+dsa[i]+cpp[i]+iee[i];
    avg[i]=total[i]/5;
    
    cout<<"Average marks of Student "<<i+1<<" is "<<avg[i]<<" in 5 subject\n\n";
    }
    
    int sum[5]={0,0,0,0,0};
    for(int i=0;i<=4;i++){
        sum[0]=sum[0]+math[i];
        sum[1]=sum[1]+eng[i];
        sum[2]=sum[2]+dsa[i];
        sum[3]=sum[3]+cpp[i];
        sum[4]=sum[4]+iee[i];
    }
    int avgsub[4];
    for(int i=0;i<=4;i++){
        avgsub[i]=sum[i]/5;
    }
    
    cout<<"\n\nAverage of math is : "<<avgsub[0]<<endl;
    cout<<"Average of english is : "<<avgsub[1]<<endl;
    cout<<"Average of dsa is : "<<avgsub[2]<<endl;
    cout<<"Average of cpp is : "<<avgsub[3]<<endl;
    cout<<"Average of IEEE is : "<<avgsub[4]<<endl;
    
    int min=100;
    for(int i=0;i<=4;i++){
        if(min>avgsub[i]){
            min=avgsub[i];
        }
    }
    cout<<"\nMinimum Average is : "<<min;
    return 0;
}
