#include<stdio.h>

// �� ���� ������ �Է¹޾� �ִ� �����(GCD)�� ���ϴ� ���α׷� �ۼ�

int main() {
	int num1, num2;
	int GCD = 1;
	int i = 1;

	printf("�� ���� �Է��ϼ���\n");
	printf("num1: ");
	scanf("%d", &num1);
	printf("num2: ");
	scanf("%d", &num2);

	/* 
		1. ������ ��� �ľ�
		2. 1���� 1�� ������Ű�� �� ���� ����� ������ 0���� Ȯ�� (������̸� GCD Update)
		3. ���� ���� ������ (�ִ� ������� �ڽ��� ��� ����) Ȯ��
		4. ��� (�� ���� �ִ������� �ּ� 1�̹Ƿ� �ʱ�ȭ)
	*/
	if (num1 >= num2) {
		while (i <= num2){
			if (num1%i == 0 && num2%i == 0)
				GCD = i;
			i++;
		}
	}
	else{
		while (i <= num1) {
			if (num1%i == 0 && num2%i == 0)
				GCD = i;
			i++;
		}
	}

	printf("�� ���� �ִ� ������� %d �Դϴ�\n", GCD);
}