/*******************************************
 *  �{���W�� : 6-2-1-2.cpp ( �ʤ�ʸ} 7 )
 *  �{������ : ����j��Ѽƻ��W�B�����ܤƶq���m��
 *******************************************/

#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int sum,n, i;

	sum=0;
	cout<<"�п�J�@�ӥ����:";
	cin>>n;            //��J����B�⪺�פ��
	for (i=1;i<=n;i=i+2)  //�]�w�Ѽƻ��W���ܤƶq
		sum=sum+i; 
	cout<<"1�֥[��"<<n<<"�`�M��"<<sum<<endl;
	system("Pause");
}

