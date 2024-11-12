//Function Template OR Template function
#include<iostream>
using namespace std;
//---------------------------------
// the sum function works correctly for both integer and floating-point types.
template<class T>
T sum(T x, T y)          
{
    return (x+y);
}
//----------------------------------
int main()
{
    int m = 100;
    int n = 200;
    
    cout<<sum(m, n)<<endl;  //calling sum for int data
    

    float a = 7.88;
    float b = 3.99;
    
	cout<<sum(a, b)<<endl;  //calling sum for float data

    return 0;
}