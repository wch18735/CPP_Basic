#include<stdio.h>

int main() {
	// 2차원 배열: Type arr[세로 길이][가로 길이] => Type arr[행][열] 로 나타낼 수 있다.
	// 2차원 배열 size
	int arr1[3][4];
	int arr2[7][9];
	printf("세로3, 가로4 : %d \n", sizeof(arr1)/sizeof(int));
	printf("세로7, 가로9 : %d \n", sizeof(arr2)/sizeof(int));
	// 결론적으로 공간은 세로 x 가로 만큼 형성된다

	int villa[4][2];
	int population;

	/* 가구별 거주 인원 입력받기 */
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d층 %d호 거주 인원:", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}

	/* 빌라의 층별 인구수 출력하기 */
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d 층 %d호: %d\n", i + 1, j + 1,villa[i][j]);
		}
	}
}