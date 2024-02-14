//There are two method for calling

#include<iostream>
using namespace std; //for cout
namespace hardik{
  void get(){
      cout<<"Hello hardik";
    }
}
using namespace hardik;
int main (){
    get();
   }

//Inside the int main 
int main (){
      hardik::get();
  }
