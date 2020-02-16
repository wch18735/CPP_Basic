#include<stdio.h>

int main() {
	int num;
	// int: 정수의 저장이 가능한 메모리 공간을 할당한다.
	// num: 그 공간의 이름을 num 이라 한다.

	num = 20; // 변수 num에 20을 저장한다.
	printf("%d", num);
	// printf(): 모니더에 Out 하는 함수
	// %d: 서식 문자
	// num: 서식 문자에 담길 변수 이름 (메모리)

	int num1 = 12;				// 선언과 동시에 초기화
	int num2 = 1, num3 = 2;		// 동시에 두 개의 변수를 선언 및 초기화

	/* 변수의 자료형 */
	// 정수형 변수와 실수형 변수
	int integer = 24;
	double realnum = 3.14;
}