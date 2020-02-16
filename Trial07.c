#include<stdio.h>

// ����7: 2^k <= n �� ���Ͽ� n�� �Է����� ��, �̸� �����ϴ� �ִ� k�� ����ϴ� ���α׷�

int exp(int ex, int k);

int main() {
	int k = 0;
	int n;
	printf("��� �Է�: ");
	scanf("%d", &n);
	while (exp(2, k) <= n) {
		k++;
	}
	printf("������ �����ϴ� k�� �ִ��� %d\n", k-1);
}

int exp(int ex, int k) {
	if (k == 0) return 1;
	int mul = 1;
	for (int i = 0; i < k; i++)
		mul *= ex;
	return mul;
}