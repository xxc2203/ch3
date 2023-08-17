//3-4-1_define.cpp

#include <iostream>
#include <iomanip>
using namespace std;
#define pi 3.14159f

int main()
{
	int rad = 10;
	float perimeter,c_area;
	
	perimeter = 2*pi*rad;
	c_area = pi*rad*rad;
	
	cout<<"radius = "<<rad<<" cm\n";
	cout<<"circumference = "<<perimeter<<" cm\n";
	cout<<"Area = "<<c_area<<" cm2"<<endl;
	system("Pause");
}
