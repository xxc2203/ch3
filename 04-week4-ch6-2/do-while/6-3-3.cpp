/*******************************************
 *  �{���W�� : 6-3-3.cpp ( �ʤ�ʸ} 15 ) 
 *  �{������ : �Ʀr�j��P�_(�q���n��]�p���ŧ޳N�h�˩w���D)
 *******************************************/
 
#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int d,d_rev,d_bak,temp;
	
	cout<<"�п�J�Ʀr:";
	cin>>d;
	d_bak=d;
	d_rev=0;
	do {
		temp=d%10;
		d_rev=d_rev*10+temp;
		d=d/10;
	} while (d!=0);
	if (d_rev==d_bak)
		cout<<d_bak<<"�O�j��"<<endl;
	else
		cout<<d_bak<<"���O�j��"<<endl;
	system("Pause");
}
