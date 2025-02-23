#include <stdio.h>
#include <stdarg.h>
//�Լ��� �������� ���� ������ ���� ���� ���� ��� ����ϴ� �ڵ�

//C���� �������� ����ϴ� ���
//1. #include <stdarg.h>�� �ڵ忡 �߰��մϴ�.
//2. �Լ��� �Ű������� ...�� ���������Դϴ�.
//3. ���� ������ ���� ���޹��� ���� �� ���� �����ϴ�. �׷��� ó���� �޴� ���� ���� ���� ���� ������
//	�˼� �ִ� �����͸� �����մϴ�.
//4. va_list�� ���޹��� �������ڸ� ������ �������Դϴ�.
//5. va_start(args, count)�� ���� ���ڿ� ���� ó���� �����մϴ�.
//6. va_arg(args, �ڷ���)�� args�κ��� �ϳ��� ���� �������� �� ���� �ڷ������� ����մϴ�.
//7. va_end(args) : �������ڿ� ���� ó���� �����ϰ� ����� �����մϴ�.(���� ���ϸ� ���α׷��� ������ ���� �ʼ��� ����)
void printNumvers(int count, ...)
{
	va_list args; //���޹��� ���¤� �������� �����մϴ�.
	va_start(args, count);
	//������κ��� ,count������ �۾��� �����մϴ�.

	for (int i = 0; 1 < count; , i++)
	{
		printf("%d ", va_arg(args, int));
		//va_arg(���� �̸�, �ڷ���)�� ����
		//������ �ִ� �ڷ��� �������� ���� �޾ƿɴϴ�.
	}
	printf("\n");
	va_end(arg); //�۾� �Ϸ�

	//���ֻ��Ǵ� �Ű������� ���ڸ� �˾ƺ��ô�.
	//1. ���ڿ��� �޴� ���
	void greeting(char* name)
	{
		printf("greetin!\n");
		printf("nice to meet you %s\n", name);

	//2. �迭�� �޴� ���
	void printArray(int arr[], int size)
		{
		for (int i = 0; i < size; i++)
		{
			printf("%d ", arr[1]);
		}
		printf("\n");
	}
	//�迭�� �ּ��̱� ������, ������ ������ ���� �� �ֽ��ϴ�.
	//�� �� �߰����� �۾� ���� �״�� ����� �� �ֽ��ϴ�.
	void printArray(int* arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			printf("%d ", arr[1]);
		}
		printf("\n");
	}
	int main()
	{
		printnumbers(5, 10, 20, 30, 40, 50);
		printnumbers(4, 5, 6, 7);

		//���ڿ� �ۼ�
		char name[] = "Grace"
			greeting(name); //name�� �迭�̹Ƿ�, �ּ��Դϴ�. ���� &�� ������ �ʽ��ϴ�.

		int arr[] = [1, 2, 3, 4, 5];
		printArray(arr, 5);
		printArrayptr(arr, 5);

		return 0;
}