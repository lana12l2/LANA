#include <stdio.h> //9주차임
#include <stdlib.h>
#include <time.h>
void get_int(int* px, int* py)
{
	printf("2개의 정수를 입력하시오:");
	scanf_s("%d %d", px,py); //정수를 px py 주소에 바로 전달
}
int main(void)
{
	int x, y;
	get_int(&x, &y);
	printf("정수의 합은 %d", x + y); //get_int에서 x,y 위치로 바로 입력받아서 출력 가능한거임
	printf("\n2411849 이빛찬란");
	return 0;
}*/


/*double* get_max(double* A, int size) //주소값을 리턴함. 
{
	double* max=A; //A의 0번째값 주소가 포인터 max에 대입
	for (int i = 1; i < size; i++) //이미 A[0]은 있음
	{
		if (*(A + i) > *max) //크기비교는 원소값
			max = (A + i); //업데이트는 주소값
	}
	return max;
}
int main(void)
{
	int size;
	double A[] = { 1.23,3.14,9.16,100.90 };
	size = sizeof(A) / sizeof(A[0]); //size==10
	printf("A[]=");
	for (int i = 0; i < size; i++)
	{
		printf("%.2lf ", A[i]); //소수점2자리
	}
	double* max = get_max(A, size); 
	printf("\n최댓값은 %.2lf입니다\n",*max); //원소값 출력
	printf("2411849 이빛찬란");
	return 0;
}*/

/*int printReverse(int* A, int size)
{
	int* p = A + size - 1; // !!!!초기 p의 주소 == A[9] 주소
	while (p >= A) { //p 주소가 A[0]의 주소와 같을때까지
		printf("%d ", *p);
		p--;
	}
}
int main(void)
{
	int A[] ={0,1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size;
	size = sizeof(A) / sizeof(A[0]); //size==10
	printf("A[]=");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", *(A+i)); //배열 A의 i번째의 값
	}
	printf("\nA[]=");
	printReverse(A, size);//&안써도됨( A: 배열 첫번째 원소의 주소가 넘어감)
	printf("\n2411849 이빛찬란");
	return 0;
}*/

/*void get_frac(double x, int* pd, double* pf) //입력받은수, 정수부 소수부 포인터
{
	printf("get_frac(%.2lf)이 호출되었습니다.\n", x);
	*pd = (int)x; //정수부 포인터가 가리키는 위치의 값을 저장
	*pf = x - *pd; //소수부 포인터가 가리키는 위치의 값을 저장
}
int main(void)
{
	double A; //입력받을 수
	int i; //정수부 처리 변수
	double f; //소수부 처리 변수
	printf("실수를 입력하시오:");
	scanf("%lf", &A);
	get_frac(A, &i, &f); //A 전달  정수,소수부는 각각의 주소를 전달해야됨(get_frac 파라미터가 포인터라서)
	printf("정수부는 %d입니다.\n", i);
	printf("소수부는 %.2lf입니다.\n", f);
	printf("2411849 이빛찬란");
	return 0;
}*/
/*void getSensorData(double* p)
{
	*p = (double)(rand() % 100);   //포인터로 접근
	p[1] = (double)(rand() % 100); //배열로 접근
	*(p+2) = (double)(rand() % 100);
}
int main(void)
{
	double sensorData[3]; //배열 정의
	srand((unsigned)time(NULL));
	getSensorData(sensorData); //함수에 포인터로 전달
	printf("왼쪽 센서와 장애물과의 거리:%lf\n",sensorData[0]); //여기서 p[0]로 쓰면 안됨
	printf("왼쪽 센서와 장애물과의 거리:%lf\n",sensorData[1]); //getSensorData에서 반환한 값을 출력
	printf("왼쪽 센서와 장애물과의 거리:%lf\n",sensorData[2]); //getSensorData에서 반환한 값을 출력
	printf("2411849 이빛찬란");
	return 0;
}*/

/*void sort_array(int* p, int size) //포인터 p를 사용하여 배열에 직접 접근
{
	for (int j = 0; j < size - 1; j++) //맨 뒤로 가장 큰수 보내기 size-1만큼 반복
	{
		for (int i = 0; i < size - 1; i++) //이웃한 수끼리 비교 후 교환
		{
			if (*(p + i) > *(p + i + 1)) //배열의 i번째 원소와 i+1번째 원소의 값의 크기 비교
			{
				int temp; //서로 교환
				temp = *(p + i);
				*(p + i) = *(p + i + 1);
				*(p + i + 1) = temp;
			}

		}
	}
}
void print_array(int* p, int size) //원소 출력하는함수
{
	for (int i = 0; i < size; i++) {
		printf("%d ", *(p + i)); //배열 p의 i번째 원소 출력을 반복
	}
}
int main(void)
{
	int s[10] = { 1,0,3,2,5,4,7,6,9,8 };  //초기화
	int size = sizeof(s) / sizeof(s[0]); //원소개수 
	printf("정렬 전 배열:\n");
	print_array(s, size); //정렬 전 
	sort_array(s, size); //정렬
	printf("\n정렬 후 배열:\n"); //정렬 후 
	print_array(s, size);
	printf("\n2411849 이빛찬란");
	return 0;
}*/

