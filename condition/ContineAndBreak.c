#include<stdio.h>

int main() {
	// 문제1: 구구단을 출력하되, 짝수 단만 출력되도록하며, 각 단은 해당 숫자까지만 출력하도록 한다.
	int dan = 1;
	int su = 1;
	while (1) {
		if (dan % 2 != 0) { // 짝수 단인지 홀수 단인지 확인
			dan++;
			continue; // 다시 조건문으로
		}
		while (1){
			printf("%d x %d = %d \n", dan, su, dan * su);
			su++;
			if (su > dan) break;
		}

		// dan을 증가시키고, 수를 맞춘다
		dan++;
		su = 1;
		if (dan == 9) break; // 가장 바깥의 while 벗어남
	}

	// 문제2: AZ + ZA = 99 인 모든 A와 Z를 구하는 프로그램
	// (10A + Z) + (10Z + A) = 99 를 만족하는 (A, Z) 를 구하는 프로그램
	for (int a = 1; a < 10; a++) {
		for (int z = 1; z < 10; z++) {
			if (11 * a + 11 * z == 99)
				printf("(%d, %d)\n", a, z);
		}
	}
}