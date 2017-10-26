#include <stdio.h>
int Add1(int num1, int num2)
{
	return num1 + num2;
}
void main2()
{
	int result = 0;

	result = Add1(3, 4);
	printf("µ¡¼À°á°ú 1 : %d \n", result);

	result = Add1(5, 8);
	printf("µ¡¼À°á°ú 2 : %d \n", result);

}

