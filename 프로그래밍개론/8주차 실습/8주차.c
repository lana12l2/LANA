#include <stdio.h> //9������
#include <stdlib.h>
#include <time.h>
void get_int(int* px, int* py)
{
	printf("2���� ������ �Է��Ͻÿ�:");
	scanf_s("%d %d", px,py); //������ px py �ּҿ� �ٷ� ����
}
int main(void)
{
	int x, y;
	get_int(&x, &y);
	printf("������ ���� %d", x + y); //get_int���� x,y ��ġ�� �ٷ� �Է¹޾Ƽ� ��� �����Ѱ���
	printf("\n2411849 �̺�����");
	return 0;
}*/


/*double* get_max(double* A, int size) //�ּҰ��� ������. 
{
	double* max=A; //A�� 0��°�� �ּҰ� ������ max�� ����
	for (int i = 1; i < size; i++) //�̹� A[0]�� ����
	{
		if (*(A + i) > *max) //ũ��񱳴� ���Ұ�
			max = (A + i); //������Ʈ�� �ּҰ�
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
		printf("%.2lf ", A[i]); //�Ҽ���2�ڸ�
	}
	double* max = get_max(A, size); 
	printf("\n�ִ��� %.2lf�Դϴ�\n",*max); //���Ұ� ���
	printf("2411849 �̺�����");
	return 0;
}*/

/*int printReverse(int* A, int size)
{
	int* p = A + size - 1; // !!!!�ʱ� p�� �ּ� == A[9] �ּ�
	while (p >= A) { //p �ּҰ� A[0]�� �ּҿ� ����������
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
		printf("%d ", *(A+i)); //�迭 A�� i��°�� ��
	}
	printf("\nA[]=");
	printReverse(A, size);//&�Ƚᵵ��( A: �迭 ù��° ������ �ּҰ� �Ѿ)
	printf("\n2411849 �̺�����");
	return 0;
}*/

/*void get_frac(double x, int* pd, double* pf) //�Է¹�����, ������ �Ҽ��� ������
{
	printf("get_frac(%.2lf)�� ȣ��Ǿ����ϴ�.\n", x);
	*pd = (int)x; //������ �����Ͱ� ����Ű�� ��ġ�� ���� ����
	*pf = x - *pd; //�Ҽ��� �����Ͱ� ����Ű�� ��ġ�� ���� ����
}
int main(void)
{
	double A; //�Է¹��� ��
	int i; //������ ó�� ����
	double f; //�Ҽ��� ó�� ����
	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &A);
	get_frac(A, &i, &f); //A ����  ����,�Ҽ��δ� ������ �ּҸ� �����ؾߵ�(get_frac �Ķ���Ͱ� �����Ͷ�)
	printf("�����δ� %d�Դϴ�.\n", i);
	printf("�Ҽ��δ� %.2lf�Դϴ�.\n", f);
	printf("2411849 �̺�����");
	return 0;
}*/
/*void getSensorData(double* p)
{
	*p = (double)(rand() % 100);   //�����ͷ� ����
	p[1] = (double)(rand() % 100); //�迭�� ����
	*(p+2) = (double)(rand() % 100);
}
int main(void)
{
	double sensorData[3]; //�迭 ����
	srand((unsigned)time(NULL));
	getSensorData(sensorData); //�Լ��� �����ͷ� ����
	printf("���� ������ ��ֹ����� �Ÿ�:%lf\n",sensorData[0]); //���⼭ p[0]�� ���� �ȵ�
	printf("���� ������ ��ֹ����� �Ÿ�:%lf\n",sensorData[1]); //getSensorData���� ��ȯ�� ���� ���
	printf("���� ������ ��ֹ����� �Ÿ�:%lf\n",sensorData[2]); //getSensorData���� ��ȯ�� ���� ���
	printf("2411849 �̺�����");
	return 0;
}*/

/*void sort_array(int* p, int size) //������ p�� ����Ͽ� �迭�� ���� ����
{
	for (int j = 0; j < size - 1; j++) //�� �ڷ� ���� ū�� ������ size-1��ŭ �ݺ�
	{
		for (int i = 0; i < size - 1; i++) //�̿��� ������ �� �� ��ȯ
		{
			if (*(p + i) > *(p + i + 1)) //�迭�� i��° ���ҿ� i+1��° ������ ���� ũ�� ��
			{
				int temp; //���� ��ȯ
				temp = *(p + i);
				*(p + i) = *(p + i + 1);
				*(p + i + 1) = temp;
			}

		}
	}
}
void print_array(int* p, int size) //���� ����ϴ��Լ�
{
	for (int i = 0; i < size; i++) {
		printf("%d ", *(p + i)); //�迭 p�� i��° ���� ����� �ݺ�
	}
}
int main(void)
{
	int s[10] = { 1,0,3,2,5,4,7,6,9,8 };  //�ʱ�ȭ
	int size = sizeof(s) / sizeof(s[0]); //���Ұ��� 
	printf("���� �� �迭:\n");
	print_array(s, size); //���� �� 
	sort_array(s, size); //����
	printf("\n���� �� �迭:\n"); //���� �� 
	print_array(s, size);
	printf("\n2411849 �̺�����");
	return 0;
}*/

