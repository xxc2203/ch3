/*******************************************
 *  程式名稱 : 6-1-1.cpp ( 動手動腳 1 )
 *  程式說明 : 關係運算子的練習
 *******************************************/
 
#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;

main()
{
	int num1,num2;
	bool v1,v2,v3,v4,v5,v6;

	cout<<"請輸入第1個數字:";
	cin>>num1;
	cout<<"請輸入第2個數字:";
	cin>>num2;
	v1=(num1==num2);
	v2=(num1!=num2);
	v3=(num1>num2);
	v4=(num1>=num2);
	v5=(num1<num2);
	v6=(num1<=num2);
	cout<< boolalpha;
	cout<<num1<<"=="<<num2<<"，條件運算式結果為 "<<v1<<endl;
	cout<<num1<<"!="<<num2<<"，條件運算式結果為 "<<v2<<endl;
	cout<<num1<<"> "<<num2<<"，條件運算式結果為 "<<v3<<endl;
	cout<<num1<<">="<<num2<<"，條件運算式結果為 "<<v4<<endl;
	cout<<num1<<"< "<<num2<<"，條件運算式結果為 "<<v5<<endl;
	cout<<num1<<"<="<<num2<<"，條件運算式結果為 "<<v6<<endl;
	system("Pause");
}

