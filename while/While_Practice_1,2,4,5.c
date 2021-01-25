#include<stdio.h>

int main() {
	// 문제1: 양의 정수를 하나 입력 받아서 그 수만큼 Hello World를 출력하는 프로그램
	// 문제2: 양의 정수를 입력 받은 다음 그 수 만큼 3의 배수를 출력하는 프로그램
	// 문제4: 입력받은 양의 정수에 해당하는 구구단을 출력하되, 역순으로 출력
	int num;
	int temp;
	int sum = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	printf("수를 입력하세요:");
	scanf("%d", &num);
	printf("========= 문제1 =========\n");
	while (i < num)
	{
		printf("Hello Wolrd!! %d \n", i+1);
		i++;
	}
	
	printf("========= 문제2 =========\n");
	while (j < num) {
		printf("%d \n", 3 * (j + 1));
		j++;
	}

	printf("========= 문제4 =========\n");
	while (9-k >= 1) { // while 안의 조건문이 True 일 때 동작한다
		printf("%d X %d = %d \n", num, 9-k, num*(9-k));
		k++;
	}

	printf("========= 문제5 =========\n");
	while (l < num) {
		printf("덧셈할 수를 입력하세요:");
		scanf("%d", &temp);
		sum += temp;
		l++;
	}
	printf("평균: %f", (float)sum / num);	// Type Casting

	return 0;
}