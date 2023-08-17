/*******************************************
 *  程式名稱 : 4-1-1.cpp ( 動手動腳 1 )
 *  程式說明 : 各種資料型態占記憶體空間大小
 *******************************************/

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;


main()
{
	int v1;
	short v2;
	long v3;
	char v4;
	bool v5;
	float v6;
	double v7;

	cout<<"各種變數型態占記憶體空間大小如下：\n";
	cout<<"宣告 int 為 "<<sizeof v1<<" Bytes\n";
	cout<<"宣告 short 為 "<<sizeof v2<<" Bytes\n";
	cout<<"宣告 long 為 "<<sizeof v3<<" Bytes\n";
	cout<<"宣告 char 為 "<<sizeof v4<<" Bytes\n";
	cout<<"宣告 bool 為 "<<sizeof v5<<" Bytes\n";
	cout<<"宣告 float 為 "<<sizeof v6<<" Bytes\n";
	cout<<"宣告 double 為 "<<sizeof v7<<" Bytes\n";
	system("Pause");
}
