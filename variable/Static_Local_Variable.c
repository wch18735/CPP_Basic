#include<stdio.h>

void SimpleFunc();

int main() {
	for (int i = 0; i < 5; i++)
		SimpleFunc(); // static_num 은 초기에 1로 초기화 된 이후 SimpleFunc()에 의해서만 접근 가능한 변수가 되어 메모리에 남는다
}

void SimpleFunc() {
	static int static_num = 1;
	int simple_num = 1;
	printf("static num: %d, simple_num: %d\n", static_num, simple_num);
	static_num++, simple_num++;
}

/*
	지역변수에 static 선언을 추가해서 만드는 static 변수의 성질은 다음과 같다
	먼저 지역변수의 성질
	 - 선언된 함수 내에서만 접근이 가능하다.
	 - 함수 내에 선언된 지역변수는 해당 함수가 반환하면 소멸된다.
	가 특징이다. static 선언은 지역변수에 전역변수의 성질을 더한다.
	 - 선언된 함수 내에서만 접근이 가능하다. (지역변수의 성질)
	 - 딱 1회 초기화되고 프로그램 종료 시까지 메모리 공간에 존재한다. (전역변수의 성질)

	 static 선언이 의미하는 바는 접근 범위를 전체가 아닌 함수 내에서만 국한되게 만들며, 메모리 상에 남아있게 만들고 싶을 때 사용한다.
*/

// register 변수는 접근을 더 빠르게 하지만 레지스터는 하나의 변수가 계속해서 존재하기에는 너무나 중요하고 비싼 메모리 공간이기에
// register 선언하여도 컴파일러가 의도대로 동작하지 않을 수 있다.