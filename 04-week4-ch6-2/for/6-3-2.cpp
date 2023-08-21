/*******************************************
 *  程式名稱 : 6-3-2.cpp ( 動手動腳 14 ) 
 *  程式說明 : 於控制台螢幕對話框顯示空心等腰三角形
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
		if (i==0)
			cout<<"＊";
		else if (i==n/2)
			for (i=0;i<n;i++)
				cout<<"＊";
		else {
			cout<<"＊";
			for(j=0;j<(2*i-1);j++)
				cout<<"　";
			cout<<"＊";
		}
		cout<<endl;
	}
	system("Pause");
}
