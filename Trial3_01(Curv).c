#include<stdio.h>

// 길이가 4x4인 int형 2차원 배열을 선언하고, 배열의 모든 요소를 오른쪽 방향으로 90도씩 이동시켜서 그 결과를 출력하는 프로그램을 작성하라
int(*curvArr(int(*ptr)[4]))[4]; // 매우 중요한 표현
void printArr(int(*ptr)[4]);

// 위에서 return 형을 2차원 배열 형태로 맞추는 방법을 숙지해야한다 (이후 2차원 배열 포인터 형 변수명에 함수를 사용한 뒤 저장하기 위해)
// 반환형은 int를 가리키며 2차원 배열이고, 4칸씩 포인터 연산함을 나타낸다. 
// *curvArr은 이것이 포인터임과 동시에, 함수 포인터이며 매개변수로 2차원 배열이며 포인터 연산시 4칸씩 증가하는 것을 받는다, 를 나타냄 

int main() {
	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int (*curv1)[4];	// curv[4][4]; 로 선언하면 이는 수정할 수 없는 상태 (암묵적 const) 가 되기 때문에 다음과 같이 형태로 선언해야한다 
	int (*curv2)[4];
	int (*curv3)[4];
	printArr(arr);
	curv1 = curvArr(arr);
	printArr(curv1);
	curv2 = curvArr(curv1);
	printArr(curv2);
	curv3 = curvArr(curv2);
	printArr(curv3);
}

int(*curvArr(int(*ptr)[4]))[4]{
	int temp[16];
	int line[16];
	int k = 0;
	// 1차원으로 만들기
	for (int i = 0; i < 4; i++) {
	for (int j = 0; j < 4; j++) {
		temp[k] = ptr[i][j];
		k++;
	}
	}
	// 회전시키기
	for (int i = 0; i < 16; i++) {
	if (i / 4 == 0) {
		line[i + 3 + (i % 4) * 3] = temp[i];
	}
	else if (i / 4 == 1) {
		line[i - 2 + (i % 4) * 3] = temp[i];
	}
	else if (i / 4 == 2) {
		line[i - 7 + (i % 4) * 3] = temp[i];
	}
	else if (i / 4 == 3) {
		line[i - 12 + (i % 4) * 3] = temp[i];
	}
	}

	// 다시 2차원 배열에 집어 넣기
	for (int i = 0; i < 16; i++) {
	ptr[i / 4][i % 4] = line[i];
	}

	return ptr;
}

void printArr(int(*ptr)[4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", ptr[i][j]);
			if (j % 4 == 3) printf("\n");
		}
	}

	printf("\n\n");
}

/*
	이 문제로 배울 수 있는 것은
	1) 2차원 배열을 반환하는 함수를 선언하는 방법
	2) 그 함수에서 매개변수를 선언하는 방법
	3) 반환받는 변수 선언시 고정된 배열 선언 시 상수선언이 되기 때문에 불가능 하다는 점
*/