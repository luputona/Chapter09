#include <stdio.h>

int num;

void Add3(int val);

void main()
{
	printf("num : %d \n", num);
	Add3(3);
	printf("num : %d \n", num);
	num++;
	printf("num : %d \n", num);
}

void Add3(int val)
{
	num += val;
}