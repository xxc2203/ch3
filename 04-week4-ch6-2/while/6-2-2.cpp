/*******************************************
 *  程式名稱 : 6-2-2.cpp ( 動手動腳 9 )
 *  程式說明 : 求解兩正整數之最大公因數(GCD)
 *******************************************/

#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int a,b,r;

	cout<<"請輸入第1個正整數:";
	cin>>a;
	cout<<"請輸入第2個正整數:";
	cin>>b;

	r=a%b;
	while (r!=0) {
		 a=b;
		 b=r;
		 r=a%b;
	}
	cout<<"最大公因數是"<<b<<endl;
	system("Pause");
}
