#include <stdio.h>

int main(void)
{
	int num = 0;
	int i = 2;
	int j = 0;
	int cnt = 0;
	int sum = 0;
	printf("1-num������ ���� ������ ���� ���ϼ��� num�� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	printf("\n\n\nfor�� �̿� \n\n\n");

	for (i = 2; i <= num; i = i + j)
	{
		j = j + 1;
		sum = sum + i;
		printf("cnt= %2d,  j=  %2d, i= %3d, sum = %d\n", cnt, j, i, sum);
	}

	printf("\n\n\nwhile�� �̿� \n\n\n");
	i = 2; // i �ʱ�ȭ
	sum = 0;
	j = 0;

	while (i <= num)
	{
		sum = sum + i;
		j = j + 1;
		printf("cnt= %2d,  j=  %2d, i= %3d, sum = %d\n", cnt, j, i, sum);
		i = i + j;
	}

	printf("\n\n\ndo while�� �̿� \n\n\n");
	i = 2; // i �ʱ�ȭ
	sum = 0;
	j = 0;
	do
	{
		sum = sum + i;
		j = j + 1;
		printf("cnt= %2d,  j=  %2d, i= %3d, sum = %d\n", cnt, j, i, sum);
		i = i + j;
	} while (i <= num);

	return 0;

}