#include<iostream>
using namespace std;

class Base
{
	public:
		int i;
	private:
		int j;
	protected:
		int k;
	public:
		Base()
		{
			i = 10;
			j = 20;
			k = 30;
		}
}; 

class Derived : public Base
{
	public:
		void fun()
		{
			cout<<"Value of public i of Base : "<<i<<"\n";
//			cout<<"Value of private j of Base : "<<j<<"\n";				// NA
			cout<<"Value of protected k of Base : "<<k<<"\n";
		}
};

int main()
{
	Derived dobj;									// 
	cout<<sizeof(Derived)<<"\n";
	
	dobj.fun();
	
	return 0;
}
