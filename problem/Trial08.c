#include<stdio.h>

// 문제8: 2의 n승을 구하는 함수를 재귀적으로 구현

int two_exp(int);

int main() {
	int num;
	printf("정수를 입력해주세요:");
	scanf("%d", &num);
	printf("2의 %d승은 %d \n", num, two_exp(num));
}

int two_exp(int n) {
	// stop(return) 조건: n == 0;
	if (n == 0) return 1;
	else return 2 * two_exp(n - 1);
}