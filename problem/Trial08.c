#include<stdio.h>

// ����8: 2�� n���� ���ϴ� �Լ��� ��������� ����

int two_exp(int);

int main() {
	int num;
	printf("������ �Է����ּ���:");
	scanf("%d", &num);
	printf("2�� %d���� %d \n", num, two_exp(num));
}

int two_exp(int n) {
	// stop(return) ����: n == 0;
	if (n == 0) return 1;
	else return 2 * two_exp(n - 1);
}