#include<stdio.h>

int main() {
	// 2���� �迭: Type arr[���� ����][���� ����] => Type arr[��][��] �� ��Ÿ�� �� �ִ�.
	// 2���� �迭 size
	int arr1[3][4];
	int arr2[7][9];
	printf("����3, ����4 : %d \n", sizeof(arr1)/sizeof(int));
	printf("����7, ����9 : %d \n", sizeof(arr2)/sizeof(int));
	// ��������� ������ ���� x ���� ��ŭ �����ȴ�

	int villa[4][2];
	int population;

	/* ������ ���� �ο� �Է¹ޱ� */
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d�� %dȣ ���� �ο�:", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}

	/* ������ ���� �α��� ����ϱ� */
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d �� %dȣ: %d\n", i + 1, j + 1,villa[i][j]);
		}
	}
}