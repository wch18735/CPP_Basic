#include<stdio.h>

// printf() �Լ����� %d, %f, %c, %s � �ش��ϴ� �͵��� ���� ���ڶ� �Ѵ�.
// ���� (Type)�� ���ϸ� ���� 64(Data)�� ���Ŀ� ���� �ٸ��� �ؼ��ǰų�, ǥ���� �� �ֱ� ������ ���Ĺ��ڴ� �ſ� �߿��ϴ�. 

int main() {
	int num = 15;
	printf("%d \n", num);	// decimal: 10����
	printf("%o \n", num);	// octal digit: 8����
	printf("%x \n", num);	// hexadecimal digit: 16����
	printf("%c \n", num);	// char ��
}

/*
	���� 15�� ������ ���� �پ��ϰ� ��Ÿ�� �� �ִ�.
*/