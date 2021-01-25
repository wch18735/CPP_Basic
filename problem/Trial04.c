#include<stdio.h>

int main() {
	// 잔액 3500원, 최소한 1개 이상 구매
	int cream = 500, cream_num = 1;
	int sae = 700, sae_num = 1;
	int coke = 400, coke_num = 1;

	for (; cream*cream_num <= 3500; cream_num++) {
		for (; sae*sae_num <= 3500; sae_num++) {
			for (; coke*coke_num <= 3500; coke_num++) {
				if (cream*cream_num + sae * sae_num + coke * coke_num == 3500) 
					printf("크림빵: %d, 새우깡: %d, 콜라: %d \n", cream_num, sae_num, coke_num);
			}
			coke_num = 1;
		}
		sae_num = 1;
	}

	printf("어떻게 구입하시겠습니까?\n");
}

// 구매품 개수가 3개이기에 모든 경우의 수 확인하는 3중 for 문이 등장
// 만약 늘어난다면?? (고민거리)