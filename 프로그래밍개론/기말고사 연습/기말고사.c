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
			printf("�����ѹ������ƴ�"); return 1;
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
	gets_s(address,sizeof(address)); //gets_s(�迭�̸�,sizeof(�迭))
	printf("%s\n", name);
	printf("%s", address);
	return 0;
}*/


/*int values[] = {98,23,99,37,16};
int compare(const void* a, const void* b) {
	return *(int*)b - *(int*)a; //�������� ��-�� ���������� ��-��
}

int main() {
	int n;
	qsort(values, 5, sizeof(int), compare); //qsort(�迭�̸�,���Ұ���, �� ���� ũ��,�Լ�)
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
		printf("�̸�:");
		scanf("%s", &genshin[i].name);
		printf("�Ӽ�:");
		scanf("%s", &genshin[i].type);
		printf("���ݷ�:");
		scanf("%d", &genshin[i].atp
		);
		printf("����:");
		scanf("%d", &genshin[i].dep);
		printf("����:");
		scanf("%d", &genshin[i].level);
		printf("---------------\n");
	}
}
void change_print(struct character genshin[],int ans1,int ans2)
{
	int scope;
	printf("�󸶳� ��ȭ�ұ��?");
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
	printf("\n\n�̸�:%s �Ӽ�:%s  ���ݷ�:%d  ����:%d ����:%d ", genshin[ans1-1].name, genshin[ans1-1].type, genshin[ans1-1].atp, genshin[ans1-1].dep, genshin[ans1-1].level);	
	printf("\n��ȭ �Ϸ�! ������濡 �����غ�����\n\n");
}
int main(void)
{
	int i,j;
	struct character genshin[4];
	get(genshin);
	printf("���� ĳ���� ����(������� 1,2,3,4) =>");
	scanf("%d", &j);
	printf("������ ����:1, �漺������:2, ������:3 =>");
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
		{ {"������Ž", 99} },
		{ {"���϶�  ", 85} },
		{ {"������  ", 100} },
		{ {"�ݷ���  ", 70} }
	};
	for (int i = 0; i < 4; i++)
		printf("�̸�: %s ����: %d\n", s1[i].character.name, s1[i].character.score);
	return 0;
}*/