#include<stdio.h>

// ����1: 10���� ������ �Է¹޾� 16������ ����ϴ� ���α׷� �ۼ�

int main() {
	int num;
	printf("������ �Է��ϼ���:");
	scanf("%d", &num);
	printf("%d �� 16���� ǥ���� %x �Դϴ� \n", num, num);
	// %x: 16���� (Hexa-: 16)
	// %o: 8���� (Octo- : 8)
}