#include<stdio.h>

int max_num(int, int, int);
int pibo(int, int, int);

int main() {
	// 문제1: 세 개의 정수를 입력받아 가장 큰 수를 반환하는 함수 정의
	int a, b, c;
	printf("정수 3개를 입력하세요:");
	scanf("%d %d %d", &a, &b, &c);
	printf("세 수 중 가장 큰 수는 %d \n", max_num(a, b, c));

	// 문제3: 인자로 전달된 수만큼의 피보나치 수열을 출력하는 함수를 정의한다
	pibo(8, 0, 1); // 재귀함수를 이용해 0,1 이 초기 값일 때, 이후 n 개의 피보나치 수열을 출력하는 함수 정의
}

int max_num(int a, int b, int c) {
	if (a >= b) {
		if (a >= c) return a;
		else return c;
	}
	else {
		if (b >= c) return b;
		else return c;
	}
}
int pibo(int n, int p1, int p2) {	// p1 p2 p3 ...
	// 제한 조건: n 이 0이 될 때;
	if (n == 0) return 0;
	// Body: 피보나치 수열 반환
	else {
		printf("%d \n", p1+p2);
		return pibo(n - 1, p2, p1 + p2);
	}
}