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

/*	[����]
	1) int * arr1[3];
	arr1�� �������� ������ ���ҷ� ������ �迭�̴�. ����
	int **ptr1 = arr1; �̶� ��Ÿ�� �� �ִ�.

	2) int * arr2[3][5];
	arr2 �� int�� ������ ������ ���ҷ� ���� 2���� �迭�̴�. ����
	int* (*ptr2)[5]; �� ��Ÿ�� �� �ִ�.

	3) int** arr3[5];
	arr3�� int**�� ������ ������ ���ҷ� ���� 1���� �迭�̴�. ����
	int*** ptr3 �� ��Ÿ�� �� �ִ�.

	4) int*** arr4[3][5];
	arr4�� int*** �� ������ ������ ���ҷ� ���� 2���� �迭�̴�. ����
	int *** (*ptr4)[5]; �� ��Ÿ�� �� �ִ�.
*/