/*******************************************
 *  �{���W�� : 6-2-1-3.cpp ( �ʤ�ʸ} 8 )
 *  �{������ : ���Xfor�j�鱱����O�Pif�y�{������O���m��
 *******************************************/
 
#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setw;

main(){
	int n, i;

	cout<<"�п�J�@�ӥ����:";
	cin>>n;
	cout<<"1��"<<n<<"����7��11�����Ʀ�:";
	for(i=1;i<=n;i++)
		if(i%7==0 || i%11==0)
			cout<<setw(3)<<i;
	cout<<endl;
	system("Pause");
}
