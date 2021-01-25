#include<stdio.h>

// 배열이란? "동일한" 자료형을 메모리에 "연속적으로" 나열한 데이터 형태
// 1차원 배열의 선언에 필요한 것: 자료형 + 배열이름 + 길이정보

int main() {
	// 정수형 배열 5칸 선언 (동시에 초기화)
	int arr[5] = { 1,2,3,4,5 };

	// 초기화 시 초기화되지 않은 부분은 0으로 채워진다
	int arr2[5] = { 1,2,3 };
	printf("%d %d %d \n", arr2[2], arr2[3], arr2[4]); // 결과: 3 0 0

	// 컴파일러에 의한 자동 길이 지정
	int arr3[] = { 1,2,3,4,5,6 };							// sizeof(arr3)은 얼마나 많은 byte를 차지하는지, sizeof(int)는 integer byte로 나눈 것이다.
	printf("배열의 길이: %d\n", sizeof(arr3)/sizeof(int));	// 결과: 6 (자동으로 맞춰줌)

	// 실이가 12인 double형 1차원 배열
	double d_arr[12];

	/* 다음과 같이 배열의 길이에는 상수가 Literal Constant가 들어가야 한다. 변수명은 들어갈 수 없다.
	동적인 배열 길이 선언은 이후 malloc 부분에서 다룰 수 있다.
	int len = 3;
	int integer_arr[len];
	*/

	// 문자 배열 vs 문자열
	char ch_arr1[] = { 'H','i','~' };		// 문자 배열
	char ch_arr2[] = { 'H', 'i','~','\0' };	// 문자열 (끝에 NULL 문자 \0이 존재함) => C언어 관점에서 문자열이란 마지막에 널문자가 있는 것

	printf("%s\n%s\n", ch_arr1, ch_arr2);	// 다음을 실행시켰을 때와 같이 NULL문자는 끝을 나타낸다.
	// 여기에 Char 형 배열에서 정수 값 0을 대입하는 것은 NULL 문자를 넣는 것과 같다
}