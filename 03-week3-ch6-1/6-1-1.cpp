/*******************************************
 *  �{���W�� : 6-1-1.cpp ( �ʤ�ʸ} 1 )
 *  �{������ : ���Y�B��l���m��
 *******************************************/
 
#include<iostream>
#include<iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;

main()
{
	int num1,num2;
	bool v1,v2,v3,v4,v5,v6;

	cout<<"�п�J��1�ӼƦr:";
	cin>>num1;
	cout<<"�п�J��2�ӼƦr:";
	cin>>num2;
	v1=(num1==num2);
	v2=(num1!=num2);
	v3=(num1>num2);
	v4=(num1>=num2);
	v5=(num1<num2);
	v6=(num1<=num2);
	cout<< boolalpha;
	cout<<num1<<"=="<<num2<<"�A����B�⦡���G�� "<<v1<<endl;
	cout<<num1<<"!="<<num2<<"�A����B�⦡���G�� "<<v2<<endl;
	cout<<num1<<"> "<<num2<<"�A����B�⦡���G�� "<<v3<<endl;
	cout<<num1<<">="<<num2<<"�A����B�⦡���G�� "<<v4<<endl;
	cout<<num1<<"< "<<num2<<"�A����B�⦡���G�� "<<v5<<endl;
	cout<<num1<<"<="<<num2<<"�A����B�⦡���G�� "<<v6<<endl;
	system("Pause");
}

