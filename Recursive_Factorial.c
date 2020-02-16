#include<stdio.h>

int Factorial(int);

int main(){
	int n; // 변수 설정
	printf("num: ");
	scanf("%d", &n);
	printf("%d의 Factorial 값은 %d\n", n, Factorial(n));
	return 0;
}

int Factorial(int num) {
	// 탈출 조건 => 맨 마지막 Factorial(num)의 num == 1일 때, 최종 반환 값 1
	if (num == 1) {
		return 1;
	}
	// 탈출 조건을 만족하지 못하면 현재 인가된 변수와 함수의 조합을 반환하도록 한다
	else return num*Factorial(num - 1);
}

/*
	Recursive Function 에서 Recursive Fuction을 만나면 
	해당 함수에서 R.F 가 선언된 곳까지 동작하고, 앞 부분에 해당하는 명령문을 CPU로 이동시켜 동작시킨다.
	 ■ Recursive 에서는 탈출 조건의 설정이 매우 중요하다.
	 ■ 수식으로 나타냈을 때, 논리적 흐름도를 만들었을 때, 반복되는 부분과 탈출 조건을 설정하면 재귀함수를 설계할 수 있다.
*/