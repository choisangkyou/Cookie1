#define _CRT_SECURE_NO_WARNINGS //scanf함수 에러 없이 사용하기 위해.
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
// 반복문(while,for) 
/*
void main() {

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

	printf("====[구구단]=======\n");
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%2d * %2d = %2d ", j, i, i*j);

		}
		printf("\n");

	}
	

	//난수를 이용한 숫자 맞추기.
	//typedef enum { false, true } bool;
	int low = 1, high = 100, count=0, ran, inNum;
	_Bool bloop = 1;
	srand((unsigned int)time(NULL)); //난수 씨드생성(시스템 시간 사용).
	ran = rand() % 100 + 1; //난수 1~100 까지 생성.
	printf("[1~100]까지 숫자를 입력하세요:");
	//printf("%d", ran);
	
	do {

	printf("[%d ~ %d] 사이 숫자를 입력하세요. \n", low, high);
	scanf_s("%d", &inNum);
	count++;
		if (inNum > high || inNum < low) {
			printf("범위를 벗어 났습니다.\n");
		}else if (ran > inNum) {
			printf("위에 수 입니다.\n");
			low = (inNum == 0 ? 0 :inNum + 1);
		}else if(ran < inNum){
			printf("아래 수 입니다.\n");
			high = (inNum ==100 ? 100: inNum - 1);
		}else {
			printf("짝짝짝!. %d번 만에 맞추었습니다.\n", count);
			bloop = 0;	//break;
		}
		
	} while (bloop);

}
*/