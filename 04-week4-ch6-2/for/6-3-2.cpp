/*******************************************
 *  �{���W�� : 6-3-2.cpp ( �ʤ�ʸ} 14 ) 
 *  �{������ : �󱱨�x�ù���ܮ���ܪŤߵ��y�T����
 *******************************************/
 
#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int i,j,n;
	
	cout<<"�п�J�T���Ω���ƶq�G";
	cin>>n;
	for (i=0;i<(n/2+1);i++) {
		for (j=0;j<(n/2-i);j++)
			cout<<"�@";
		if (i==0)
			cout<<"��";
		else if (i==n/2)
			for (i=0;i<n;i++)
				cout<<"��";
		else {
			cout<<"��";
			for(j=0;j<(2*i-1);j++)
				cout<<"�@";
			cout<<"��";
		}
		cout<<endl;
	}
	system("Pause");
}
