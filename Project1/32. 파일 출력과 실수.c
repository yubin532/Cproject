#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h> //system

//파일을 이용해 세이브 /로드 기능을 보일 수 있는 프로그램을 구현하세요.
//세이브 : 현재의 작업 상태를 파일에 저장하는 것을 의미합니다.
//로드 : 파일에 있는 데이터를 불러오는 것을 의미합니다.

//ex) 1. 레벨 업 기능을 구현해서 플레이어의 레벨이 1 상승했습니다.
//    2. 현재 플레이어의 능력치는 레벨 2힘 5 면 5 지 5 행 5입니다.
//    3. 세이브 기능을 사용할 경우 해당 정보가 저장됩니다.
//    4. 새로 하기 기능을 누를 경우 플레이어의 능력치가 restart 됩니다.
//    5. 이 상태에서 로드를 누를 경우 정보가 다시 플레이어의 능력치로 실행됩니다.

int main()
{
	FILE* file = NULL;

	fp = fopen("user_info.txt", "w");
	int choice;
	
	if (fp == NULL)
	{
		printf("file open failed\n");
	}
	printf("레벨\t힘\t면\t지\t행\n");
	for int i = 0; i < 5; i++)
	{
		printf("%d번째 유저의 정보를 입력해주세요 (레벨, 힘, 면, 지, 행) : ", i + 1);
		
		fscanf(fp, "%d %d %d %d %d\n", &level, &str, &dex, &int, &luk);
		printf("%2d\t%5d\t%5d\t%5d\t%5d\n", level, str, dex, int, luk);
	}

	//while(1) 안에 코드를작업하면 계속 반복됩니다.
	while (1)
	{
		printf("1. 기능 선택");
			scanf("%d", &choice); //입력을 진행할 경우, 입력 전까지는 대기 상태가 됩니다.
		system("cls"); //해당 명령어를 작성하면 콘솔 창이 지워집니다.

		if (choice == 0)
		{
			exit(0); //프로그램을 종료하는 코드
		}
		return 0;
}