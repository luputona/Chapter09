#include <stdio.h>

int SimpleFuncOne()
{
	int num = 10;
	num++;
	printf("SimpleFuncOne num : %d \n", num);
	
	return 0;
}
int SimpleFuncTwo()
{
	int num1 = 20;
	int num2 = 30;

	num1++;
	num2++;

	printf("num1 & num2 : %d %d \n", num1, num2);
	return 0;
}

void main6()
{
	int num = 17;

	SimpleFuncOne();
	SimpleFuncTwo();

	printf("main num : %d \n",num);

}