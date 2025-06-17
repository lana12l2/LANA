#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define name_len 10
#define WIDTH 10
#define HEIGHT 10

void print_image(int list1[][WIDTH], int height, int width) //이미지 출력 함수
{
	int i,j; //각각 행,열
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			printf("%5d", list1[i][j]);
		}
		printf("\n");
	}
}
void reverse_image(int list2[][WIDTH], int height, int width) // 반전 함수
{
	int i, j;//행,열
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			list2[i][j] = 255 - list2[i][j]; //모든 원소들을 반전
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
	printf("원 영상\n");
	print_image(image, HEIGHT,WIDTH);
	printf("\n처리된 영상\n");
	reverse_image(image, HEIGHT,WIDTH);
	print_image(image, HEIGHT,WIDTH);
	printf("2411849 이빛찬란");
	return 0;
}


/*void sort_strings(char* list[], int size) //포인터 배열을 매개변수로 사용
{
	int i, j, least;
	char* temp; //특정 문자열을 가리키는 포인터
	for (i = 0; i < size-1; i++) { //포인터 배열의 원소
		least = i; //임의 지정
		for (j = i+1; j < size; j++) { // 각 원소 글자 판별(뒷 글자도 비교하기 위해)
			if (strcmp(list[j], list[least]) < 0) //list[j]가 list[least]보다 앞에있으면
				least = j; //업데이트
		}
		temp = list[i]; //list[i] list[least]교환
		list[i] = list[least];
		list[least] = temp;
	}
}
int main(void)
{
	char *arr[3] = { "mycopy","src","dst" }; //arr의 원소는 각 문자열을 가리키는 포인터인 배열 이고 각 단어도 배열임 (래그드로 초기화)
	sort_strings(arr, 3);
	for (int i = 0; i < 3; i++) {
		printf("%s\n", arr[i]);
	}
	printf("2411849 이빛찬란");
	return 0;
}*/


/*void set_max_ptr(int m[], int size, int** pmax2) //포인터 pmax의 주소를 받아왔기때문에 **pmax 사용 
{
	int max,i;
	max = m[0]; //최댓값 임의로 설정
	for (i = 1; i < size; i++) {
		if (m[i] > max) {
			max = m[i]; //최댓값 발견
			(*pmax2) = &m[i]; //pmax의 주소(즉 *pmax2)에 m[i]의 주소를 넣음
		}
	}
}
int main(void)
{
	int m[6] = { 5,6,1,3,7,9 }; //초기화
	int* pmax; //int 형 포인터 pmax 얘가 최댓값 가리킴
	set_max_ptr(m, 6, &pmax);//포인터 pmax의 주솟값을 전달
	printf("배열 5 6 1 3 7 9 중에서 가장 큰 값은 %d\n", *pmax); //pmax의 주소가 m[i]의 주소로 바뀌었으므로 *pmax사용 가능
	printf("2411849 이빛찬란");
	return 0;
}*/


/*int get_average(int s[], int size) //2차원 배열에서 평균 구하는 함수
{
	int i,average=0;
	for (i = 0; i < size; i++) {
		average += s[i]; //점수들의합
	}
	average /= size; //평균구하기
	return average;
}
int main(void)
{
	int score[3][3] = { {100,30,67},{89,50,12},{19,60,90} }; //2차원 배열(학생123,국 영 수)
	for (int i = 0; i < 3; i++)
	{
		printf("%d번째 학생의 평균값=%d", i + 1, get_average(score[i], 3));//score배열 중 특정 학생의 점수 배열이 전달
		printf("\n");
	}
	printf("2411849 이빛찬란");
	return 0;
}*/



/*struct student { //구조체 정의
	int number;
	char name[name_len]; //이름 배열
	double score;
};

int compare(const void* a, const void* b) { //const void* 인 포인터 a,b가 매개변수
	if (((struct student*)a)->score > ((struct student*)b)->score) //내림차순
		return -1;
	else if (((struct student*)a)->score < ((struct student*)b)->score) //오름차순
		return 1;
	else
		return 0; //같을때
}
int main(void)
{
	srand(time(NULL));
	struct student s[10]; //struct student 형 배열 선언
	int i,j;
	for (i = 0; i < 10; i++) { //학생수만큼 반복
		s[i].number = i + 1;//학번부여
		for (j = 0; j < name_len; j++) //학생마다 이름배열 부여
		{
			s[i].name[j] = 'A' + rand() % 26; //랜덤한 대문자 알파벳 조합
		}
		s[i].name[10] = 0; //이름 문자열 끝난것을 알림(null)
		s[i].score = rand() % 100; //랜덤한 점수
	}
	printf("정렬되기 전의 학생정보:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d %.2lf %s\n", s[i].number, s[i].score, s[i].name);
	}
	qsort(s, 10, sizeof(struct student), compare); //a가작을 때 교환(내림차순) 절댓값은 관계없고 양/음 판별만 하면됨
	printf("\n성적으로 정렬된 결과:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d %.2lf %s\n", s[i].number, s[i].score, s[i].name);
	}
	printf("2411849 이빛찬란");
	return 0;
}*/

/*void array_copy(int src[3][3], int dst[3][3])
{
	int* p = src; //&src[0][0]과 동일
	int* end = &src[2][2];
	int* q;
	q = dst; //q는dst의 시작주소를 나타내는 포인터
	while (p <= end) //src가 끝날때까지 
	{
		*q = *p; //주소ㄹ이용하여 값 붙여넣기
		q++; //dst다음자리 주소
		p++; //src다음 자리 주소
	}
}
void array_print(int a[3][3]) //배열 출력함수
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
	int s2[3][3]; //복사본 변수
	int s1[3][3] = { {100,30,67},{89,50,12},{19,60,90} }; //초기화
	printf("<원본 2차원 배열>\n");
	array_print(s1);
	array_copy(s1, s2);
	printf("<복사본 2차원 배열>\n");
	array_print(s2);
	printf("2411849 이빛찬란");
	return 0;
}*/


