#include<stdio.h>

// 상수 지정 방법(1) : '#define 상수명 상수값' 형식의 매크로를 사용하여 지정
#define INT_MAX1 1000

int main() {
	const int INT_MAX2 = 2000; // const 키워드를 사용하여 상수로 지정

	// 상수로 지정된 변수들은 변경 불가이다.
	// 이는 static (단 한 번 초기화된 뒤 함수의 호출에 의해서만 접근 가능한 것)
}