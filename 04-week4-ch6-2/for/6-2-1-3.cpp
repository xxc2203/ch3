/*******************************************
 *  程式名稱 : 6-2-1-3.cpp ( 動手動腳 8 )
 *  程式說明 : 結合for迴圈控制指令與if流程控制指令的練習
 *******************************************/
 
#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setw;

main(){
	int n, i;

	cout<<"請輸入一個正整數:";
	cin>>n;
	cout<<"1到"<<n<<"之間7或11的倍數有:";
	for(i=1;i<=n;i++)
		if(i%7==0 || i%11==0)
			cout<<setw(3)<<i;
	cout<<endl;
	system("Pause");
}
