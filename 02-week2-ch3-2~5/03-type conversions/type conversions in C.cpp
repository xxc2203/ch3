//type conversions in C 
#include <iostream>
using namespace std;

main()
{
	int num1 = 2147483647;
	float num2 = 3.6;
	
	printf("1. (3+2.5) = %f\n", (3+2.5));
	printf("2. (3/2) = %d\n", (3/2));
	printf("3. (3.0/10) = %f\n", (3.0/10));
	printf("**********************\n");
	
	printf("num1 = 2147483647, (float) num2 = 3.6 \n");
	printf("Type Conversions: \n");
	printf("1. num1 + 1 = %d + 1 = %d\n", num1, (num1 + 1));
	printf("2. (float)num1 + 1 = %d + 1 = %f\n", (float)num1, ((float)num1 + 1));
	printf("3. %f * 10 = ((int)num2 * 10) = %d\n", num2, ((int)num2 * 10));	
	printf("4. 7 / 2 = %d\n", (7 / 2 ) );
	printf("5. (float) (7 / 2 ) = %f\n", (float) (7 / 2 ) );
	system("Pause");
}
