#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int seed;
	seed = (int)time(NULL);	// 현재 시간을 이용한 RAND
	srand(seed);		// 씨앗을 심는다

	for (int i = 0; i < 5; i++)
		printf("1~100 사이 난수: %d \n", rand() % 100 + 1);	// 열매를 수확한다
	return 0;
}