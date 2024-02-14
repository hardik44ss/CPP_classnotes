#include<iostream>
using namespace std;

class Point {
    public:
        int x,y;
        Point(int x1,int y1){
            x=x1;
            y=y1;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
};
class COrdinate {
    public:
        int a,b;
        COrdinate(int x1,int y1){
            // cout<<"Enter value of a adn b : ";
            cin>>a>>b;
            a=x1;
            b=y1;
        }
        void getX(void){
            cout<<"\nX-cordinate is : "<<a<<endl;
        }
        void getY(void){
            cout<<"Y-cordinate is : "<<b<<endl;
        }
};

int main () 
{
    Point p1(4,5);
    cout << "Point p1 is : ("<<p1.getX()<<","<<p1.getY()<<")"<<endl;

    COrdinate c1(6,7);
    c1.getX();
    c1.getY();
    return 0;
}
