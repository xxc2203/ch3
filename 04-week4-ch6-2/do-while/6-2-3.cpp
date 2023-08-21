/*******************************************
 *  程式名稱 : 6-2-3.cpp ( 動手動腳 10 )
 *  程式說明 : do-while迴圈的練習
 *******************************************/

#include<iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int n,k=1,fac=1;

	cout<<"請輸入1個自然數(n):";
	cin>>n;
	cout<<n<<"!";
	do {
		fac*=k;
		k++;
	} while (k<=n);
	cout<<"的計算結果為"<<fac<<endl;
	system("Pause");
}

