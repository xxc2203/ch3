/*******************************************
 *  �{���W�� : 6-1-5.cpp ( �ʤ�ʸ} 5 )
 *  �{������ : switch���O���m��
 *******************************************/

#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;

main()
{
	int num1,num2,op;
	bool loop;
	
	loop=true;
	while(loop){
		cout<<"�Ш̧ǿ�J2�ӼƦr(0 0 �T�{���}):";
		cin>>num1>>num2;
		if(num1==0 && num2==0)break;
		cout<<"�п�ܹB��覡(1)�[�k(2)��k(3)���k(4)���k�G";
		cin>>op;
		cout<<"�B�⵲�G:";
		switch (op)
	   {
			case 1:
				cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl<<endl;
				break;
			case 2:
				cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl<<endl;
				break;
			case 3:
				cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl<<endl;
				break;
			case 4:
				cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl<<endl;
				break;
			default:
				cout<<"��J���~�A�L�k�B��C" <<endl<<endl;
		}		
	}

	system("Pause");
}
