#include <stdio.h>

int NumberCompare(int num1, int num2);

void main4()
{
	printf("3�� 4�߿��� ū ���� %d�̴�.\n",NumberCompare(3,4));
	printf("7�� 2�߿��� ū ���� %d�̴�.\n",NumberCompare(7,2));
}

int NumberCompare(int num1, int num2)
{
	if (num1 > num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}