#define _CRT_SECURE_NO_WARNINGS //scanf�Լ� ���� ���� ����ϱ� ����.
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
// �ݺ���(while,for) 
/*
void main() {

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

	printf("====[������]=======\n");
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%2d * %2d = %2d ", j, i, i*j);

		}
		printf("\n");

	}
	

	//������ �̿��� ���� ���߱�.
	//typedef enum { false, true } bool;
	int low = 1, high = 100, count=0, ran, inNum;
	_Bool bloop = 1;
	srand((unsigned int)time(NULL)); //���� �������(�ý��� �ð� ���).
	ran = rand() % 100 + 1; //���� 1~100 ���� ����.
	printf("[1~100]���� ���ڸ� �Է��ϼ���:");
	//printf("%d", ran);
	
	do {

	printf("[%d ~ %d] ���� ���ڸ� �Է��ϼ���. \n", low, high);
	scanf_s("%d", &inNum);
	count++;
		if (inNum > high || inNum < low) {
			printf("������ ���� �����ϴ�.\n");
		}else if (ran > inNum) {
			printf("���� �� �Դϴ�.\n");
			low = (inNum == 0 ? 0 :inNum + 1);
		}else if(ran < inNum){
			printf("�Ʒ� �� �Դϴ�.\n");
			high = (inNum ==100 ? 100: inNum - 1);
		}else {
			printf("¦¦¦!. %d�� ���� ���߾����ϴ�.\n", count);
			bloop = 0;	//break;
		}
		
	} while (bloop);

}
*/