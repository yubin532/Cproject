#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//���׿� ���� ����(�迭)
	//�ڷ��� �迭��[] = {��1, ��2, ��3...};

	//�迭�� �� �ϳ��� �迭��{���� ��ġ}�� ������ �����մϴ�.
	//���� ��ġ(�ε���)�� 0������ �迭�� �������� ����(����)-1���� �����˴ϴ�.

	int selected[] = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
	//[���� ȭ��]
	system("title ���� ���� �׽�Ʈ");
	printf("����� �ῡ�� �� �����\n������ �ΰ��� ���� �ƴ��� �����ϴ�. \n\n������ ������ �� ���� \n������ �ϰ� �������?\n");
	int select;
	printf("1. �������� ������ ");
	scanf("%d", &select);

	if (select == 1)
	{
		selected[0] = 1;
	}
	else if(sealed == 2)
	{
		selected[0] = 2;
	}
	else
	{
	system("cls"); //�ܼ� ȭ�� �����

	//[1�� ����]
	printf("\t�Ͼ���� �������� \n\t������ �ϴ��� ���δٸ�\n");
	printf("\t1.\"ȭâ�ѵ� ���� ������?\"\n\t������ ����̴�.");
	printf("\t2.\"��� ���� �ϵ��� ���� �� ���� ���̾�!\"\n\t�ϴ� ����� ����.");
	scanf("%d", &select);
	
	if (select == 1)
	{
		selected[1] = 1;
	}
	else if (sealed == 2)
	{
		selected[1] = 2;
	}
	else
	{
		system("cls"); //�ܼ� ȭ�� �����

	//[2�� ����]
	printf("\t�������� �����ϱ� ��,\n");
	printf("\t1. �������� ��� ì�� ������.\n");
	printf("\t2. �̸� �غ��ص� �ʰ� ������ ì�� ������.\n");
	scanf("%d", &select);

	if (select == 1)
	{
		selected[2] = 1;
	}
	else if (sealed == 2)
	{
		selected[2] = 2;
	}
	else
	{
		system("cls"); //�ܼ� ȭ�� �����

	//[3�� ����]
	printf("\tó�� �� ������ ��å�� ��\n");
	printf("\t1. �Ա��� �ִ� ������ ���� ��� ���� ������ ���� ���Ѵ�.\n");
	printf("\t2. ������ �ѹ� �� ���� �߱� ��� ��� ����.\n");
	scanf("%d", &select);

	if (select == 1)
	{
		selected[3] = 1;
	}
	else if (sealed == 2)
	{
		selected[3] = 2;
	}
	else
	{
		system("cls"); //�ܼ� ȭ�� �����

	//[4�� ����]
	printf("\t�Ϳ��� �ٶ������ �����ٸ�,\n");
	printf("\t1 ó�� ���� �����鵵 ��� ģ��!ģ��! ���� ���� �ݰ��� ���Ǵ�.\n");
	printf("\t2. �Ϳ����� �ɸ������� �ָ��� ���Ѻ���.\n");
	scanf("%d", &select);

	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (sealed == 2)
	{
		selected[0] = 2;
	}
	else
	{
		system("cls"); //�ܼ� ȭ�� �����


	//[5�� ����]
	printf("\t�ٶ��� ģ���� �Ǻκ��� ���ٰ� �ϼҿ��� �ߴ�,\n");
	printf("\t1. \"�Ǻο� ���� ģȯ�� ��ǰ�� �Ẹ�� �� �?\"�ذ����� �����Ѵ�.\n");
		printf("\t2. �����ڴ�...��ؤФФ� ���� ���Ŀ� �������ش�.\n");
	scanf("%d", &select);
	
	if (select == 1)
	{
		selected[1] = 1;
	}
	else if (sealed == 2)
	{
		selected[1] = 2;
	}
	else
	{
		system("cls"); //�ܼ� ȭ�� �����


	//[6�� ����]
	printf("\t������� ������ ���\n");
	printf("\t1. ���� ������� ������ ������ �Ϳ� �����Ѵ�.\n");
	printf("\t2. ������ �� �����ڸ��� ã��� ���� �Դ´�.\n");
	scanf("%d", &select);

	if (select == 1)
	{
		selected[2] = 1;
	}
	else if (sealed == 2)
	{
		selected[2] = 2;
	}
	else
	{
		system("cls"); //�ܼ� ȭ�� �����


	//[7�� ����]
	printf("\t�� ������ ���� �´ٴ� ���� ��ȭ �ҽ��� ��´ٸ�\n");
	printf("\t1. \"�츮�� ������ �� �ִ°� ���� ?\"���������� ����غ���.\n");
	printf("\t2. \"������ ����...������ �� �������� �� �Ƴ�?\"�̷��� �����Ѵ�.\n");
	scanf("%d", &select);
	
	if (select == 1)
	{
		selected[3] = 1;
	}
	else if (sealed == 2)
	{
		selected[3] = 2;
	}
	else
	{
		system("cls"); //�ܼ� ȭ�� �����

	//[8�� ����]
	printf("\t������� �� �� �ó����� �����⸦ ������ �ִٸ�?\n");
	printf("\t1. �ٽð��� �����⸦ ���� ����� ��ġ�� �ش�.\n");
	printf("\t2. �Ҷ� ����Ű�� ������ �׳� ���� ġ���.\n");
	scanf("%d", &select);

	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (sealed == 2)
	{
		selected[0] = 2;
	}
	else
	{
		system("cls"); //�ܼ� ȭ�� �����


	//[9�� ����]
	printf("\t���� ȯ�� ������ ���ϰ� ���� ȸ�ǰ� ���ȴ�.\n");
	printf("\t1. �׵��� ���� ���� ���� �͵��� ���������� �����Ѵ�.\n");
	printf("\t2. �ٸ� �������� ��� �����ϴ��� ���� ����.\n");
	scanf("%d", &select);
	
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (sealed == 2)
	{
		selected[0] = 2;
	}
	else
	{
		system("cls"); //�ܼ� ȭ�� �����


	//[10�� ����]
	printf("\t���� �ڽſ��� ����� �� �´´ٸ� ������ �� �´� ���� ���. ���� ���� �� ������?\n");
	printf("\t1. '���� �����ϰ� ������ �ִٴ�..' ���� �޴´�.\n");
	printf("\t2. '������ �� �´� �������!' �ų���.\n");
	scanf("%d", &select);

	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (sealed == 2)
	{
		selected[0] = 2;
	}
	else
	{
		system("cls"); //�ܼ� ȭ�� �����

	//[11�� ����]
	printf("\t���ڸ��� �� �ð��� �Ǿ��µ� ���� ���� ���� ȸ�Ǹ� �غ��ؾ� �Ѵ�.\n");
	printf("\t1. ū ���� �ȿ��� ������ ������ �����غ���.\n");
	printf("\t2. ���� �� �Ĳ��ϰ� ȸ�� �Ȱ��� �غ��Ѵ�.\n");
	scanf("%d", &select);
	
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (sealed == 2)
	{
		selected[] = 2;
	}
	else
	{
		system("cls"); //�ܼ� ȭ�� �����

	//[12�� ����]
	printf("\t���� ü���� ������ ���ǿ� ���ƿ� �ϱ⸦ ���ٸ�, \n");
	printf("\t1. ���ӿ��� �޾��� �ϵ��� �ڼ��ϰ� �����Ѵ�.\n");
	printf("\t2. ���ӿ��� �޾��� �������� ���´�..\n");
	scanf("%d", &select);
	
	if (select == 1)
	{
		selected[11] = 1;
	}
	else if (sealed == 2)
	{
		selected[11] = 2;
	}
	else
	{
		system("cls"); //�ܼ� ȭ�� �����

//�ݺ���
//12�� �ݺ��� �����ϴ� �ڵ�(i�� 0���� �����ؼ� �۾��� ���� ������ 1�� i�� ����, i�� 12���� ���� ���� �ݺ�)
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		total += selected[i];
	}
	//12 ~ 13��
	if (total == 12 && total <= 13)
	{
		printf("���Ӱ� ¥���Ѱ� ���� �ٷ��� ȣ����\n");
	}
	else if (total == 24)
	{
		printf("�Ѳ� ��ġ�� ����ø� ����\n");
	}
	return 0;
}










}