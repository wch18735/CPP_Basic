#include<stdio.h>

// 아래의 코드를 참조하여 ???을 대신할 수 있는 매개변수 선언을 추가하여라
/*
	void SimpleFuncOne(???, ???){...}
	void SimpleFuncTwo(???, ???){...}

	int main(void){
		int arr1[3];
		int arr2[4];
		int arr3[3][4];
		int arr4[2][4];

		SimpleFuncOne(arr1, arr2);
		SimpleFuncTwo(arr3, arr4);
	}
*/

/* [정답]
	void SimpleFuncOne(int *,int *);
	void SimpleFuncTwo(int (*ptr1)[4], int (*ptr2)[4]);
*/