/*******************************************
 *  �{���W�� : 6-2-3.cpp ( �ʤ�ʸ} 10 )
 *  �{������ : do-while�j�骺�m��
 *******************************************/

#include<iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int n,k=1,fac=1;

	cout<<"�п�J1�Ӧ۵M��(n):";
	cin>>n;
	cout<<n<<"!";
	do {
		fac*=k;
		k++;
	} while (k<=n);
	cout<<"���p�⵲�G��"<<fac<<endl;
	system("Pause");
}

