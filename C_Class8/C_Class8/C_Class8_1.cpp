#include <stdio.h>

int main(void)
{
	int num = 0;
	int i = 0;
	int sum = 0;

	printf("1-num까지의 합을 구하세요 num을 입력하세요 : ");
	scanf_s("%d", &num);
	printf("\n\n\nfor문 이용 \n\n\n");
	for (i = 1; i <= num; i++)
	{
		//sum = sum + i;
		sum += i;
		//printf("%d   %d \n", i, sum);

		printf("%d + ", i);
	}

	printf("\b\b = %d\n\n\n", sum);  //backspace를 이용하여 + 지우기

	printf("\n\n\nwhile문 이용 \n\n\n");
	i = 1; // i 초기화
	sum = 0;
	while (i <= num)
	{
		//sum = sum + i;
		sum += i;
		//printf("%d   %d \n", i, sum);
		printf("%d + ", i);
		i++;
	}
	printf("\b\b = %d\n\n\n", sum);  //backspace를 이용하여 + 지우기

	printf("\n\n\ndo while문 이용 \n\n\n");
	i = 1; // i 초기화
	sum = 0;
	do

	{
		//sum = sum + i;
		sum += i;
		//printf("%d   %d \n", i, sum);
		printf("%d + ", i);
		i++;
	} while (i <= num);

	printf("\b\b = %d\n\n\n", sum);  //backspace를 이용하여 + 지우기
	return 0;

}