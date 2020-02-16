#include<stdio.h>

int main() {
	// printf 는 문자열을 출력하는 함수이며, 큰 따옴표를 사용해서 문자열을 표현한다.

	/* 특수문자의 출력 */
	printf("특수문자 중 따옴표와 역슬래시의 출력은 \\의 결합으로 표현한다: \", \',\\ \n");

	/* 특수문자의 종류 */
	printf("\a \n");
	printf("\b \n");
	printf("\f \n");
	printf("\n \n");
	printf("\r \n");
	printf("\t \n");
	printf("\v \n");
	printf("\' \n");
	printf("\" \n");
	printf("\? \n");
	printf("\\ \n");
}