/*******************************************
 *  �{���W�� : 6-2-1-1.cpp ( �ʤ�ʸ} 6 )
 *  �{������ : �m�ߨϥ�for�j��ӱ����ܼ�
 *******************************************/

#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setw;

main()
{
	int i;

	cout<<"�j�鱱���ܼƪ��ܤƱ���:";
	for (i=0;i<10;i++)
		cout<<setw(3)<<i;
	cout<<endl;
	cout<<"�j�鱱���ܼƪ��ܤƱ���:";
	for (i=10;i>0;i--)
		cout<<setw(3)<<i;
	cout<<endl;
	system("Pause");
}

