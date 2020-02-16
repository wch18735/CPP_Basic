#include<stdio.h>

// 문제5: 반복문을 사용하지 않고 소수를 출력하는 프로그램 (재귀함수 사용)

void print_prime(int target, int i); // 입력받은 수까지 소수를 출력하는 프로그램
void print_num(int num);	// 입력받은 수를 역순으로 출력하는 프로그램
void print_rev(int num, int i);	// 입력받은 수를 오름차순으로 출력하는 프로그램

// print_rev 에 print_prime 이식함

int main() {
	// print_num(10);
	// print_rev(10, 1);
	int num;
	printf("숫자를 입력하세요:");
	scanf("%d", &num);
	print_rev(num, 1);
}

void print_prime(int target, int i) {
	// 동작부
	if (target == 1) {
		printf("1는(은) 소수가 아닙니다\n");
		return;
	}
	if (i == 1) 
		print_prime(target, i + 1);
	else if (target == i) 
		printf("%d는(은) 소수입니다\n", target);
	else if (target % i == 0) {
			printf("%d는(은) 소수가 아닙니다\n", target);
			return;
		}
	else if (target % i != 0) print_prime(target, i + 1);
}
void print_num(int num) {
	if (num == 0) return;
	printf("수: %d\n", num);
	print_num(num - 1);
}
void print_rev(int num, int i) {
	// 탈출조건: i == num
	if (i == num) {
		print_prime(i, 1);
		return;
	}
	else {
		print_prime(i, 1);
		print_rev(num, i + 1);
	}
}