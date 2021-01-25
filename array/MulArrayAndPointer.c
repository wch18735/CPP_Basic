#include<stdio.h>

// 2차원 배열의 이름이 더블 포인터 형은 아니다!!
// 2차원 배열의 이름 역시 포인터형이다

int main() {
	int arr2d[3][3];
	printf("%d \n", arr2d);
	printf("%d \n", arr2d[0]);
	printf("%d \n\n", arr2d[0][0]);

	printf("%d \n", arr2d[1]);
	printf("%d \n\n", arr2d[1][0]);

	printf("%d \n", arr2d[2]);
	printf("%d \n\n", arr2d[2][0]);

	printf("sizeof(arr2d): %d \n", sizeof(arr2d));
	printf("sizeof(arr2d[0]): %d \n", sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]): %d \n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]): %d \n", sizeof(arr2d[2]));
	return 0;

	// 배열이름 arr2d를 대상으로 sizeof 연산을 하는 경우 배열 전체의 크기를 반환
	// arr2d[0], arr2d[1], arr2d[2]를 대상으로 sizeof 연산을 하는 경우 각 행의 크기를 반환
	// 결론적으로 arr2d는 첫 번째 요소를 가리키면서 배열 전체를 의미하지만, arr2d[0]은 첫 번째 요소를 가리키되 1행만을 의미한다.
	// 그래서 sizeof 연산의 결과가 다른 것이다.
	// 즉 arr2d 와 arr2d[0]은 서로 다른 것이다.
}

/*
	int arr[10];	// arr은 int형 포인터
	따라서 SimpleFunc(arr) 과 같이 함수의 인자로 전달되기 위해서는, void SimpleFunc(int *ptr){ ... } 이 되어야 한다
	
	따라서 int arr2[2][3]을 인자로 받는 void ComplexFunc(int **arr2){...}로 코드를 작성한다.
	이는 명백히 잘못되었다. 2차원 배열 arr2의 이름이 int **형 포인터가 아닌 것이다.

	int *parr[20]; 다음과 같은 선언에서 배열의 이름 parr 이 int ** 형 포인터이다. (int 형 포인터를 가리키는 포인터)
	
	다음과 같이 선언된 2차원 배열이 있다고 가정해보자.
	int arr2d[3][3];
	그렇다면 배열이름 arr2d가 기리키는 것은 인덱스 기준으로 [0][0]에 위치한 첫 번째 요소이다.
	그런데 2차원 배열의 경우는 arr2d[0], arr2d[1], arr2d[2] 역시 의미를 갖는다. 이는 각각 1행, 2행, 3행의 첫 번재 요소를 가리킨다.
	따라서 2차원 배열의 첫 번째 요소의 주소 값 출력을 위해서는 다음 두 가지 형태의 문장을 구성해볼 수 있다.
	printf("%p",arr2d);
	printf("%p".arr2d[0]);
	실제로 위 두 분장의 출력 결과는 동일하다. 그렇다면 arr2d와 arr2d[0]은 같을까?

	이에 대한 답변을 다음 예제의 실행 결과를 토대로 제시해보자
*/