#include<stdio.h>

// 두 개의 정수를 입력받아 최대 공약수(GCD)를 구하는 프로그램 작성

int main() {
	int num1, num2;
	int GCD = 1;
	int i = 1;

	printf("두 수를 입력하세요\n");
	printf("num1: ");
	scanf("%d", &num1);
	printf("num2: ");
	scanf("%d", &num2);

	/* 
		1. 숫자의 대소 파악
		2. 1부터 1씩 증가시키며 두 수를 나누어서 나머지 0인지 확인 (공약수이면 GCD Update)
		3. 작은 수일 때까지 (최대 공약수가 자신인 경우 포함) 확인
		4. 출력 (두 수의 최대공약수는 최소 1이므로 초기화)
	*/
	if (num1 >= num2) {
		while (i <= num2){
			if (num1%i == 0 && num2%i == 0)
				GCD = i;
			i++;
		}
	}
	else{
		while (i <= num1) {
			if (num1%i == 0 && num2%i == 0)
				GCD = i;
			i++;
		}
	}

	printf("두 수의 최대 공약수는 %d 입니다\n", GCD);
}