#include<iostream>
using namespace std;

class Demo
{
	public:
		
		int Size;
		int *Arr;
		
		Demo(int no)
		{
			Size = no;
			Arr[no];
		}
				
		void Create()
		{
			cout<<"Enter the size of array : ";
			for(int i = 0; i<Size; i++)
			{
				cin>>Arr[i];
			}
		}
		
		void Display()
		{
			cout<<"Array elements are : \n";
			
			for(int i = 0; i<Size; i++)
			{
				cout<<Arr[i]<<"\t";
			}
		}
};

int main()
{
	int no;
	
	cout<<"Enter the size of array : ";
	cin>>no;
	
	Demo obj(no);
	
	obj.Create();
	obj.Display();
	
	return 0;
}
