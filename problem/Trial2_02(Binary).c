#include<stdio.h>

// ����2: 10���� ���·� ������ �ϳ� �Է� ������ �̸� 2������ �����ؼ� ����ϴ� ���α׷� �ۼ�

void print_binary(int);

int main() {
	int num;
	printf("10���� ���� �Է�:");
	scanf("%d", &num);

	print_binary(num);
	printf("\n");
}

void print_binary(int num) {
	int arr[32];
	int binlen = 0;
	for (int i = 0; num > 0; num = num / 2,i++) {
		arr[i] = num % 2;
		binlen++;
	}
	for (int i = 0; i < binlen; i++) {
		printf("%d", arr[binlen - i -1]);
	}
}