//3-4-1.cpp

#include <iostream>
#include <iomanip>
using namespace std;

main()
{
	int rad = 10;
	const float pi = 3.14159f;
	float perimeter,c_area;
	
	perimeter = 2*pi*rad;
	c_area = pi*rad*rad;
	
	cout<<"radius = "<<rad<<" cm\n";
	cout<<"circumference = "<<perimeter<<" cm\n";
	cout<<"Area = "<<c_area<<" cm2"<<endl;
	system("Pause");
}
