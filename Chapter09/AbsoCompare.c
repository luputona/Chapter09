#include <stdio.h>

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num );

void main5()
{
	int num1 = 0;
	int num2 = 0;

	printf("�� ���� ���� �Է�:");
	scanf_s("%d %d",&num1, &num2);

	printf("%d �� %d�� ���밪�� ū ���� : %d \n", num1, num2, AbsoCompare(num1, num2));
	
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