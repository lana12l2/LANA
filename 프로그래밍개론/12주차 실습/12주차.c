#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define name_len 10
#define WIDTH 10
#define HEIGHT 10

void print_image(int list1[][WIDTH], int height, int width) //�̹��� ��� �Լ�
{
	int i,j; //���� ��,��
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			printf("%5d", list1[i][j]);
		}
		printf("\n");
	}
}
void reverse_image(int list2[][WIDTH], int height, int width) // ���� �Լ�
{
	int i, j;//��,��
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			list2[i][j] = 255 - list2[i][j]; //��� ���ҵ��� ����
		}
	}
}
int main(void)
{
	int image[HEIGHT][WIDTH] = {
		{0,0,0,0,255,0,0,0,0,0},
		{0,0,0,255,255,0,0,0,0,0},
		{0,0,255,0,255,0,0,0,0,0},
		{0,0,0,0,255,0,0,0,0,0},
		{0,0,0,0,255,0,0,0,0,0},
		{0,0,0,0,255,0,0,0,0,0},
		{0,0,0,0,255,0,0,0,0,0},
		{0,0,0,0,255,0,0,0,0,0},
		{0,0,0,0,255,0,0,0,0,0},
		{0,0,255,255,255,255,255,0,0,0}
	};
	printf("�� ����\n");
	print_image(image, HEIGHT,WIDTH);
	printf("\nó���� ����\n");
	reverse_image(image, HEIGHT,WIDTH);
	print_image(image, HEIGHT,WIDTH);
	printf("2411849 �̺�����");
	return 0;
}


/*void sort_strings(char* list[], int size) //������ �迭�� �Ű������� ���
{
	int i, j, least;
	char* temp; //Ư�� ���ڿ��� ����Ű�� ������
	for (i = 0; i < size-1; i++) { //������ �迭�� ����
		least = i; //���� ����
		for (j = i+1; j < size; j++) { // �� ���� ���� �Ǻ�(�� ���ڵ� ���ϱ� ����)
			if (strcmp(list[j], list[least]) < 0) //list[j]�� list[least]���� �տ�������
				least = j; //������Ʈ
		}
		temp = list[i]; //list[i] list[least]��ȯ
		list[i] = list[least];
		list[least] = temp;
	}
}
int main(void)
{
	char *arr[3] = { "mycopy","src","dst" }; //arr�� ���Ҵ� �� ���ڿ��� ����Ű�� �������� �迭 �̰� �� �ܾ �迭�� (���׵�� �ʱ�ȭ)
	sort_strings(arr, 3);
	for (int i = 0; i < 3; i++) {
		printf("%s\n", arr[i]);
	}
	printf("2411849 �̺�����");
	return 0;
}*/


/*void set_max_ptr(int m[], int size, int** pmax2) //������ pmax�� �ּҸ� �޾ƿԱ⶧���� **pmax ��� 
{
	int max,i;
	max = m[0]; //�ִ� ���Ƿ� ����
	for (i = 1; i < size; i++) {
		if (m[i] > max) {
			max = m[i]; //�ִ� �߰�
			(*pmax2) = &m[i]; //pmax�� �ּ�(�� *pmax2)�� m[i]�� �ּҸ� ����
		}
	}
}
int main(void)
{
	int m[6] = { 5,6,1,3,7,9 }; //�ʱ�ȭ
	int* pmax; //int �� ������ pmax �갡 �ִ� ����Ŵ
	set_max_ptr(m, 6, &pmax);//������ pmax�� �ּڰ��� ����
	printf("�迭 5 6 1 3 7 9 �߿��� ���� ū ���� %d\n", *pmax); //pmax�� �ּҰ� m[i]�� �ּҷ� �ٲ�����Ƿ� *pmax��� ����
	printf("2411849 �̺�����");
	return 0;
}*/


/*int get_average(int s[], int size) //2���� �迭���� ��� ���ϴ� �Լ�
{
	int i,average=0;
	for (i = 0; i < size; i++) {
		average += s[i]; //����������
	}
	average /= size; //��ձ��ϱ�
	return average;
}
int main(void)
{
	int score[3][3] = { {100,30,67},{89,50,12},{19,60,90} }; //2���� �迭(�л�123,�� �� ��)
	for (int i = 0; i < 3; i++)
	{
		printf("%d��° �л��� ��հ�=%d", i + 1, get_average(score[i], 3));//score�迭 �� Ư�� �л��� ���� �迭�� ����
		printf("\n");
	}
	printf("2411849 �̺�����");
	return 0;
}*/



/*struct student { //����ü ����
	int number;
	char name[name_len]; //�̸� �迭
	double score;
};

int compare(const void* a, const void* b) { //const void* �� ������ a,b�� �Ű�����
	if (((struct student*)a)->score > ((struct student*)b)->score) //��������
		return -1;
	else if (((struct student*)a)->score < ((struct student*)b)->score) //��������
		return 1;
	else
		return 0; //������
}
int main(void)
{
	srand(time(NULL));
	struct student s[10]; //struct student �� �迭 ����
	int i,j;
	for (i = 0; i < 10; i++) { //�л�����ŭ �ݺ�
		s[i].number = i + 1;//�й��ο�
		for (j = 0; j < name_len; j++) //�л����� �̸��迭 �ο�
		{
			s[i].name[j] = 'A' + rand() % 26; //������ �빮�� ���ĺ� ����
		}
		s[i].name[10] = 0; //�̸� ���ڿ� �������� �˸�(null)
		s[i].score = rand() % 100; //������ ����
	}
	printf("���ĵǱ� ���� �л�����:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d %.2lf %s\n", s[i].number, s[i].score, s[i].name);
	}
	qsort(s, 10, sizeof(struct student), compare); //a������ �� ��ȯ(��������) ������ ������� ��/�� �Ǻ��� �ϸ��
	printf("\n�������� ���ĵ� ���:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d %.2lf %s\n", s[i].number, s[i].score, s[i].name);
	}
	printf("2411849 �̺�����");
	return 0;
}*/

/*void array_copy(int src[3][3], int dst[3][3])
{
	int* p = src; //&src[0][0]�� ����
	int* end = &src[2][2];
	int* q;
	q = dst; //q��dst�� �����ּҸ� ��Ÿ���� ������
	while (p <= end) //src�� ���������� 
	{
		*q = *p; //�ּҤ��̿��Ͽ� �� �ٿ��ֱ�
		q++; //dst�����ڸ� �ּ�
		p++; //src���� �ڸ� �ּ�
	}
}
void array_print(int a[3][3]) //�迭 ����Լ�
{
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
}
int main(void)
{
	int s2[3][3]; //���纻 ����
	int s1[3][3] = { {100,30,67},{89,50,12},{19,60,90} }; //�ʱ�ȭ
	printf("<���� 2���� �迭>\n");
	array_print(s1);
	array_copy(s1, s2);
	printf("<���纻 2���� �迭>\n");
	array_print(s2);
	printf("2411849 �̺�����");
	return 0;
}*/


