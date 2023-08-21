/*******************************************
 *  程式名稱 : 6-3-1.cpp ( 動手動腳 13 ) 
 *  程式說明 : 於控制台螢幕對話框顯示實心等腰三角形
 *******************************************/
 
#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int i,j,n;
	
	cout<<"請輸入三角形底邊數量：";
	cin>>n;
	for (i=0;i<(n/2+1);i++) {
		for (j=0;j<(n/2-i);j++)
			cout<<"　";
		for (j=0;j<(2*i+1);j++)
			cout<<"＊";
		cout<<endl;
	}
	system("Pause");
}
