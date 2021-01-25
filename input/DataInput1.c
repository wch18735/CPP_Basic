#include<stdio.h>

// [scanf 함수의 활용]

int main() {
	// 문제1: 프로그램 사용자로부터 두 개의 정수를 입력 받아서 두 수의 뺄셈과 곱셈의 결과를 출력하는 프로그램
	int a = 0, b = 0;
	printf("첫 번째 수를 입력해주세요:");
	scanf("%d", &a);
	printf("두 번째 수를 입력해주세요:");
	scanf("%d", &b);
	/* 뺄셈 */
	printf("뺄셈: %d\n", a - b);
	/* 곱셈 */
	printf("곱셈: %d\n", a*b);

	/*
		실수의 입력과정에서 e 표기법을 사용해도 된다
		float, double, long double 의 데이터 출력에 사용되는 서식문자는 각각 %f, %f, %Lf 이다.
		float, double, long double 의 데이터 입력에 사용되는 서식문자는 각각 %f, %lf, %Lf 이다.
	*/
}