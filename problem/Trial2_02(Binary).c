#include<stdio.h>

// 문제2: 10진수 형태로 정수를 하나 입력 받으면 이를 2진수로 변형해서 출력하는 프로그램 작성

void print_binary(int);

int main() {
	int num;
	printf("10진수 정수 입력:");
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