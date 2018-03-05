#define _CRT_SECURE_NO_WARNINGS //scanf함수 에러 없이 사용하기 위해.
#include <stdio.h>

/*제어문 (조건,반복,분기)*/
void main() {
	int age;
	printf("숫자를 입력하세요.");
	scanf_s("%d", &age);

	/* 홀수/짝수..
	if (age% 2 ==0) {
		printf("짝수 입니다.");
	}
	else {

		printf("홀수 입니다.");
	}
	*/

	//0보다크면 양수 , 작으면 음수 같으면 0입니다.
	/*
	if (age > 0) {
		printf("양수 입니다.");
	}
	else if (age < 0) {
		printf("음수 입니다.");
	}
	else {
		printf("0입니다.");
	}
	*/

	//

}
