#include<stdio.h>


void main7()
{
	int cnt = 0;

	for (cnt = 0; cnt < 3; cnt++)
	{
		int num = 0;
		num++;
		printf("%d��° �ݺ�, �������� num�� %d \n", cnt +1, num);
	}

	if (cnt ==3)
	{
		int num = 7;
		num++;
		printf("if�� ���� �����ϴ� �������� num �� %d \n", num);
	}
}