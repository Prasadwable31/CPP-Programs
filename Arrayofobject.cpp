#include<iostream>
using namespace std;

class Demo 
{
	int a;
	static int b;
	public :
		void fun();
		static int gun()
		{
			cout<<b;
		}
};
int Demo :: b = 0;
		void Demo :: fun()
		{
			cout<<"Inside fun function\n";
			cout<<"enter the value of a : "<<"\n";
			cin>>a;
		}

int main()
{
	Demo obj[3];
	
	for(int i = 0; i<3; i++)
	{
		obj[i].fun();	
	}
	obj[-1 ].gun();
	return 0;
}
