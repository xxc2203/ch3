// lab1-2-4
#include <iostream> 
#include <cstdlib> 
 
using namespace std; 
 
int main() 
{ 
    int v1=12, v2=36;
    cout << "before swap: v1 = " << v1 <<" ,v2 = " << v2 << endl;
	v1 = v2;
	v2 = v1;
	cout << "after swap: v1 = " << v1 <<" ,v2 = " << v2 << endl; 
	return 0;
} 
