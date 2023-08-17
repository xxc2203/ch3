//4-2-1.cpp 
#include <iostream>
using namespace std;

main()
{
	int v1 = 2;
	float v2;
	double v3;
	
	cout<<"Input a floating point number = ";
	cin >> v2;
	v3 = v1 + v2;
	cout<<"input num + 2, Sum = " << v3 << endl;
	v1=(int) v2;
	cout<<"v2 = " << v2 << " ,(int) v2 = " << v1 <<endl;
	v1=(int) (v2+0.5);
	cout<<"v2 = "<<v2<<" ,(int) (v2+0.5) = "<< v1 <<endl;
	system("Pause");
}
