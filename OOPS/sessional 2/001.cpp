//Template class
#include <iostream>
using namespace std;

template<class T1,class T2>      //Test<float,int>
							    //	Test<int,char>
class Test
{
		T1 a;
		T2 b;
	public:
		Test(T1 x, T2 y)   //parameteried constructor
		{
			a = x;
			b = y;
			
		}
		void show()
		{
			cout << a << " and " << b <<"\n";
		
		}
};
int main()
{
	Test<float,int> test1(1.23,123);     //passing datatype as a parameter
	
	test1.show();
	
	
	Test<int,char> test2(100,'W');
	test2.show();
	
	return 0;
}