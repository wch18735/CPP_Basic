#include<stdio.h>

// ����5: �ݺ����� ������� �ʰ� �Ҽ��� ����ϴ� ���α׷� (����Լ� ���)

void print_prime(int target, int i); // �Է¹��� ������ �Ҽ��� ����ϴ� ���α׷�
void print_num(int num);	// �Է¹��� ���� �������� ����ϴ� ���α׷�
void print_rev(int num, int i);	// �Է¹��� ���� ������������ ����ϴ� ���α׷�

// print_rev �� print_prime �̽���

int main() {
	// print_num(10);
	// print_rev(10, 1);
	int num;
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &num);
	print_rev(num, 1);
}

void print_prime(int target, int i) {
	// ���ۺ�
	if (target == 1) {
		printf("1��(��) �Ҽ��� �ƴմϴ�\n");
		return;
	}
	if (i == 1) 
		print_prime(target, i + 1);
	else if (target == i) 
		printf("%d��(��) �Ҽ��Դϴ�\n", target);
	else if (target % i == 0) {
			printf("%d��(��) �Ҽ��� �ƴմϴ�\n", target);
			return;
		}
	else if (target % i != 0) print_prime(target, i + 1);
}
void print_num(int num) {
	if (num == 0) return;
	printf("��: %d\n", num);
	print_num(num - 1);
}
void print_rev(int num, int i) {
	// Ż������: i == num
	if (i == num) {
		print_prime(i, 1);
		return;
	}
	else {
		print_prime(i, 1);
		print_rev(num, i + 1);
	}
}