#include <stdio.h>

int main(void) {
    // ������ �������� �����ϰ� �ʱ�ȭ�մϴ�.
    int num1 = 0xA7, num2 = 0x43;
    int num3 = 032, num4 = 24;

    // �� �������� ���� ����մϴ�.
    printf("0xA7�� 10�� ������: %d\n", num1);
    printf("0x%X�� 10�� ������: %d\n", num1, num1);
    printf("0x43�� 10�� ������: %d\n", num2);
    printf("0x%X�� 10�� ������: %d\n", num2, num2);
    printf("032�� 10�� ������: %d\n", num3);
    printf("0%o�� 10�� ������: %d\n", num3, num3);
    printf("24�� 10�� ������: %d\n", num4);
    printf("0%o�� 10�� ������: %d\n", num4, num4);

    return 0;
}
/*
#include <stdio.h>

int main(void) {
    int num1, num2, result = 0;

    // ����ڷκ��� �� ���� ������ �Է� �޽��ϴ�.
    printf("�� ���� ������ �Է��� �ּ���: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    // �� ������ ���� ����մϴ�.
    result = num1 + num2;
    printf("�� ���� ���� %d�Դϴ�.\n", result);

    // �� ������ ���� ����ϰ� ����մϴ�.
    result = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, result);

    // �� ������ ���� ����ϰ� ����մϴ�.
    result = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, result);

    // �� ������ �������� ����ϰ� ����մϴ�. (���� ������)
    result = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, result);

    return 0;
}
*/