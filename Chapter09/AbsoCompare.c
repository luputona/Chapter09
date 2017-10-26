#include <stdio.h>

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num );

void main5()
{
	int num1 = 0;
	int num2 = 0;

	printf("두 개의 정수 입력:");
	scanf_s("%d %d",&num1, &num2);

	printf("%d 와 %d중 절대값이 큰 정수 : %d \n", num1, num2, AbsoCompare(num1, num2));
	
}

int AbsoCompare(int num1, int num2)
{
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
	{
		return num1;
	}
	else
	{
		return num2;
	}	
}

int GetAbsoValue(int num)
{
	if (num < 0)
	{
		return num * (-1);
	}
	else
	{
		return num;
	}
}