#include<stdio.h>

int main() {
	// ����1: �� ���� ������ �Է¹޾Ƽ� �� ������ �����Ͽ� �� ���̿� �����ϴ� �������� ���� ����ؼ� ����ϴ� ���α׷��� �ۼ��϶�
	int num1, num2;
	int sum = 0;
	int mul1 = 1;
	int mul2 = 1;

	printf("ù ��° ������ �Է����ּ���:");
	scanf("%d", &num1);
	printf("�� ��° ������ �Է����ּ���:");
	scanf("%d", &num2);

	int facnum1 = num1;
	int facnum2 = num2;

	if (num1 > num2) {
		for (int i = num2; num1 >= num2; num2++)
			sum += num2;
	}
	else if (num1 < num2) {
		for (int i = num1; num2 >= num1; num1++)
			sum += num1;
	}
	else sum = num1;

	printf("��: %d\n", sum);

	// ����2: �Է¹��� �� ���� Factorial�� ����ϴ� ���α׷��� �ۼ��϶�.
	for (int i = 0; facnum1 != 0; facnum1--)
		mul1 *= facnum1;
	for (int i = 0; facnum2 != 0; facnum2--)
		mul2 *= facnum2;
	printf("�� ���� Factorial�� %d, %d �̴�.", mul1, mul2);
}