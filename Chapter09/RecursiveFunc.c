#include <stdio.h>

void Recursive(int num)
{
	if (num <= 0)
	{
		return;
	}

	printf("Recursive cll! %d \n", num);

	Recursive(num - 1);
}

void main11()
{
	Recursive(3);
}