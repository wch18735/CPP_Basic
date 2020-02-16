#include<stdio.h>

// 2차원 배열을 할당하여도 이는 메모리상에서 1차원적인 구조를 갖는다

int main() {
	double arr[2][3];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("주소: %p \n", &arr[i][j]);
		}
	}
	printf("8byte씩 연속적으로 증가하는 것을 확인할 수 있다 \n");
}

// 또한 다음과 같이 다차원 배열에 원소를 넣을 때, 정사각형으로 넣지 않아도 된다.
// 선언하지 않은 부분은 Default 값으로 초기화된다.