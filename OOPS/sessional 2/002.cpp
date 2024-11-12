#include <iostream>
using namespace std;

template<class T1=int, class T2=int> //default data types specified as int
class Test
{
	T1 a;
	T2 b;
	public:
	Test(T1 x, T2 y)
	{
		a=x;
		b=y;
	}

	void show()
	{
		cout<<a<<" and "<<b<<"\n";
	}
};

int main()
{
	Test <float, int> test1 (1.23,123);
	Test <int, char> test2 (100, 'W');
	Test <> test3 ('a', 12.983);
	 //declaration of class object without types specification

	test1.show();
	test2.show();
	test3.show();
	return 0;
}

