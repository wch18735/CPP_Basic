#include<stdio.h>

int main() {
	int num;
	int hour=0, min=0, sec=0;
	printf("���ڸ� �Է����ּ���:");
	scanf("%d", &num);

	hour = num / 3600;
	min = (num - hour * 3600) / 60;
	sec = num - hour * 3600 - min * 60;
	printf("[h: %d, m: %d, s: %d] \n", hour, min, sec);
}