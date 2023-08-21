/*******************************************
 *  程式名稱 : 6-2-4-2.cpp ( 動手動腳 12 )
 *  程式說明 : 巢狀for迴圈的練習(二)
 *******************************************/
 
#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int i,j;

	for (i=1;i<10;i++) {
		for (j=1;j<=i;j++)
			cout<<"＊";
		cout<<endl;
	}
	system("Pause");
}
