/*******************************************
 *  �{���W�� : 6-1-4.cpp ( �ʤ�ʸ} 4 )
 *  �{������ : if �_�����c���m��
 *******************************************/

#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int a,b,c;

	cout<<"�п�J�T���Ϊ��T���(�Ѫ����u��A�H�Ů�Ϲj):";
	cin>>c>>b>>a;
	cout<<"�T���Ϊ��������G";
	if (a+b>c)
   {
	  if (c*c==a*a+b*b)
		cout<<"�����T����"<<endl;
	  else if (c*c<a*a+b*b)
			cout<<"�U���T����"<<endl;
	  else
		cout<<"�w���T����"<<endl;
	}
	else
		cout<<"��J���T����L�k�c���T����"<<endl;
	system("Pause");
}
