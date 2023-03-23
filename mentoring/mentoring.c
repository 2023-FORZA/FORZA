#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
// 1학기 멘토링 팀 공개 프로그램
// 작성자 : 최연재 (GitHub ID : yeonjae02)

typedef struct
{
	char mentor[30]; // 멘토 이름
	char mentee[30]; // 멘티 이름
} team;

int main()
{
	printf("-------2023-1 FORZA 멘토링 팀 공개-------\n");
	srand(time(NULL));
	int value, open[16] = { 0, };
	team group[16] = { {"A", "a"}, {"B", "b"},{"C", "c"}, {"D", "d"} ,{"E", "e"}, {"F", "f"} ,{"G", "g"}, {"H", "h"} ,{"I", "i"}, {"J", "j"} ,{"K", "k"}, {"L", "l"} ,{"M", "m"}, {"N", "n"} ,{"O", "o"}, {"P", "p"} };
	for (int i = 0; i < 16; i++)
	{
		getchar(); // 아무 키나 눌러야 다음 과정이 진행되도록 함. 연달아 공개하지 않기 위함.
		printf("%d번째 팀을 공개합니다!\n", i + 1);
		while (1)
		{
			value = rand() % 16;
			if (open[value] == 0) // 공개되지 않은 팀인지 확인
			{
				open[value] = 1; //이제 공개할 것이므로 open[value]를 1로 설정
				break;
			}
		}
		printf("멘토 : %s 멘티 : %s\n\n", group[value].mentor, group[value].mentee);
	}

	printf("%d시 %d분까지 서로 대화를 나누며 친해지는 시간을 가지세요~\n", 18, 30);//시간은 상황에 맞게 수정하시면 됩니다.
	printf("그리고 꼭 ****멘토링 시간****을 정해주세요!!!!!!");
	printf("\n\n\n\n\n");
	return 0;
}