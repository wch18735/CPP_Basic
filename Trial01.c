#include<stdio.h>

// 문제1: 10진수 정수를 입력받아 16진수로 출력하는 프로그램 작성

int main() {
	int num;
	printf("정수를 입력하세요:");
	scanf("%d", &num);
	printf("%d 의 16진수 표현은 %x 입니다 \n", num, num);
	// %x: 16진수 (Hexa-: 16)
	// %o: 8진수 (Octo- : 8)
}