//prefix and postfix increment op.
#include <iostream>
using namespace std;

int main()
{
	int x = 0, y;
	y = (++x) + 5;
	cout<<"1.Prefix : y = (++x) + 5;\n" << "  x = " << x << ", y = " << y << endl;
	
	x = 0;
	y = (x++) + 5;
	cout<<"2.Postfix : y = (x++) + 5;\n" << "  x = " << x << ", y = " << y << endl;
	system("Pause");
}
