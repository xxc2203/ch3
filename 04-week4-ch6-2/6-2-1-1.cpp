/*******************************************
 *  程式名稱 : 6-2-1-1.cpp ( 動手動腳 6 )
 *  程式說明 : 練習使用for迴圈來控制變數
 *******************************************/

#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setw;

main()
{
	int i;

	cout<<"迴圈控制變數的變化情形:";
	for (i=0;i<10;i++)
		cout<<setw(3)<<i;
	cout<<endl;
	cout<<"迴圈控制變數的變化情形:";
	for (i=10;i>0;i--)
		cout<<setw(3)<<i;
	cout<<endl;
	system("Pause");
}

