#include<stdio.h>
/*
	전역변수 (Global Variables)에 대한 이해
	이는 함수의 region(영역)에 의해 결정된다
	함수의 영역을 마치 집합이라고 생각하면 된다
	(이 때, 내부에 선언되어있다면 이는 바깥 쪽의 영향을 받지 않는다)
*/

void Add(int);
void print_num();

int num = 1;

int main() { // 각자의 영역에 대한 수에 대한 덧셈이 이뤄지는 것을 확인할 수 있다.
	int num = 5;
	printf("Add: %d\n", num + 2);
	Add(2);
	print_num();

	return 0;
}

void Add(int val) {
	int num = 9;
	printf("Add: %d \n", num + val);
}

void print_num() {
	printf("Add: %d\n", num+2);
}

/*
	위와 같은 전역변수를 많이 선언하여
	코드가 많이 꼬이는 것을 스파게티 코드라고 한다.
	프로그래머는 이를 지양해야한다.
*/