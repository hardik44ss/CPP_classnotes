#include<iostream>
using namespace std;

class matrix {
    int r,c;
    int **mat;
    public:
        matrix(int row , int col){
            r=row;
            c=col;
            mat = new int*[r];
            for(int i;i<r;i++){
                mat[i]=new int[c];
            }
        }
        void setval(int i ,int j , int value){
            mat[i][j]=value;
        }
        void operator+(matrix &m1, matrix &m2){
            matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
                cout<<result.data[i][j]<<" ";
            }
            cout<<endl;
        }

        }
        
};

int main () 
{

    return 0;
}