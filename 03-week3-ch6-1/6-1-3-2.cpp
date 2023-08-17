/*******************************************
 *  程式名稱 : 6-1-3-2.cpp ( 動手動腳 3 )
 *  程式說明 : 簡化連續性判斷的程式碼結構練習
 *******************************************/
 
#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int score;

	cout<<"請輸入學生成績:";
	cin>>score;
	if (score>=90)
	  cout<<"學生等第分數為 A"<<endl;
	else if (score>=80)
		  cout<<"學生等第分數為 B"<<endl;
	else if (score>=70)
		  cout<<"學生等第分數為 C"<<endl;
	else if (score>=60)
		  cout<<"學生等第分數為 D"<<endl;
	else
	  cout<<"學生等第分數為 F"<<endl;
	system("Pause");
}
