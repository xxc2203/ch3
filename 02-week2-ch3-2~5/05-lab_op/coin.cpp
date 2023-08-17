//lab_op: coin
#include <iostream>
using namespace std;

int main()
{
	int money, ten, five, one;
	cout << "Input your money : " ;
	cin >> money ;
	
	ten = money / 10 ;
	five = (money % 10) / 5 ;
	one = (money % 10) % 5 ;
	
	cout << money << " : " << endl;
	cout << "ten coin * " << ten << endl;
	cout << "five coin * " << five << endl;
	cout << "one coin * " << one << endl;
	system("Pause");
}
