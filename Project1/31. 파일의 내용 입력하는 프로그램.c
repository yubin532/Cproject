#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//1. ���� ������ �ۼ�
	FILE* fp = NULL;

	//2. ���Ͽ� �Է��� �����Ϳ� ���� ����
	char name[20];
	int age;
	double height;
	//fp = fopen("user_info.txt", "w");

	//3. ���� ���� ���� üũ
	//if ((fp == NULL)
	//}
		//printf("failed file open...\n");
	//}
	//for (int i = 0; 1 < 5; i++);
	//
		//printf("%d��° ������ ������ �Է����ּ��� (����, �̸�, Ű) : ", i+1);
		//scnaf("%d %s %f", &age, name, &height);

		//���Ͽ� ����� �����ϴ� ����(fprintf)
		//fprintf(fp, "%d %s %f\n", age, name, height);
	//}
	//4. �۾� ����
	//fclose(fp);
	fp = fopen("user_info.txt", "r");

	if (fp == NULL)
	{
		printf("���� �б� ����\n");
	}

	printf("��ȣ\t����\t�̸�\tŰ\n");
	for (int i = 0; i < 5; i++)
	{
		fscanf(fp, %d %s %f\n", &age, name, &height);
		printf("%d\t%2d\t%4s\t%f3.2lf\n", i + 1, age, name, height);
	}
	printf(" ____________________________\n")
	//\t : tab ���
	//2% : ���� 2ĭ, %4s : ���� 4ĭ, %3.2lf ���� 3ĭ , �Ҽ��� 2�ڸ�

	//fprint�� ���Ͽ� �Է��� ������ �������ִ� ����Դϴ�.(���Ϸ��� ���)
	//fscanf�� ���Ͽ� �ִ� ������ �Է����ִ� ����Դϴ�.(���Ϸκ����� �Է�)
		return 0;
	}