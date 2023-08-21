/*******************************************
 *  程式名稱 : 6-2-1-2.cpp ( 動手動腳 7 )
 *  程式說明 : 控制迴圈參數遞增、遞減變化量的練習
 *******************************************/

#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int sum,n, i;

	sum=0;
	cout<<"請輸入一個正整數:";
	cin>>n;            //輸入條件運算的終止值
	for (i=1;i<=n;i=i+2)  //設定參數遞增的變化量
		sum=sum+i; 
	cout<<"1累加到"<<n<<"總和為"<<sum<<endl;
	system("Pause");
}

