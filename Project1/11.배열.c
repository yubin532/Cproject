#define CRT_SECUERE_NO_WANRINGS
#include <stdio.h>

//C������ �迭


//�ڷ��� �迭��[����];
//�迭�� ��(��� : element)�� �ִ� ���
//�迭��[�ε���] = ��;
//�ε����� ���� = 0���� �迭�� ���� -1������ ����
//sizeof(�迭��) / sizeof(�ڷ���);

//�迭�� ũ�⸦ ���ϴ� ���
//sizeof(�迭��);
int main()
{
	int iArray[5]; // 0~ 4
	iArray[0] = 1; //1iArray�� 0��° ��Ҵ� 1�� �˴ϴ�.
	iArray[1] = 2; 
	iArray[2] = 3; 
	iArray[3] = 4; 
	iArray[4] = 5; 

	printf("�迭 iArray�� ������ �ִ� ��� : ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", iArray[i]);
	}
	printf("\n");
	int size = sizeof(iArray);
	printf("�迭�� ũ�� : %d byte\n", size);
	int length = sizeof(iArray) / sizeof(int);
	printf("�迭�� ���� : %d", length);
	printf("�迭�� �̸� : %p\n", iArray);
	//�迭�� ���� ������ �����͸� ��� ���� �����ϴ� �������Դϴ�.
	//�� �迭�� ��Ҵ� ������ �������� �ּҸ� ������ �˴ϴ�.
	//�迭�� ù��° ����� �ּҴ� �迭�� ���� �ּ��Դϴ�.
	//�迭�� ����� ���ÿ� �����͸� ������ �������� �޸� ���� ������ ������ �˴ϴ�.
	//�迭�� �����Ǵ� ������, �ּҿ� ���� ������ ������ �� �����ϴ�.(���� �Ұ����� ������)

	
	return 0;
}