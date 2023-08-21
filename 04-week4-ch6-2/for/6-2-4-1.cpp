/*******************************************
 *  程式名稱 : 6-2-4-1.cpp ( 動手動腳 11 )
 *  程式說明 : 巢狀for迴圈的練習(一)
 *******************************************/

#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::setw;
using std::endl;

main()
{
	int i,j;

	for (i=1;i<10;i++) {
		for (j=1;j<10;j++)
			cout<<setw(3)<<j<<"*"<<setw(1)<<i<<"="<<setw(2)<<j*i;
		cout<<endl;
	}
	system("Pause");
}
