#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	srand(time(NULL)); //�ð� ��� ����
	int guess, k; //����,����,+-1 ���� ��������
	k = 1; //while�� �������� 0�ƴϰ� �ʱ�ȭ
	printf("��ǻ�Ͱ� ����� �����ϴ� ���ڸ� �˾Ƹ����� �����Դϴ�.\n�ϳ��� ���ڸ� �����ϼ���.\n��ǻ�Ͱ� ������ ���ں��� ������ ������ 1,������ -1�̶�� �ϼ���.\n��ǻ�Ͱ� ���ڸ� ������ 0�̶�� �ϼ���.\n");
	//printf("������ ����:");//
	//scanf("%d", &answer);
	guess = 50; //���� ����
	while (k != 0)
	{
		printf("���ڰ� %d�ΰ���?", guess); //�ȳ������
		scanf("%d", &k); //����� �Է�
		if (k == 1) //guess<����
			guess = guess + rand() % 11 + 1; //������ �������� ����
		else //guess>����
			guess = guess - rand() % 11 + 1; //������ �������� ����

	}
	printf("\n2411849 �̺�����");
	return 0;
}

	/*int n, m; //��������
	printf("���� ���� �Է�:"); //�ȳ������
	scanf("%d", &n); //�Է¹���
	m = n; //m�� ����
	for (int i = 0; i < n; i++)//�� n�� ��ŭ �ݺ�
	{
		for (int j = 0; j < m - 1; j++) //4��°�ٱ����� ��ĭ ���
			printf(" "); //���
		for (int k = 0; k < 2 * i + 1; k++) //��ĭ �ٷ� ���� * ����̹Ƿ� ���ı���,i �� 0���� �����̹Ƿ� 2i+1�� ����
			printf("*"); //���
		m--; //��ĭ  ����
		printf("\n"); //�ٶ���
	}
	printf("2411849 �̺�����");
	return 0;*/



	/*int a, b, c;//��������
	for (a = 1; a <= 100; a++) //a�� 1���� 100���� �϶� �ݺ�
		for (b = a; b <= 100; b++)//�ߺ��Ǵ°�춧���� (3 4 5 or 4 3 5) �׻� a<b<c�� ������ ����,b�� a���� ������ ŭ
			for (c = b; c <= 100; c++) //c�� b���� ������ ŭ
				if (a * a + b * b == c * c)//�����ϴ°�� ���
					printf("%d %d %d\n", a, b, c); //���
	printf("\n2411849 �̺�����");
	return 0;*/


	/*int i, x, y, sum, answer;
	srand(time(NULL));
	for (i = 0; i < 10; i++) //10�� �ݺ��ϱ� 0<=i<=9
	{
		x = rand() % 10; //���ڸ��� ����
		y = rand() % 10; //���ڸ��� ����
		sum = x + y; //���� ����
		printf("\n%d + %d =_\b", x, y); //����� �Է¾�� ���
		scanf_s("%d", &answer); //����� ��� �Է¹���
		if (sum == answer) //sum==answer
			printf("�¾ҽ��ϴ�.");
		else //sum!=answer
			printf("Ʋ�Ƚ��ϴ�.");
	}
	printf("\n2411849 �̺�����");
	return 0;*/


	/*int year; //�Ⱓ ���� ����
	double total, money, rate; //�Ѿ�,����,���� ��������
	printf("����:"); //�ȳ������
	scanf_s("%lf", &money); //�����Է�
	printf("����(%%):"); //%�ϳ����� ��ٸ��ԵǾ���¾ȵ� �ΰ�����
	scanf_s("%lf", &rate); //�����Է�
	printf("�Ⱓ(��):"); //�ȳ������
	scanf_s("%d", &year); //�Ⱓ�Է�
	printf("==================\n"); printf("���� ������\n"); printf("==================\n"); 
	total = money; //ó�� �Ѿ�==money
	rate /= 100.0; //���� �Ҽ� ���
	for (int i = 0; i < year; i++) //year��ŭ �ݺ�
	{
		total = total * (1 + rate); //�Ѿ� ���
		printf("%2d   %10.1lf\n", i + 1, total); //������ ����, �Ҽ����� ���ڸ�����Ÿ����
	}
	printf("\n2411849 �̺�����");
	return 0;*/


	/*int loop_count; //�ݺ�Ƚ�� ��������
	double sum = 0.0; //���̰� �ʱ�ȭ ��double �� ����
	double y = 4.0; //�ʱ� ���ڰ� ����
	double x = 1.0; //�ʱ� �и� ����
	printf("�ݺ�Ƚ��:"); //�ȳ������
	scanf_s("%d", &loop_count);//�ݺ�Ƚ�� �Է¹ޱ�
	while (loop_count > 0) //�ݺ�Ƚ���� 0�̵Ǵ� ���� �������� �ʰ� Ż��
	{
		sum = sum + y / x; //���� sum�� ������ �м����ϱ� 
		x = x + 2.0; //�и𺯰�
		y = y * (-1.0); //���ں���
		--loop_count; //�ݺ�Ƚ�� ����
	}
	printf("pi=%lf", sum); //���̰� ���
	printf("\n2411849 �̺�����");
	return 0;*/


	/*int num; //��������
	int digit; //�� �ڸ� ���� ������ ���� ����
	printf("������ �Է��Ͻÿ�:"); //�ȳ������
	scanf_s("%d", &num); //�Է¹޾� ����
	do
	{
		digit = num % 10; //�����ڸ� ���� ���
		printf("%d", digit); // ���� ���
		num /= 10; //�� ����

	} while (num!= 0); //���� 0�� �ɶ� ����
	printf("\n2411849 �̺�����");
	return 0;*/


	

	/*int guess, count = 0, answer;
	srand(time(NULL)); //�ð��� �õ���ؼ� ������ ����°�
	answer = rand() % 100 + 1; //1���� 100���̴ϱ� ������(0-99) 1������ߵ� ��������ô� ������¾ȵǰ��ϱ�
	do {
		printf("������ �����Ͻÿ�:"); //�ȳ������
		scanf_s("%d", &guess); //�����Է¹���
		count++; //Ƚ������
		if (answer > guess) //answer>guess
			printf("LOW\n");
		else if //answer<guess
			printf("HIGH\n");
	}
	while (answer != guess); //answer==guess �϶� do-while�� Ż��
	printf("�����մϴ�. "); printf("�õ�Ƚ��=%d", count);//������
	printf("\n2411849 �̺�����");
	return 0;
}*/
