#include<stdio.h>

// ���̰� 10�� �迭�� �����ϰ� �� 10���� ������ �Է� �޾Ƽ�, Ȧ���� ¦���� ���� ���� ����ϴ� ���α׷��� �ۼ��غ���.
// Ȧ�� ����, ���� ¦���� ����ϵ��� �Ѵ�.

void print_odd(int *,int);
void print_even(int *, int);

int main() {
	int arr[10];
	int i = 0;
	while (i < 10) {
		printf("�Է�:");
		scanf("%d", &arr[i]);
		i++;
	}
	printf("Ȧ��: ");
	print_odd(arr, 10);
	printf("\n");
	printf("¦��: ");
	print_even(arr, 10);
	printf("\n");
}

void print_odd(int *arr, int len) {
	for (int i = 0; i < len; i++) {
		if (*(arr + i) % 2 != 0) printf("%d ", *(arr + i));
	}
}

void print_even(int *arr, int len) {
	for (int i = 0; i < len; i++) {
		if (*(arr + i) % 2 == 0) printf("%d ", *(arr + i));
	}
}