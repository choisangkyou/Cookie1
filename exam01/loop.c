#define _CRT_SECURE_NO_WARNINGS //scanf�Լ� ���� ���� ����ϱ� ����.
#include <stdio.h>

// �ݺ���(while,for) 

int main(void) {
	/*
	int i = 1;
	int dan;

	printf("�� ���� ����� ���ϴ°�?");
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

	printf("====[������]=======\n");
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%2d * %2d = %2d ", j, i, i*j);
		}
		printf("\n");
	}

	return 0;
}