#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

double bisection(double(*f)(double), double a, double b);
double coef[4];
double func(double x) {
	return coef[3] * x * x * x + coef[2] * x * x + coef[1] * x + coef[0];
}
#ifndef epsilon
#define epsilon 0.0001
#endif
int main(void) {
	double a, b, c, d,answer;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);
	printf("x=%lf", bisection(func, -200, 200));
}
double bisection(double(*f)(double), double a, double b) {
	double c=0;
	while (b - a > epsilon) {
		if (f(a) * f(b) > 0) {
			printf("적절한범위가아님"); return 1;
		}
		else {
			c = (a + b) / 2;
			if (f(a) * f(c) < 0) {
				b = c;
			}
			else
				a = c;

		}
	}
	return c;
}


/*
int main(void) {
	char name[10];
	char address[100];
	gets_s(name,sizeof(name));
	gets_s(address,sizeof(address)); //gets_s(배열이름,sizeof(배열))
	printf("%s\n", name);
	printf("%s", address);
	return 0;
}*/


/*int values[] = {98,23,99,37,16};
int compare(const void* a, const void* b) {
	return *(int*)b - *(int*)a; //오름차순 앞-뒤 내림차순은 뒤-앞
}

int main() {
	int n;
	qsort(values, 5, sizeof(int), compare); //qsort(배열이름,원소개수, 각 원소 크기,함수)
	for (n = 0; n < 5; n++) {
		printf("%d ", values[n]);
	}
	return 0;
}*/

/*struct character {
	char name[10];
	char type[10];
	int atp;
	int dep;
	int level;
};
void get(struct character genshin[])
{
	for (int i = 0; i < 4; i++) {
		printf("이름:");
		scanf("%s", &genshin[i].name);
		printf("속성:");
		scanf("%s", &genshin[i].type);
		printf("공격력:");
		scanf("%d", &genshin[i].atp
		);
		printf("방어력:");
		scanf("%d", &genshin[i].dep);
		printf("레벨:");
		scanf("%d", &genshin[i].level);
		printf("---------------\n");
	}
}
void change_print(struct character genshin[],int ans1,int ans2)
{
	int scope;
	printf("얼마나 강화할까요?");
	scanf("%d", &scope);
	switch (ans2)
	{
	case 1:
		genshin[ans1 - 1].atp += scope;
		break;
	case 2:
		genshin[ans1 - 1].dep += scope;
		break;
	case 3:
		genshin[ans1 - 1].level += scope;
		break;
	}
	printf("\n\n이름:%s 속성:%s  공격력:%d  방어력:%d 레벨:%d ", genshin[ans1-1].name, genshin[ans1-1].type, genshin[ans1-1].atp, genshin[ans1-1].dep, genshin[ans1-1].level);	
	printf("\n강화 완료! 나선비경에 도전해보세요\n\n");
}
int main(void)
{
	int i,j;
	struct character genshin[4];
	get(genshin);
	printf("육성 캐릭터 선택(순서대로 1,2,3,4) =>");
	scanf("%d", &j);
	printf("공성배 장착:1, 방성배장착:2, 레벨업:3 =>");
	scanf("%d", &i);
	change_print(genshin, j,i);
	return 0;

}*/






/*struct student {
	char name[10];
	int score;
};
struct sumeru {
	struct student character;
};
int main(void)
{
	struct sumeru s1[4] = {
		{ {"알하이탐", 99} },
		{ {"레일라  ", 85} },
		{ {"나히다  ", 100} },
		{ {"콜레이  ", 70} }
	};
	for (int i = 0; i < 4; i++)
		printf("이름: %s 점수: %d\n", s1[i].character.name, s1[i].character.score);
	return 0;
}*/