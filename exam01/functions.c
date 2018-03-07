#define _CRT_SECURE_NO_WARNINGS //scanf함수 에러 없이 사용하기 위해.
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

//매크로 선언 함수 상수 선언
#define UP 72
#define DOWn 80

void menu(int m);
/*
int add();
int sub();
int mul();
int div();
*/
int main(void ){

	int n;
	//printf("[1]:더하기[2]빼기,[3]곱하기,[4]나누기,[5]종료하기 메뉴를 선택하세요:");
	//scanf_s("%d", &n);
	
	while (1) {
		menu(1);
		n = _getch();//up, down 아스크값
		//UP,DOWN 구분해서 메뉴선택하기..
	}
	return 0;
}

void menu(int m) {
	system("cls");

	switch (m) {
	case 1:
		printf("┍━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┒\n");
		printf("│                                                            │\n");
		printf("│                      ※사칙연산 프로그램                   │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("│                     ☞  1. 더 하 기 ( + )                  │\n");
		printf("│                         2. 빼    기 ( - )                  │\n");
		printf("│                         3. 곱 하 기 ( * )                  │\n");
		printf("│                         4. 나 누 기 ( / )                  │\n");
		printf("│                         5. 종료하기 ( ESC )                │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("┖━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┙\n");
		break;
	case 2:
		printf("┍━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┒\n");
		printf("│                                                            │\n");
		printf("│                      ※사칙연산 프로그램                   │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("│                         1. 더 하 기 ( + )                  │\n");
		printf("│                     ☞  2. 빼    기 ( - )                  │\n");
		printf("│                         3. 곱 하 기 ( * )                  │\n");
		printf("│                         4. 나 누 기 ( / )                  │\n");
		printf("│                         5. 종료하기 ( ESC )                │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("┖━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┙\n");
		break;
	case 3:
		printf("┍━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┒\n");
		printf("│                                                            │\n");
		printf("│                      ※사칙연산 프로그램                   │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("│                         1. 더 하 기 ( + )                  │\n");
		printf("│                         2. 빼    기 ( - )                  │\n");
		printf("│                     ☞  3. 곱 하 기 ( * )                  │\n");
		printf("│                         4. 나 누 기 ( / )                  │\n");
		printf("│                         5. 종료하기 ( ESC )                │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("┖━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┙\n");
		break;
	case 4:
		printf("┍━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┒\n");
		printf("│                                                            │\n");
		printf("│                      ※사칙연산 프로그램                   │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("│                         1. 더 하 기 ( + )                  │\n");
		printf("│                         2. 빼    기 ( - )                  │\n");
		printf("│                         3. 곱 하 기 ( * )                  │\n");
		printf("│                    ☞   4. 나 누 기 ( / )                  │\n");
		printf("│                         5. 종료하기 ( ESC )                │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("┖━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┙\n");
		break;
	case 5:
		printf("┍━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┒\n");
		printf("│                                                            │\n");
		printf("│                      ※사칙연산 프로그램                   │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("│                         1. 더 하 기 ( + )                  │\n");
		printf("│                         2. 빼    기 ( - )                  │\n");
		printf("│                         3. 곱 하 기 ( * )                  │\n");
		printf("│                         4. 나 누 기 ( / )                  │\n");
		printf("│                 ☞      5. 종료하기 ( ESC )                │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("┖━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┙\n");
		break;
	
	}
}