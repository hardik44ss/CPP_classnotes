/*
Rohit has n weird friends. its his birthday today , so they thought that this is the best occasion for testing their friendship with him . Theyt put up condition before Rohit that they will break the friendship unless he gives  them a party sarty on their choosen day . Formally , dth frind will break his friendship if he doesnot recieve a grand party on dth day . Rohit has despite being as rich as Gatsby , is quite fruggal and can give at most one grand party daily . Also , he wants to invite only one person in a party . SO he just wonders what is the maximum number of friendships he can save . Please help Rohit in this task !!

Input:
    - The first line of the input contatins an integer T denoting the number of thest cases . The Description  :     
    - First line will contains a single integer denoting n.
    - Second line will contain n space separated integers where dth integer corresponds to the day dth as given in the problem 

Output :
    print a single __LINE_
COnstrainsts:
    1<=T<=104
    1<=n<=50
    1<=d<=100

Sample:
    Input:
    Output: 2 2 3 2 2 1 1
            2 1 
Explanation: 
    1. Rohit can give party to the second friend on day 2 and first friend on day 3 , so he can save both his friendshis,
    2. Both the friends want a party on day 1 , and as the ROhit can not afford more than one party a day , so he can save only one of the friendship so the answer is '1'

Rohit’s weird friends have put him in a tricky situation on his birthday. They’ve set a condition: unless Rohit throws them a grand party on their chosen day, they’ll break their friendship with him. Each friend will break the friendship if they don’t receive a party on the specific day they desire. Despite being as rich as Gatsby, Rohit is frugal and can afford to give at most one grand party daily. Additionally, he wants to invite only one person to each party. Now, Rohit wonders how many friendships he can save.

Let’s break down the problem:

Input:
    The first line contains an integer T, denoting the number of test cases.
    For each test case:
    The first line contains an integer n, representing the number of friends.
    The second line contains n space-separated integers, where the i-th integer corresponds to the day di when the i-th friend wants a party.
Output:
    Print a single line corresponding to the answer for each test case.
*/
#include<iostream>
using namespace std;

class  Rohit{
    public:
        
        int n;
       Rohit(int num){
           
            n=num;
            if(n<0 || n>50){
                cout<<"Incorrect number of Friend\n"<<endl;
                exit(0);
            }
        }
        
        void getfrnd(){
            int fd[n];
            for(int i=0;i<n;i++){
                cout<<"Enter choice of Friend  "<<i+1<<" for party date: ";
                cin>>fd[i];
                if(fd[i]<0 || fd[i]>100){
                    exit(0);
                }
            }
       
            int lose =0;
            int T=0;
            for(int i=0 ; i<n;i++){
                for(int j=i+1 ; j<n;j++){
                    if (fd[i]==fd[j]){
                        lose++;
                    }
                    T++;
                }
            }
            cout<<"\n\n"<<n-lose<<" Friend saved\n";
            cout << "Total num. of cases : " << T;
        }

};
int main () 
{
    int x;
    cout<<"Enter number of friends : ";
    cin>>x;
    Rohit r(x);
    r.getfrnd();
    
    return 0;
}