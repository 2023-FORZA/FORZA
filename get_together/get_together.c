#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
// ȸ�� ������ ���α׷�
// 30���� 8�׷����� ����. 4*6, 3*2
// �ۼ��� : �ֿ��� (GitHub ID : yeonjae02)

typedef struct
{
	char name[20];
} str;

int main()
{
	int ismento[14] = { 0, }, ismenti[16] = { 0, }, valueMento, valueMenti;
	//str �迭�� �̸� �����ø� �˴ϴ�. ��Ȳ�� �°� ���� ���� �����ϼż� ����Ͻø� �˴ϴ�.
	str mento[14] = { {"1"},{"2"},{"3"},{"4"},{"5"},{"6"},{"7"},{"8"},{"9"},{"10"},{"11"},{"12"},{"13"},{"14"}};
	str menti[16] = { {"1"},{"2"},{"3"},{"4"},{"5"},{"6"},{"7"},{"8"},{"9"},{"10"},{"11"},{"12"},{"13"},{"14"},{"15"},{"16"}};
	srand(time(NULL));
	printf("------ȸ�� �� ���� ���α׷�------\n");
	printf("���� 30���̹Ƿ� 4�� 6�׷�, 3�� 2�׷����� �����մϴ�.\n");

	printf("3�� �����Ǵ� �׷���� �����մϴ�.\n\n");
	for (int i = 0; i < 2; i++)
	{
		getchar();
		printf("%d�� ����\n", i+1);
		while (1)
		{
			valueMento = rand() % 14;

			if (ismento[valueMento] == 0)
			{
				ismento[valueMento] = 1;
				break;
			}
		}
		printf("2�г� : %s\n", mento[valueMento]);

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
			printf("1�г� : %s\n", menti[valueMenti]);
		}
	}

	printf("\n\n\n4�� �����Ǵ� �׷��� �����մϴ�.\n\n");
	for (int i = 0; i < 6; i++)
	{
		getchar();
		printf("%d�� ����\n", i + 1);
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
			printf("2�г� : %s\n", mento[valueMento]);
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
			printf("1�г� : %s\n", menti[valueMenti]);
		}
	}

	srand(time(NULL));

	return 0;
}