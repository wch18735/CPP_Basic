#include<stdio.h>

// ����3: ���̰� 10�� �迭�� �����ϰ� �� 10���� ���� �Է¹޴µ�, �̶� Ȧ���� ��, ¦���� �ڿ������� ä���

int main() {
	int oddindex = 0, evenindex = 9;
	int temp;
	int arr[10];
	printf("�� 10���� ���� �Է� \n");
	for (int i = 0; i < 10; i++) {
		printf("�Է�: ");
		scanf("%d", &temp);
		// �ϳ��� �Է¹����鼭 Ȧ¦ �Ǵ��Ͽ� Index�� ����
		if (temp % 2 != 0) {
			arr[oddindex] = temp;
			oddindex++;
		}
		else {
			arr[evenindex] = temp;
			evenindex--;
		}
	}
	printf("�迭 ����� ���: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}