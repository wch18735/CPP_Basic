#include<stdio.h>

int main() {
	// ����1: ���� ������ �ϳ� �Է� �޾Ƽ� �� ����ŭ Hello World�� ����ϴ� ���α׷�
	// ����2: ���� ������ �Է� ���� ���� �� �� ��ŭ 3�� ����� ����ϴ� ���α׷�
	// ����4: �Է¹��� ���� ������ �ش��ϴ� �������� ����ϵ�, �������� ���
	int num;
	int temp;
	int sum = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	printf("���� �Է��ϼ���:");
	scanf("%d", &num);
	printf("========= ����1 =========\n");
	while (i < num)
	{
		printf("Hello Wolrd!! %d \n", i+1);
		i++;
	}
	
	printf("========= ����2 =========\n");
	while (j < num) {
		printf("%d \n", 3 * (j + 1));
		j++;
	}

	printf("========= ����4 =========\n");
	while (9-k >= 1) { // while ���� ���ǹ��� True �� �� �����Ѵ�
		printf("%d X %d = %d \n", num, 9-k, num*(9-k));
		k++;
	}

	printf("========= ����5 =========\n");
	while (l < num) {
		printf("������ ���� �Է��ϼ���:");
		scanf("%d", &temp);
		sum += temp;
		l++;
	}
	printf("���: %f", (float)sum / num);	// Type Casting

	return 0;
}