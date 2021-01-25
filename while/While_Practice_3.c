#include<stdio.h>

int main() {
	// 문제3: 계속해서 정수를 입력 받고, 그 값을 계속해서 더해나간다. 사용자가 0을 입력하면 합을 출력하고 프로그램을 종료한다.

	int sum = 0;
	int num;
	do {
		printf("숫자를 입력하세요:");
		scanf("%d", &num);
		sum += num;
	} while (num != 0);

	printf("입력한 정수들의 총 합은 %d", sum);
}

// do ~ while 은 최소 한 번 동작시킬 때 사용하는 것이다.
// while의 끝에 ; 을 붙여 마무리한다.