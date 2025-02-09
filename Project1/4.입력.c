#define _CRT_SECURE_NO_WARNINGS
//이 코드를 추가할 경우 visual studio 내에서 scanf를 사용할 수 있습니다.
#include <stdio.h>
//입력(input)
//사용자가 직접 값을 입력하고 그 값을, 특정 위치에 전달합니다.
//일반적으로는 변수를 만들고, 그 변수에 입력한 값을 적용하는 방식으로 사용합니다.
int main()
{
	int number;
	printf("Input the number : ");
	scanf_s("%d", &number);
	//Visual Studio에서 사용하느 경우라면 scanf_s를 통해 오류를 막을 수 있습니다.
	printf("number : %d\n", number);

	//getchar()
	//키보드로부터 하나의 문자를 읽어내는 함수
	//이 기능은 버퍼를 비우는 용도로도 사용됩니다.
	// 입력 버퍼(buffer) : C언어에서 입력을 진행할 경우 바로 값을 넘기는게 아니라
	// 임시로 데이터를 저장하는 별도의 공간에 값을 넣고 전달하는 방식입니다.
	// 문자를 다 받기 때문에 enter같은 기능도 값으로 넘기게 됩니다.
	
	//put char(문자형 데이터)
	//전달받은 문자 하나를 화면에 출력하는 기능입니다.

	getchar(); //키를 하나 받겠습니다(이걸로 남아있는 enter를 처리합니다.)
	char key;
	printf("키를 하나 입력해주세요 >> ");
	key = getchar();
	putchar(key);

	//gets(), puts()
	//문자열에 대한 입력과 출력을 진행할 때 편하게 사용할 수 있습니다.
	//문자열(문장)이랑 char 형태의 데이터를 묶음으로 표현한 것을 의미합니다.
	
	getchar(); //위에서 입력한 key 다음 동작인 enter키에 대한 값을 받아줍니다.
	
	//문자열 만드는 방법
	//char 변수명[문자의 개수]
	char word[20];
	printf("단어를 입력해주세요 >> : ");
	gets(word); //문자열 입력
	puts(word); //전달할 문장 출력
	
	//주의사항 : C언어에서 한글을 입력하는 경우 한글 한 단어에 2칸을 소모합니다.
	//			현재 word는 10개의 단어를 사용할 수 있습니다.
	//			단 입력을 진행할 경우 문자의 개수보다 1개정도 적게 작성합니다.
	//			따라서 영단어는 9글자까지, 한글은 4글자까지 가능

	//getchar();

	char item[10];
	printf("아이템의 이름을 입력해주세요 >> ");
	scanf("%s", item); 
	//문자열을 받을 경우에는 item 앞에 &를 붙이지 않아도 됩니다.
	//%s는 문자열을 받는 지정자입니다.
	printf("아이템의 이름 : %s입니다.\n", item);
	return 0;
}