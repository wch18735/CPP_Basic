#include<stdio.h>

// 문제7: 2^k <= n 에 대하여 n을 입력했을 때, 이를 만족하는 최대 k를 출력하는 프로그램

int exp(int ex, int k);

int main() {
	int k = 0;
	int n;
	printf("상수 입력: ");
	scanf("%d", &n);
	while (exp(2, k) <= n) {
		k++;
	}
	printf("공식을 만족하는 k의 최댓값은 %d\n", k-1);
}

int exp(int ex, int k) {
	if (k == 0) return 1;
	int mul = 1;
	for (int i = 0; i < k; i++)
		mul *= ex;
	return mul;
}