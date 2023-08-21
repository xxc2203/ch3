/*******************************************
 *  程式名稱 : 6-1-3-1.cpp ( 動手動腳 2 )
 *  程式說明 : 結合算術運算子與邏輯運算子的練習
 *******************************************/
 
#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int year;

	cout<<"請輸入西元年份:";
	cin>>year;
	if (year%4==0 && year%100!=0 || year %400==0)
	  cout<<"西元"<<year<<"年為閏年"<<endl;
	else
	  cout<<"西元"<<year<<"年為平年"<<endl;
	system("Pause");
}