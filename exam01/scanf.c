#define _CRT_SECURE_NO_WARNINGS //scanf�Լ� ���� ���� ����ϱ� ����.
#include<stdio.h>
/*
void main() {
	int num;
	printf("���� 4�ڸ� �Է��� Enter");
	scanf_s("%4d", &num); //scanf ������ -> scanf_s�� ������ ������
	printf("�Էµ� ����: %d \n", num);

}
*/

int main(void) {
	int age;
	double height, weight;
	char bloodtype[5];
	char name[10];


	printf("�̸��� �������� �Է��ϼ���");
	gets(name); //�����Է� �Լ��� (getchar(),putchar(),gets(),puts(),scanf()..)
	gets(bloodtype);//���ٴ����� ���ڿ� �Է¹���(~Enter����).

	printf("���� Ű ������  ������� �Է��ϼ���:");
	scanf_s("%d %lf %lf", &age, &height , &weight);
	printf("�̸���: %s ����: %d Ű: %.1lf ������:%.1lf ������:%s �Դϴ�.\n\n",name, age, height, weight, bloodtype);

	return 0;
}