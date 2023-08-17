//3-3-2.cpp (C )
#include <iostream>
using namespace std;

main()
{
	int num;
	char school_name[100],x;
	printf("Input school name , students number and class:\n");
	scanf("%s %d %c", &school_name, &num, &x);
	printf("There are %d students in %s class %c\n", num, school_name, x);
	system("Pause");
}
