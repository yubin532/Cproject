#include <stdio.h>


//C언어 Pointer(포인터)
//데이터의 주소 값을 저장하는 변수

//포인터의 용도?
//어떤 변수의 주소를 가리키는 역할
//새로 만드는게 아닌, 기존의 값을 활용해 가리키고 있는 곳의 변수를
//수정하는 것이 가능합니다.


//해당 개념에 대한 사용 목적
//>> 임베디드 프로그래밍에 관련 작업 시 많이 활용됩니다.
//1. 다양한 형태의 변수들의 접근과 조작이 쉬워집니다.
//2. 더 효율저긍로 프로그램 작성이 가능해집니다.
//3. 컴퓨터의 동작 방식에 대한 이해도가 높아집니다.

//임베디드 프로그램밍(Embedded Programming)
//하드웨어 기반의 특정 기능 제어(임베이드 시스템)를 진행하는 프로그램
//ex) 자동차, 냉장고, 스마트 워치 등의 기능 담당 하드웨어를 제어하는
//소프트웨어에 대한 제작




int main()
{
	int value = 100;
	int* ptr_value = &value;
	//1. *(asterisk) : 숫자 * 숫자로 쓰일 경우에는 곱하기 기호로 사용
	//                 자료형*로 쓰이느 경우는 주소를 값으로 바꿔주는 기능(주소 -> 값)
	//				   포인터에 대한 표현으로 사용합니다.

	//2. &(ampersand) : 값 & 값으로 쓰일 경우에는 해당 값에 대한 비트 AND 연산을 진행하는 기호
	//					조건식 && 조건식으로 쓰일 경우는 AND 연산을 진행하느 기호
	//					&변수명으로 쓰일 경우에는 해당 갑승ㄹ 주소로 바꿔주는 기능 (변수 -> 주소)

	printf("value의 값 %d\n", value); //변수의 값을 그대로 표현
	printf("value의 주소 %p\n", &value); //변수의 주소 표현 시 & 사용
	printf("ptr_value의 값 %d\n", *ptr_value); //포인터 변수의 값 표현을 하기 위해 * 사용
	printf("ptr_value의 주소 %p\n", ptr_value); //포인터는 주소이기 떄문에 그대로 표현

	value = 5;

	printf("value의 값 %d\n", value); //변수의 값을 그대로 표현
	printf("value의 주소 %p\n", &value); //변수의 주소 표현 시 & 사용
	printf("ptr_value의 값 %d\n", *ptr_value); //포인터 변수의 값 표현을 하기 위해 * 사용
	printf("ptr_value의 주소 %p\n", ptr_value); //포인터는 주소이기 떄문에 그대로 표현

	ptr_value = 6;
	
	printf("value의 값 %d\n", value); //변수의 값을 그대로 표현
	printf("value의 주소 %p\n", &value); //변수의 주소 표현 시 & 사용
	printf("ptr_value의 값 %d\n", *ptr_value); //포인터 변수의 값 표현을 하기 위해 * 사용
	printf("ptr_value의 주소 %p\n", ptr_value); //포인터는 주소이기 떄문에 그대로 표현
	
	*ptr_value = 7;
	
	printf("value의 값 %d\n", value); //변수의 값을 그대로 표현
	printf("value의 주소 %p\n", &value); //변수의 주소 표현 시 & 사용
	printf("ptr_value의 값 %d\n", *ptr_value); //포인터 변수의 값 표현을 하기 위해 * 사용
	printf("ptr_value의 주소 %p\n", ptr_value); //포인터는 주소이기 떄문에 그대로 표현

	int** ptr_ptr_value = &ptr_value;
	//pptr_value는 ptr_value 변수의 주소를 가리키고 있습니다.(이중 포인터)

	//2중 포인터 만드는 방법
	//자료형** 포인터명 = &포인터변수;

	//*의 개수가 늘어날 때마다 3중, 4중 포인터..로 늘언게 됨(n중 포인터)

	int *** pptr_ptr_value = &ptr_ptr_value;
	printf("pptr_ptr_value의 값 %d\n", pptr_ptr_value);
	printf("pptr_ptr_value의 값 %p\n", ***pptr_ptr_value);

	//현재 데이터의 관계
	//pptr_value -----> ptr_value -----> value -----> ?

	return 0;
}