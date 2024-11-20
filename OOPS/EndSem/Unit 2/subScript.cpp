#include <iostream>
using namespace std;

class Array {
    int* arr;
    int size;
public :
Array (int s) {
size=s;
arr= new int [s]; // arr = 
}

int& operator[] (int i){
if (i < 0 || i >= size) throw out_of_range("Index out of range");
return arr[i];
}

~Array() {
    delete[] arr;
}
};

int main () {
Array a1(5);
for(int i=0;i<6;i++) {
    cin >>a1[i];
}
for(int i=0;i<5;i++) {
    cout <<a1[i] <<" ";
}
}