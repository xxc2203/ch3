/*******************************************
 *  程式名稱 : 6-3-3.cpp ( 動手動腳 15 ) 
 *  程式說明 : 數字迴文判斷(電腦軟體設計丙級技術士檢定考題)
 *******************************************/
 
#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int d,d_rev,d_bak,temp;
	
	cout<<"請輸入數字:";
	cin>>d;
	d_bak=d;
	d_rev=0;
	do {
		temp=d%10;
		d_rev=d_rev*10+temp;
		d=d/10;
	} while (d!=0);
	if (d_rev==d_bak)
		cout<<d_bak<<"是迴文"<<endl;
	else
		cout<<d_bak<<"不是迴文"<<endl;
	system("Pause");
}
