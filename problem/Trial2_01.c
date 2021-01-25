#include<stdio.h>

// 길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받아서, 홀수와 짝수를 구분 지어 출력하는 프로그램을 작성해보자.
// 홀수 먼저, 이후 짝수를 출력하도록 한다.

void print_odd(int *,int);
void print_even(int *, int);

int main() {
	int arr[10];
	int i = 0;
	while (i < 10) {
		printf("입력:");
		scanf("%d", &arr[i]);
		i++;
	}
	printf("홀수: ");
	print_odd(arr, 10);
	printf("\n");
	printf("짝수: ");
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