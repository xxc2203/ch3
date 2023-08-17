//logical op.
#include <iostream>
using namespace std;

int main()
{
	printf("1. 9 ^ 7 = (1001) ^ (0111) = (1110) = %d\n", 9^7);
	cout << "2. !(1!=3)||1==3  : " << ( !(1!=3)||1==3 ) << endl;
	cout << "3. 1!=3&&!!(1==3) : " << ( 1!=3&&!!(1==3) ) << endl;
	cout << "4. !(1<3)||1>=3   : " << ( !(1<3)||1>=3 ) << endl;
	cout << "5. 1<3&&!(1>=3)   : " << ( 1<3&&!(1>=3) ) << endl;
	system("Pause");
}
