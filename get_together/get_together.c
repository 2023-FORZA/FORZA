#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
// 회식 팀배정 프로그램
// 30명을 8그룹으로 나눔. 4*6, 3*2
// 작성자 : 최연재 (GitHub ID : yeonjae02)

typedef struct
{
	char name[20];
} str;

int main()
{
	int ismento[14] = { 0, }, ismenti[16] = { 0, }, valueMento, valueMenti;
	//str 배열에 이름 넣으시면 됩니다. 상황에 맞게 숫자 등을 변경하셔서 사용하시면 됩니다.
	str mento[14] = { {"1"},{"2"},{"3"},{"4"},{"5"},{"6"},{"7"},{"8"},{"9"},{"10"},{"11"},{"12"},{"13"},{"14"}};
	str menti[16] = { {"1"},{"2"},{"3"},{"4"},{"5"},{"6"},{"7"},{"8"},{"9"},{"10"},{"11"},{"12"},{"13"},{"14"},{"15"},{"16"}};
	srand(time(NULL));
	printf("------회식 팀 배정 프로그램------\n");
	printf("현재 30명이므로 4명씩 6그룹, 3명씩 2그룹으로 배정합니다.\n");

	printf("3명씩 배정되는 그룹부터 공개합니다.\n\n");
	for (int i = 0; i < 2; i++)
	{
		getchar();
		printf("%d팀 공개\n", i+1);
		while (1)
		{
			valueMento = rand() % 14;

			if (ismento[valueMento] == 0)
			{
				ismento[valueMento] = 1;
				break;
			}
		}
		printf("2학년 : %s\n", mento[valueMento]);

		for (int j = 0; j < 2; j++)
		{
			while (1)
			{
				valueMenti = rand() % 16;
				if (ismenti[valueMenti] == 0)
				{
					ismenti[valueMenti] = 1;
					break;
				}
			}
			printf("1학년 : %s\n", menti[valueMenti]);
		}
	}

	printf("\n\n\n4명씩 배정되는 그룹을 공개합니다.\n\n");
	for (int i = 0; i < 6; i++)
	{
		getchar();
		printf("%d팀 공개\n", i + 1);
		for (int j = 0; j < 2; j++)
		{
			while (1)
			{
				valueMento = rand() % 14;
				if (ismento[valueMento] == 0)
				{
					ismento[valueMento] = 1;
					break;
				}
			}
			printf("2학년 : %s\n", mento[valueMento]);
		}
		for (int j = 0; j < 2; j++)
		{
			while (1)
			{
				valueMenti = rand() % 16;
				if (ismenti[valueMenti] == 0)
				{
					ismenti[valueMenti] = 1;
					break;
				}
			}
			printf("1학년 : %s\n", menti[valueMenti]);
		}
	}

	srand(time(NULL));

	return 0;
}