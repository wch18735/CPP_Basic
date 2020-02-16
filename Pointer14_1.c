#include<stdio.h>

int main() {
	// 포인터 변수가 참조하는 대상의 변경을 허용하지 않는 const 선언
	// 포인터 변수를 대상으로도 const 를 선언할 수 있다.
	// const int *ptr: *ptr 변경 불가 (그러나 ptr 이 가리키고있는 num을 num = 20; 으로 직접 변경 가능) -> 변경 방법을 제한하는 것
	// int const *ptr: *ptr 변경 가능, ptr 값 변경 불가
	// const int const *ptr : 이는 직접 변경도, 그렇다고 포인터 변경도 허락하지 않는다는 것을 뜻함 -> const arr[10] 과 같은 느낌이다!!
	
	// const는 매우 유용한 KeyWord이다. Compile에서 발견되지 않는 대입을 방지할 수 있다.
}