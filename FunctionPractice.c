#include<stdio.h>

int max_num(int, int, int);
int pibo(int, int, int);

int main() {
	// ����1: �� ���� ������ �Է¹޾� ���� ū ���� ��ȯ�ϴ� �Լ� ����
	int a, b, c;
	printf("���� 3���� �Է��ϼ���:");
	scanf("%d %d %d", &a, &b, &c);
	printf("�� �� �� ���� ū ���� %d \n", max_num(a, b, c));

	// ����3: ���ڷ� ���޵� ����ŭ�� �Ǻ���ġ ������ ����ϴ� �Լ��� �����Ѵ�
	pibo(8, 0, 1); // ����Լ��� �̿��� 0,1 �� �ʱ� ���� ��, ���� n ���� �Ǻ���ġ ������ ����ϴ� �Լ� ����
}

int max_num(int a, int b, int c) {
	if (a >= b) {
		if (a >= c) return a;
		else return c;
	}
	else {
		if (b >= c) return b;
		else return c;
	}
}
int pibo(int n, int p1, int p2) {	// p1 p2 p3 ...
	// ���� ����: n �� 0�� �� ��;
	if (n == 0) return 0;
	// Body: �Ǻ���ġ ���� ��ȯ
	else {
		printf("%d \n", p1+p2);
		return pibo(n - 1, p2, p1 + p2);
	}
}