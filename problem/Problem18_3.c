#include<stdio.h>

/*
	void ComplexFuncOne(???, ???){...}
	void ComplexFuncTwo(???, ???){...}

	int main(void){
		int * arr1[3];
		int * arr2[3][5];
		int** arr3[5];
		int*** arr4[3][5];

		ComplexFuncOne(arr1, arr2);
		ComplexFuncTwo(arr3, arr4);
	}
*/

/*	[정답]
	1) int * arr1[3];
	arr1은 포인터형 변수를 원소로 가지는 배열이다. 따라서
	int **ptr1 = arr1; 이라 나타낼 수 있다.

	2) int * arr2[3][5];
	arr2 는 int형 포인터 변수를 원소로 갖는 2차원 배열이다. 따라서
	int* (*ptr2)[5]; 로 나타낼 수 있다.

	3) int** arr3[5];
	arr3는 int**형 포인터 변수를 원소로 갖는 1차원 배열이다. 따라서
	int*** ptr3 로 나타낼 수 있다.

	4) int*** arr4[3][5];
	arr4는 int*** 형 포인터 변수를 원소로 갖는 2차원 배열이다. 따라서
	int *** (*ptr4)[5]; 로 나타낼 수 있다.
*/