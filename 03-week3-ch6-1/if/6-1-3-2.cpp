/*******************************************
 *  �{���W�� : 6-1-3-2.cpp ( �ʤ�ʸ} 3 )
 *  �{������ : ²�Ƴs��ʧP�_���{���X���c�m��
 *******************************************/
 
#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int score;

	cout<<"�п�J�ǥͦ��Z:";
	cin>>score;
	if (score>=90)
	  cout<<"�ǥ͵��Ĥ��Ƭ� A"<<endl;
	else if (score>=80)
		  cout<<"�ǥ͵��Ĥ��Ƭ� B"<<endl;
	else if (score>=70)
		  cout<<"�ǥ͵��Ĥ��Ƭ� C"<<endl;
	else if (score>=60)
		  cout<<"�ǥ͵��Ĥ��Ƭ� D"<<endl;
	else
	  cout<<"�ǥ͵��Ĥ��Ƭ� F"<<endl;
	system("Pause");
}
