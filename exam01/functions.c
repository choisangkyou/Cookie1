#define _CRT_SECURE_NO_WARNINGS //scanf함수 에러 없이 사용하기 위해.
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

//매크로 선언 함수 상수 선언
#define UP 72
#define DOWN 80
#define ENTER 13
#define ESC 27

void menu(int m);
void writer();
/*
void add();
void sub();
void mul();
void div();
*/
int main(void ){

	int key=1,navi;
	//printf("[1]:더하기[2]빼기,[3]곱하기,[4]나누기,[5]종료하기 메뉴를 선택하세요:");
	
	menu(key);//기본 key(1)

	while (1) {
		navi = (int)_getch();//사용자 키조작 up(72), down(80) , Enter(13), Esc(27)
		
		switch (navi) {
		case UP:
			if(key !=1)key--;
			menu(key);
			break;
		case DOWN:
			 if(key !=6) key++;
			 menu(key);
			 break;
		case ENTER:
			
			if (key == 5)
				writer();
			break;
		case ESC:
			exit(0);
			break;
			
		}

		//printf("key값:%d", navi);
		
		
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
		printf("│                         5. 만 든 이                        │\n");
		printf("│                         6. 종료하기 ( ESC )                │\n");
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
		printf("│                         5. 만 든 이                        │\n");
		printf("│                         6. 종료하기 ( ESC )                │\n");
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
		printf("│                         5. 만 든 이                        │\n");
		printf("│                         6. 종료하기 ( ESC )                │\n");
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
		printf("│                     ☞  4. 나 누 기 ( / )                  │\n");
		printf("│                         5. 만 든 이                        │\n");
		printf("│                         6. 종료하기 ( ESC )                │\n");
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
		printf("│                     ☞  5. 만 든 이                        │\n");
		printf("│                         6. 종료하기 ( ESC )                │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("┖━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┙\n");
		break;
	case 6:
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
		printf("│                         5. 만 든 이                        │\n");
		printf("│                     ☞  6. 종료하기 ( ESC )                │\n");
		printf("│                                                            │\n");
		printf("│                                                            │\n");
		printf("┖━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┙\n");
		break;
	
	}


}

//만든이
void writer() {
	char wstr[] = "만든이 최상규 입니다.";

	for (int i = 0; i < sizeof(wstr); i++) {
		printf("%c",wstr[i]);
		Sleep(100);
	}
	
}