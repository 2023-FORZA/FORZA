#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
// 1�б� ���丵 �� ���� ���α׷�
// �ۼ��� : �ֿ��� (GitHub ID : yeonjae02)

typedef struct
{
	char mentor[30]; // ���� �̸�
	char mentee[30]; // ��Ƽ �̸�
} team;

int main()
{
	printf("-------2023-1 FORZA ���丵 �� ����-------\n");
	srand(time(NULL));
	int value, open[16] = { 0, };
	team group[16] = { {"A", "a"}, {"B", "b"},{"C", "c"}, {"D", "d"} ,{"E", "e"}, {"F", "f"} ,{"G", "g"}, {"H", "h"} ,{"I", "i"}, {"J", "j"} ,{"K", "k"}, {"L", "l"} ,{"M", "m"}, {"N", "n"} ,{"O", "o"}, {"P", "p"} };
	for (int i = 0; i < 16; i++)
	{
		getchar(); // �ƹ� Ű�� ������ ���� ������ ����ǵ��� ��. ���޾� �������� �ʱ� ����.
		printf("%d��° ���� �����մϴ�!\n", i + 1);
		while (1)
		{
			value = rand() % 16;
			if (open[value] == 0) // �������� ���� ������ Ȯ��
			{
				open[value] = 1; //���� ������ ���̹Ƿ� open[value]�� 1�� ����
				break;
			}
		}
		printf("���� : %s ��Ƽ : %s\n\n", group[value].mentor, group[value].mentee);
	}

	printf("%d�� %d�б��� ���� ��ȭ�� ������ ģ������ �ð��� ��������~\n", 18, 30);//�ð��� ��Ȳ�� �°� �����Ͻø� �˴ϴ�.
	printf("�׸��� �� ****���丵 �ð�****�� �����ּ���!!!!!!");
	printf("\n\n\n\n\n");
	return 0;
}