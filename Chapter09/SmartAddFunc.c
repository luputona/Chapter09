#include <stdio.h>
void HowToUseThisProg()
{
	printf("�� ���� ������ �Է��Ͻø� ���� ����� ��µ˴ϴ�. \n");
	printf("��1 �׷� �� ���� ������ �Է� �ϼ���.\n");
}
int Add2(int num1, int num2)
{
	return num1 + num2;
}
void ShowAddResult(int num)
{
	printf("������� ��� : %d \n", num);
}
int ReadNum()
{
	int num = 0;
	scanf_s("%d", &num);
	return num;
}

void main3()
{
	int result = 0;
	int num1 = 0;
	int num2 = 0;


	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();

	result = Add2(num1,num2);
	ShowAddResult(result);

}
