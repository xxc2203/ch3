/*******************************************
 *  �{���W�� : 6-2-2.cpp ( �ʤ�ʸ} 9 )
 *  �{������ : �D�Ѩ⥿��Ƥ��̤j���]��(GCD)
 *******************************************/

#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int a,b,r;

	cout<<"�п�J��1�ӥ����:";
	cin>>a;
	cout<<"�п�J��2�ӥ����:";
	cin>>b;

	r=a%b;
	while (r!=0) {
		 a=b;
		 b=r;
		 r=a%b;
	}
	cout<<"�̤j���]�ƬO"<<b<<endl;
	system("Pause");
}
