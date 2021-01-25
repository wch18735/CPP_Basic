#include<stdio.h>

int main() {
	// 문제1: 두 개의 정수를 입력받아서 두 정수를 포함하여 그 사이에 존재하는 정수들의 합을 계산해서 출력하는 프로그램을 작성하라
	int num1, num2;
	int sum = 0;
	int mul1 = 1;
	int mul2 = 1;

	printf("첫 번째 정수를 입력해주세요:");
	scanf("%d", &num1);
	printf("두 번째 정수를 입력해주세요:");
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

	printf("합: %d\n", sum);

	// 문제2: 입력받은 두 수의 Factorial을 출력하는 프로그램을 작성하라.
	for (int i = 0; facnum1 != 0; facnum1--)
		mul1 *= facnum1;
	for (int i = 0; facnum2 != 0; facnum2--)
		mul2 *= facnum2;
	printf("두 수의 Factorial은 %d, %d 이다.", mul1, mul2);
}