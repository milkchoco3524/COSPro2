#include <stdio.h>

int main(void)
{
	float num1;
	double num2;
	long double num3;
	printf("�Ǽ� �Է�1(e ǥ�������) : ");
	scanf_s("%f", &num1);
	printf("�Էµ� �Ǽ� %f \n", num1);
	printf("�Ǽ� �Է�2(e ǥ�������) : ");
	scanf_s("%lf", &num2);
	printf("�Էµ� �Ǽ� %f \n", num2);
	printf("�Ǽ� �Է�3(e ǥ�������): ");
	scanf_s("%Lf", &num3);
	printf("�Էµ� �Ǽ� %Lf \n", num3);
	return 0;
}



//printf("test \" I am student\" test \b \n");

/*
int myAge = 12;
printf("my age %d, %o, %#o, %#x, %#X, \n", myAge, myAge, myAge, myAge, myAge);
*/

/*
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);
	printf("%f \n", 0.12345678);
	printf("%e \n", 0.12345678);

*/

/*
printf("%s, %c \n", "AAAA", 'd');
*/

/*
double d1-1.23e-3;   // 0.00123
	double d2-1.23e-4;   // 0.000123
	double d3-1.23e-5;   // 0.0000123
	double d4-1.23e-6;   // 0.00000123

	printf("%g \n", d1);  // %f ��Ÿ�� ���
	printf("%g \n", d2);  // %f ��Ÿ�� ���
	printf("%g \n", d3);  // %e ��Ÿ�� ���
	printf("%g \n", d4);  // %e ��Ÿ�� ���
*/

/*
	printf("%-8s %14s %5s \n", "�� ��", "���� �а�", "�г�");
	printf("%-8s %14s %5s \n", "��ȣ��", "�̷������Ƽ", 1);
	printf("%-8s %14s %5s \n", "������", "�̷������Ƽ", 1);
	printf("%-8s %14s %5s \n", "������", "�̷������Ƽ", 1);
*/

/*
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %o %x", &num1, &num2, &num3);
	printf("�Էµ� ���� 10���� ��� : ");
	printf("%d %d %d \n", num1, num2, num3);
	retunr 0;
*/