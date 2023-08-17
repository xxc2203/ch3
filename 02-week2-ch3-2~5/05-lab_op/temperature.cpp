//lab_op: temperature
#include <iostream>
using namespace std;

int main()
{
	float temper_c, temper_f;
	cout << "Input Fahrenheit degrees  : " ;
	cin >> temper_f ;
	
	temper_c = (temper_f - 32) * 5 / 9 ;	
	cout << "Celsius degrees = " << temper_c << endl;
	system("Pause");
}
