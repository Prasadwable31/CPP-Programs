/* Area of Circle*/

#include<iostream>
using namespace std;

class Area{
	public : float PI = 3.14;
	int radius;
	float Area_of_circle;
	
	void area()
	{
		cout<<"Enter the radius\n";
		cin>>radius;
		
		Area_of_circle = PI*radius*radius;
		
		cout<<"Area of circle is :\n";
		cout<<Area_of_circle;
	} 
};


int main()
{
	Area n1;
	n1.area();
	
	return 0;
	
}
