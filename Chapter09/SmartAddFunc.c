#include <stdio.h>
void HowToUseThisProg()
{
	printf("두 개의 정수를 입력하시면 덧셈 결과가 출력됩니다. \n");
	printf("자1 그럼 두 개의 정수를 입력 하세요.\n");
}
int Add2(int num1, int num2)
{
	return num1 + num2;
}
void ShowAddResult(int num)
{
	printf("덧셈결과 출력 : %d \n", num);
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
