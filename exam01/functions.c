#define _CRT_SECURE_NO_WARNINGS //scanf�Լ� ���� ���� ����ϱ� ����.
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

//��ũ�� ���� �Լ� ��� ����
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
	//printf("[1]:���ϱ�[2]����,[3]���ϱ�,[4]������,[5]�����ϱ� �޴��� �����ϼ���:");
	
	menu(key);//�⺻ key(1)

	while (1) {
		navi = (int)_getch();//����� Ű���� up(72), down(80) , Enter(13), Esc(27)
		
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

		//printf("key��:%d", navi);
		
		
		//UP,DOWN �����ؼ� �޴������ϱ�..
	}
	return 0;
}

void menu(int m) {
	system("cls");

	switch (m) {
	case 1:
		printf("�Ȧ�������������������������������������������������������������\n");
		printf("��                                                            ��\n");
		printf("��                      �ػ�Ģ���� ���α׷�                   ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("��                     ��  1. �� �� �� ( + )                  ��\n");
		printf("��                         2. ��    �� ( - )                  ��\n");
		printf("��                         3. �� �� �� ( * )                  ��\n");
		printf("��                         4. �� �� �� ( / )                  ��\n");
		printf("��                         5. �� �� ��                        ��\n");
		printf("��                         6. �����ϱ� ( ESC )                ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("�Ŧ�������������������������������������������������������������\n");
		break;
	case 2:
		printf("�Ȧ�������������������������������������������������������������\n");
		printf("��                                                            ��\n");
		printf("��                      �ػ�Ģ���� ���α׷�                   ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("��                         1. �� �� �� ( + )                  ��\n");
		printf("��                     ��  2. ��    �� ( - )                  ��\n");
		printf("��                         3. �� �� �� ( * )                  ��\n");
		printf("��                         4. �� �� �� ( / )                  ��\n");
		printf("��                         5. �� �� ��                        ��\n");
		printf("��                         6. �����ϱ� ( ESC )                ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("�Ŧ�������������������������������������������������������������\n");
		break;
	case 3:
		printf("�Ȧ�������������������������������������������������������������\n");
		printf("��                                                            ��\n");
		printf("��                      �ػ�Ģ���� ���α׷�                   ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("��                         1. �� �� �� ( + )                  ��\n");
		printf("��                         2. ��    �� ( - )                  ��\n");
		printf("��                     ��  3. �� �� �� ( * )                  ��\n");
		printf("��                         4. �� �� �� ( / )                  ��\n");
		printf("��                         5. �� �� ��                        ��\n");
		printf("��                         6. �����ϱ� ( ESC )                ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("�Ŧ�������������������������������������������������������������\n");
		break;
	case 4:
		printf("�Ȧ�������������������������������������������������������������\n");
		printf("��                                                            ��\n");
		printf("��                      �ػ�Ģ���� ���α׷�                   ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("��                         1. �� �� �� ( + )                  ��\n");
		printf("��                         2. ��    �� ( - )                  ��\n");
		printf("��                         3. �� �� �� ( * )                  ��\n");
		printf("��                     ��  4. �� �� �� ( / )                  ��\n");
		printf("��                         5. �� �� ��                        ��\n");
		printf("��                         6. �����ϱ� ( ESC )                ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("�Ŧ�������������������������������������������������������������\n");
		break;
	case 5:
		printf("�Ȧ�������������������������������������������������������������\n");
		printf("��                                                            ��\n");
		printf("��                      �ػ�Ģ���� ���α׷�                   ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("��                         1. �� �� �� ( + )                  ��\n");
		printf("��                         2. ��    �� ( - )                  ��\n");
		printf("��                         3. �� �� �� ( * )                  ��\n");
		printf("��                         4. �� �� �� ( / )                  ��\n");
		printf("��                     ��  5. �� �� ��                        ��\n");
		printf("��                         6. �����ϱ� ( ESC )                ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("�Ŧ�������������������������������������������������������������\n");
		break;
	case 6:
		printf("�Ȧ�������������������������������������������������������������\n");
		printf("��                                                            ��\n");
		printf("��                      �ػ�Ģ���� ���α׷�                   ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("��                         1. �� �� �� ( + )                  ��\n");
		printf("��                         2. ��    �� ( - )                  ��\n");
		printf("��                         3. �� �� �� ( * )                  ��\n");
		printf("��                         4. �� �� �� ( / )                  ��\n");
		printf("��                         5. �� �� ��                        ��\n");
		printf("��                     ��  6. �����ϱ� ( ESC )                ��\n");
		printf("��                                                            ��\n");
		printf("��                                                            ��\n");
		printf("�Ŧ�������������������������������������������������������������\n");
		break;
	
	}


}

//������
void writer() {
	char wstr[] = "������ �ֻ�� �Դϴ�.";

	for (int i = 0; i < sizeof(wstr); i++) {
		printf("%c",wstr[i]);
		Sleep(100);
	}
	
}