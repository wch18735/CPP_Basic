#include<stdio.h>

int main() {
	// ������ ���� ����� ������ �� ����
	int num = 7;
	int *intptr;
	intptr = &num;
	int* intptr2 = 0x00CFFB27;
	intptr2 = 12300;
	printf("�ּ� ���� %p, ���� %d �̴� \n", intptr, *intptr);
}

// Pointer(������) - �޸𸮿� ���� ������ ������ (C++ WIn32������ �̸� �����ϱ����� Handler ��� ���� ����)
// ������ �ּ� ���� ��ȯ�ϴ� & ������
// Type�� ������ ������ �������ִ� * ������ (double *d, double* d, double * d ��� ���� �ǹ��̴�)
// double�� �����ϴ� pointer�� double���� ���� �����ϴ�. �̴� pointer ���� � �������� �޸𸮸� ������ �� �ٸ��� �����̴�.
// Example) integer�� 4byte, double�� 8byte�� �����Ѵ�
// *pointer �� pointer �� �����ϰ� �ִ� �޸𸮿� �Ҵ�� ���� ��ȯ�Ѵ�
