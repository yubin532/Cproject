#include <studio.h> //����� ����
#include <stdarg.h> //���� ���� ����
#include <math.h> //���� ��� ����

int main()
{
	printf("root 4 = %2f\n", sprt(4));
	
	//X^ - 2x = 2�� Ǯ���Ͻÿ�
	double a = 1;
	double b = 2;
	double c = -2;
	Quadformula(a,b,c);
	//��Ʈ : 2�� �������� Ǯ�� ���ؼ� ���� ������ �̿��غ��ϴ�.

	//01
	void Quadfomula(double a, double b, double c)
	{
		if (b * b - 4 * a * c < 0)
		{
			printf("�ذ� ����.\n");
		}
		else if (b* b - 4 * a * c = 0)
		{
			printf("�߱��� ���´�.\n");
		}
		else
		{
			printf("�� ���� ���� ���´�.\n");
		}
	}

	//2. ���� ������ �����ϴ� printRank�� �����ϼ���.
	int rank = 9;
	printRank(rank); //1st
	rank = 2;
	printRank(rank); //2nd
	rank = 3;
	printRank(rank); //3rd

	//1st, 2nd, 3rd 4th, ... 21st

	//3. ���� ������ �����ϴ� average�� �����ϼ���.
	float reuslt1 = average(3, 100, 95, 90); //95.00
	float result2 = average(4, 100, 95, 90, 00); //91.25
	//��Ʈ) print("%.2f, value);�� Ȱ���ϸ� �Ҽ��� 2�ڸ����� ��� ����

	//4.���� ������ �����ϴ� isOdd�� �����ϼ���.
	isOdd(3); //"YES"
	isOdd(4); //"NO"
	isOdd(5); //"YES"

	//5.���� ������ �����ϴ� getPrime�� �����ϼ���.

	for (int i = 1; i <= 10; i++)
	{
		if (getPrime(i) == 1)
		{
			printf("�� ���� �Ҽ��Դϴ�.\n");
		}
		else
		{
			printf("�� ���� �Ҽ��� �ƴմϴ�/\n");
		}
	}
	return 0;