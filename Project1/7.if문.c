#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//if문 사용 방법
//if(조건식)
//{
//조건식이 만족할 때 실행할 명령문;
//}

//if - else문
//if(조건식)
//{
// 조건식이 만족할 떄 실행할 명령문;
//}
//else
//{
//조건식이 만족하지 않았을 경우 실행할 명령문;
//}

//if - else-if문
//if(조건식)
//{
// 조건식이 만족할 떄 실행할 명령문;
//}
//else-if(조건식2)
//{
//위의 조건식이 만족하지 않고, 조건식2가 만족하고 있는 경우 실행할 명령문;
//}

int main()
{
	int number1, number2;

	printf("두 개의 정수를 입력해주세요.(단, 큰 수를 먼저 입력합니다.) >> ");
	scanf("%d %d", &number1, &number2);

	if (number1 > number2)
	{
		printf("두 수의 곱은 %d입니다.\n", number1 * number2);
	}
	else
	{
		printf("number1이 number2보다 더 큰 값이어야 합니다.\n");
	}

	//0부터 100점 사이의 점수를 하나 입력받습니다.
	//점수가 60점 이상일 경우 "합격"을 화면에 출력합니다.
	//점수가 60점 미만일 경우라면 "불합격"을 출력하도록 프로그램 코드를 구현하세요.
	//점수가 해당 범위의 값이 아닐 경우 "잘못된 입력입니다."를 화면에 출력합니다.


		int score;

		printf("점수를 입력해주세요.(단, 0부터 100 사이로 입력합니다.) >> ");
		scanf("%d", &score);

		if (score >= 60)
		{
			printf("합격\n");
		}
		else if (score < 60)
		{
			printf("불합격\n");
		}
		
		
		//일반적인 풀이
		
		//int score;

		//printf("점수를 입력해주세요.(단, 0부터 100 사이로 입력합니다.) >> ");
		//scanf("%d", &score);

		//if ( 0 < score)
		//{
			//prinft("잘못된 입력입니다.\n");
		//}

		//else if (score > 100)
		//{
			//printf("잘못된 입력입니다.\n");
		//}
		if (score < 0 || score > 100) //A OR B 조건 A 또는 조건 B가 만족할 경우 실행
		{
			printf("잘못된 입력입니다.\n");
		}

		else if (score >= 60)
		{
			printf("합격\n");
		}
		else if (score < 60)
		{
			printf("불합격\n");
		}
	return 0;
}
	//조건식 2개 이상 사용하는 방법
	
	//A AND B 비트연산 기호 &을 2번 작성
	//ex) score >+ 0 && score <= 100
	//점수를 0 이상 100 이하인 조건

	//A OR B 비트연산 기호 |을 2번 작성
	//ex) score < 0 || score > 100
	//점수가 0 미만이거나 100 큰 조건
