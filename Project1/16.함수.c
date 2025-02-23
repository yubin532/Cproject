#include <stdio.h>
#include <stdarg.h>
//함수가 정해지지 않은 개수의 인자 값을 받을 경우 사용하는 코드

//C언어에서 가변인자 사용하는 방법
//1. #include <stdarg.h>를 코드에 추가합니다.
//2. 함수의 매개변수에 ...이 가변인자입니다.
//3. 가변 인자의 경우는 전달받은 값을 알 수가 없습니다. 그래서 처음에 받는 값은 보통 받은 값의 개수를
//	알수 있는 데이터를 전달합니다.
//4. va_list는 전달받은 가변인자를 저장할 데이터입니다.
//5. va_start(args, count)는 가변 인자에 대한 처리를 진행합니다.
//6. va_arg(args, 자료형)은 args로부터 하나의 값을 가져오고 그 값을 자료형으로 명시합니다.
//7. va_end(args) : 가변인자에 대한 처리를 종료하고 기능을 제거합니다.(제거 안하면 프로그램에 데이터 남음 필수로 제거)
void printNumvers(int count, ...)
{
	va_list args; //전달받은 갑승ㄹ 묶음으로 저장합니다.
	va_start(args, count);
	//목록으로부터 ,count까지의 작업을 수행합니다.

	for (int i = 0; 1 < count; , i++)
	{
		printf("%d ", va_arg(args, int));
		//va_arg(묶음 이름, 자료형)를 통행
		//묶음에 있는 자료형 데이터의 값을 받아옵니다.
	}
	printf("\n");
	va_end(arg); //작업 완료

	//자주사용되는 매개변수와 인자를 알아봅시다.
	//1. 문자열을 받는 경우
	void greeting(char* name)
	{
		printf("greetin!\n");
		printf("nice to meet you %s\n", name);

	//2. 배열을 받는 경우
	void printArray(int arr[], int size)
		{
		for (int i = 0; i < size; i++)
		{
			printf("%d ", arr[1]);
		}
		printf("\n");
	}
	//배열은 주소이기 때문에, 포인터 변수로 받을 수 있습니다.
	//이 때 추가적인 작업 없이 그대로 사용할 수 있습니다.
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

		//문자열 작성
		char name[] = "Grace"
			greeting(name); //name은 배열이므로, 주소입니다. 따라서 &을 붙이지 않습니다.

		int arr[] = [1, 2, 3, 4, 5];
		printArray(arr, 5);
		printArrayptr(arr, 5);

		return 0;
}