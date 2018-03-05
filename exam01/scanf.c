#define _CRT_SECURE_NO_WARNINGS //scanf함수 에러 없이 사용하기 위해.
#include<stdio.h>
/*
void main() {
	int num;
	printf("정수 4자리 입력후 Enter");
	scanf_s("%4d", &num); //scanf 오류시 -> scanf_s로 수정후 컴파일
	printf("입력된 정수: %d \n", num);

}
*/

/* scanf_s() ,gets()등 입,출력함수 
int main(void) {
	int age;
	double height, weight;
	char bloodtype[3];
	char name[10];


	printf("이름과 혈액형을 입력하세요");
	gets(name); //문자입력 함수들 (getchar(),putchar(),gets(),puts(),scanf()..)
	gets(bloodtype);//한줄단위로 문자열 입력받음(~Enter까지).

	printf("나이 키 몸무게  순서대로 입력하세요:");
	scanf_s("%d %lf %lf", &age, &height , &weight);
	printf("이름은: %s 나이: %d 키: %.1lf 몸무게:%.1lf 혈액형:%s 입니다.\n\n",name, age, height, weight, bloodtype);

	return 0;
}
*/

/*산술논리 연산(정육면체 부피) 

void main() {

	int row, col, height;
	double volume =0.0;

	printf("가로,세로,높이를 순서대로 입력하세요.\n");
	scanf_s("%d %d %d", &row, &col, &height);
	volume = row * col * height;
	printf("\n정육면체 부피: %.1lf", volume);

}
*/


