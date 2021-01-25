#include<stdio.h>

int main() {
	// 포인터 변수 선언과 변수에 값 저장
	int num = 7;
	int *intptr;
	intptr = &num;
	int* intptr2 = 0x00CFFB27;
	intptr2 = 12300;
	printf("주소 값은 %p, 값은 %d 이다 \n", intptr, *intptr);
}

// Pointer(포인터) - 메모리에 직접 접근이 가능함 (C++ WIn32에서는 이를 방지하기위해 Handler 라는 것을 제공)
// 변수의 주소 값을 반환하는 & 연산자
// Type의 포인터 형식을 지정해주는 * 연산자 (double *d, double* d, double * d 모두 같은 의미이다)
// double을 참조하는 pointer는 double만을 참조 가능하다. 이는 pointer 마다 어떤 형식으로 메모리를 참조할 지 다르기 때문이다.
// Example) integer는 4byte, double은 8byte를 참조한다
// *pointer 는 pointer 가 참조하고 있는 메모리에 할당된 값을 반환한다
