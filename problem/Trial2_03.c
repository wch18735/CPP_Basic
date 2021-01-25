#include<stdio.h>

// 문제3: 길이가 10인 배열을 설정하고 총 10개의 수를 입력받는데, 이때 홀수면 앞, 짝수면 뒤에서부터 채운다

int main() {
	int oddindex = 0, evenindex = 9;
	int temp;
	int arr[10];
	printf("총 10개의 숫자 입력 \n");
	for (int i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &temp);
		// 하나씩 입력받으면서 홀짝 판단하여 Index에 넣음
		if (temp % 2 != 0) {
			arr[oddindex] = temp;
			oddindex++;
		}
		else {
			arr[evenindex] = temp;
			evenindex--;
		}
	}
	printf("배열 요소의 출력: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}