#include<stdio.h>

// �Ʒ��� �ڵ带 �����Ͽ� ???�� ����� �� �ִ� �Ű����� ������ �߰��Ͽ���
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

/* [����]
	void SimpleFuncOne(int *,int *);
	void SimpleFuncTwo(int (*ptr1)[4], int (*ptr2)[4]);
*/