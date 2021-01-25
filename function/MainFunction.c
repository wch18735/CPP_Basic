#include<stdio.h>

int main(int argc,char *argv[]) {
	int i = 0;
	printf("전달 된 문자열의 수: %d \n", argc);

	for (i = 0; i < argc; i++)
		printf("%d 번째 문자열: %s \n", i + 1, argv[i]);
	return 0;
}

// main 함수는 다음과 같이 정의할 수도 있다.
// int main(int argc, char *argv[]){...}
// char *argv[] 에 대한 이해가 필요하다.
// 먼저 Type argv[] 는 Type *argv 과 같이 나타낼 수 있다.
// 여기서 Type을 확인하면 char* 이다.
// 결국 이는, char형 포인터 변수로 이뤄진 1차원 배열의 이름을 전달받을 수 있는 매개변수이다.