#include<stdio.h>
void main() {
	int num;
	printf("정수 4자리 입력후 Enter");
	scanf_s("%4d", &num); //scanf 오류시 -> scanf_s로 수정후 컴파일
	printf("입력된 정수: %d \n", num);

}