#define _CRT_SECURE_NO_WARNINGS //scanf함수 에러 없이 사용하기 위해.
#include <stdio.h>

// 반복문(while,for) 

int main(void) {
	/*
	int i = 1;
	int dan;

	printf("몇 단의 출력을 원하는가?");
	scanf_s("%d", &dan);

	while (i < 10) {
		printf("%d * %d = %d\n", dan, i, dan*i);
		i++;
	}
	printf("=============\n");

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", dan, i, dan*i);
	}
	*/

	printf("====[구구단]=======\n");
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%2d * %2d = %2d ", j, i, i*j);
		}
		printf("\n");
	}

	return 0;
}