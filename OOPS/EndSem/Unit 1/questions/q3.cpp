/*
Define a class Matrix with an integer array of size 
3×3 as a data member.
Define a friend function that multiplies two matrix objects and returns the resultant matrix object.
*/

// IMPS
// friend Matrix product (Matrix &m1 , Matrix &m2);
// NOT = {}
// USE & , address ref
// ik , kj
#include <iostream>
using namespace std ;

class Matrix {
vector<vector<int>>v;
public :
Matrix (vector<vector<int>>v) {
for(int i=0;i<v.size();i++) {
vector<int>v1 ;
for(int j=0;j<v.size();j++) {
v1.push_back(v[i][j]);
}
this->v.push_back(v1);
}
}

    void displayMatrix() const {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }


vector<vector<int>> getVector () {return this->v ;}

friend Matrix product (Matrix &m1 , Matrix &m2);

};

Matrix product (Matrix &m1 , Matrix &m2) {
    vector<vector<int>> v1 ;
    // v1=m1.getVector() ;
    for(int i=0;i<3;i++) {
        vector<int>v2 ;
        for(int j=0;j<3;j++){
        int t=0;
        for(int k=0;k<3;k++){
        t+=(m1.getVector()[i][k]*m2.getVector()[k][j]);
}
       v2.push_back(t);
        }
        v1.push_back(v2);
    }
Matrix temp(v1) ;
return temp;
}



int main () {


vector <vector<int>> v1= {{1,2,3} , {4,5,6} , {7,8,9}};
vector<vector<int>> v2 = {{9,8,7} , {6,5,4} , {3,2,1}};
Matrix m1 (v1);
Matrix m2 (v2);
Matrix m3 = product (m1,m2);
m3.displayMatrix() ;

}