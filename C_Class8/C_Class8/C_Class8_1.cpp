#include <stdio.h>

int main(void)
{
	int num = 0;
	int i = 0;
	int sum = 0;

	printf("1-num������ ���� ���ϼ��� num�� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	printf("\n\n\nfor�� �̿� \n\n\n");
	for (i = 1; i <= num; i++)
	{
		//sum = sum + i;
		sum += i;
		//printf("%d   %d \n", i, sum);

		printf("%d + ", i);
	}

	printf("\b\b = %d\n\n\n", sum);  //backspace�� �̿��Ͽ� + �����

	printf("\n\n\nwhile�� �̿� \n\n\n");
	i = 1; // i �ʱ�ȭ
	sum = 0;
	while (i <= num)
	{
		//sum = sum + i;
		sum += i;
		//printf("%d   %d \n", i, sum);
		printf("%d + ", i);
		i++;
	}
	printf("\b\b = %d\n\n\n", sum);  //backspace�� �̿��Ͽ� + �����

	printf("\n\n\ndo while�� �̿� \n\n\n");
	i = 1; // i �ʱ�ȭ
	sum = 0;
	do

	{
		//sum = sum + i;
		sum += i;
		//printf("%d   %d \n", i, sum);
		printf("%d + ", i);
		i++;
	} while (i <= num);

	printf("\b\b = %d\n\n\n", sum);  //backspace�� �̿��Ͽ� + �����
	return 0;

}