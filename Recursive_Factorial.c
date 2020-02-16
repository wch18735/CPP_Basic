#include<stdio.h>

int Factorial(int);

int main(){
	int n; // ���� ����
	printf("num: ");
	scanf("%d", &n);
	printf("%d�� Factorial ���� %d\n", n, Factorial(n));
	return 0;
}

int Factorial(int num) {
	// Ż�� ���� => �� ������ Factorial(num)�� num == 1�� ��, ���� ��ȯ �� 1
	if (num == 1) {
		return 1;
	}
	// Ż�� ������ �������� ���ϸ� ���� �ΰ��� ������ �Լ��� ������ ��ȯ�ϵ��� �Ѵ�
	else return num*Factorial(num - 1);
}

/*
	Recursive Function ���� Recursive Fuction�� ������ 
	�ش� �Լ����� R.F �� ����� ������ �����ϰ�, �� �κп� �ش��ϴ� ��ɹ��� CPU�� �̵����� ���۽�Ų��.
	 �� Recursive ������ Ż�� ������ ������ �ſ� �߿��ϴ�.
	 �� �������� ��Ÿ���� ��, ���� �帧���� ������� ��, �ݺ��Ǵ� �κа� Ż�� ������ �����ϸ� ����Լ��� ������ �� �ִ�.
*/