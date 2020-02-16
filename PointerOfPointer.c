#include<stdio.h>

// 이중 포인터: 포인터 변수를 가리키는 또 다른 포인터 변수

int main() {
	// int **dptr;	// int형 이중 포인터, 포인터 연산자 *을 하나 더 사용하여 이중 포인터라고 한다
	// 포인터 변수는 종류에 상관없이 무조건 주소 값을 저장하는 변수이다. 차이가 나는 것은 포인터 변수가 가리키는 대상일 뿐이다.

	double num = 3.14;
	double * ptr = &num;
	// 변수 num과 포인터 변수 ptr의 차이점과 공통점
	// 공통점: 둘 다 변수이며 값 저장이 가능하다
	// 차이점: 저장하는 값의 종류가 다르다.
	double ** double_dptr = &ptr; // ptr (자체가 주소 변수) 에 &를 붙여 'double형 메모리를 갖는 변수'의 주소를 담는 메모리를 "가리키는 주소"

	// double_dptr -> ptr -> num(3.14) : 모식도
	double *ptr2;

	printf("%9p %9p \n", ptr, *double_dptr);
	printf("%9g %9g \n", num, **double_dptr);

	ptr2 = *double_dptr; // ptr2 에 num을 향하는 주소를 넣음
	*ptr2 = 10.99;
	printf("%9g %9g \n", num, **double_dptr);	// ptr2 값을 바꾼 것이 num 값을 바꾸었다
}