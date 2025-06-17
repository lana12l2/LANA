#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <math.h>
int is_prime(int num)//�Ҽ��Ǻ��Լ�
{
	int i;
	if (num <= 1) //1�� �Ҽ��ƴϹǷ� 0��ȯ
		return 0;
	for (i = 2; i < num; i++) //num�������� ���� ���ִ� ���� �Ҽ��ƴ�.0��ȯ
	{
		if (num % i == 0)
			return 0;
	}
	return 1; //�Ҽ��� 1��ȯ
}

int main(void)
{
	int num, i;
	printf("���� ������ �Է��Ͻÿ�:"); //�ȳ������
	scanf("%d", &num);
	for (i = 2; i <= num; i++) //i ������Ű�� num���� �ݺ�
	{
		if (is_prime(i) && is_prime(num - i)) //i�� num-i�� ��� ���϶���
			printf("%d = %d + %d\n", num, i, num - i); //���
	}
	printf("2411849 �̺�����");
	return 0;
}

/*int randint() //���� �� �����Լ�
{
	return rand() % 80 + 10; //10~90 ��ȯ
}

int main(void)
{
	int n;
	printf("�������Է��Ͻÿ�:");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) //n���� ���� ����
		printf("%d ", randint()); //���
	printf("\n2411849 �̺�����");
	return 0;
}*/

/*int menu(void) //�޴����
{
	int n;
	printf("1.���丮��\n2.����\n3.�α�(base 10)\n");
	printf("4.������\n5.����(nPr)\n6.����(nCr)\n");
	printf("7.����\n");
	printf("�������ּ���:");
	scanf_s("%d", &n);
	return n;
}

void factorial() //���丮��
{
	long n,i;
	long result = 1; //���̹Ƿ� 0�ȵ�
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%ld", &n);
	for (i = 1; i <=n; i++) //1����n������ ��
		result = result * i;
	printf("���=%d\n\n", result); //���

}

void sine() //sin�Լ�
{
	double a, result;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%lf", &a);
	result = sin(a); //��� �� ������ ����
	printf("���=%lf\n\n", result); //���
}

void logBase10() //���α�
{
	double a, result;
	printf("�Ǽ����� �Է��Ͻÿ�:");
	scanf_s("%lf", &a);
	if (a < 0.0) //�α��� ������ ���� ����ó��
		printf("����\n");
	else
	{
		result = log10(a); //��� �� ��������
		printf("���=%lf\n\n", result); //���
	}
}

int main(void)
{
	while (1)
	{
		switch (menu())  //�Լ��� ��ȯ���� ������ ��
		{
		case 1:
			factorial();
			break;
		case 2:
			sine();
			break;
		case 3:
			logBase10();
			break;
		case 7:
			printf("�����մϴ�.\n");
			printf("2411849 �̺�����");
			return 0;
		default:
			printf("�߸��� �����Դϴ�.\n");
			break;
		}
	}*/

/*int main(void)
{
	unsigned long start, end; //�ð� ���������Ƿ� unsigned
	start = time(NULL); //���۽ð�
	printf("10�ʰ� �Ǹ� �ƹ� Ű�� ��������\n");
	while (1) //���ѷ���
	{
		if (getchar()) //�� �޴� ��� break�ǵ��� ��
			break;
	}
	printf("����Ǿ����ϴ�.\n");
	end = time(NULL); //�����ð�
	printf("����� �ð��� %d���Դϴ�.\n",end-start); //������
	return 0;
}*/

/*void menu(void) //�޴�����Լ�
{
	printf("=====================================\n");
	printf(" 'c' �����µ����� ȭ���µ��� ��ȯ\n");
	printf(" 'f' ȭ���µ����� �����µ��� ��ȯ\n");
	printf(" 'q' ����\n");
	printf("=====================================\n");
}

double C2F(double c_temp) //�������� ȭ��
{
	return 9.0 / 5.0 * c_temp + 32;
}

double F2C(double f_temp) //ȭ������ ����
{
	return (f_temp - 32.0) * 5.0 / 9.0;
}
int main(void) 
{
	char choice; //�޴� �� ĳ������ ������ ����
	double temp; //�µ�����
	while (1) {
		menu();
		printf("�޴����� �����ϼ���:");
		choice = getchar(); //�޴� �Է¹޾� choice�� ����
		if (choice == 'q') //����
			break;
		else if (choice == 'c') //c2f
		{
			printf("�����µ�:");
			scanf_s("%lf", &temp);
			printf("ȭ���µ�: %lf \n\n", C2F(temp));
		}
		else if (choice == 'f') //f2c
		{
			printf("ȭ���µ�:");
			scanf_s("%lf", &temp);
			printf("�����µ�: %lf \n\n", F2C(temp));
		}
		choice = getchar(); //����Ű ���� �ذ�
	}
	printf("2411849 �̺�����");
	return 0;
}

/*int even(int n)
{
	return (n % 2 == 0) ? 1 : 0; //¦���̸� 1 �ƴϸ� 0 ��ȯ
}

int absolute(int n) //���� �޾Ƽ� ���
{
	return (n > 0) ? n : -n;
}

int sign(int n) //��ȣ���
{
	return (n > 0) ? 1 : -1;
}

int main(void)
{
	int n; //�ش� ���� ����
	printf("������ �Է��Ͻÿ�:"); //�ȳ������
	scanf_s("%d", &n); //�Է¹���
	printf("even() �� ���: %d\n", even(n)); //¦Ȧ ���
	printf("absolute() �� ���: %d\n", absolute(n)); //�������
	printf("sign() �� ���: %d\n", sign(n));//��ȣ���
	printf("2411849 �̺�����");
	return 0;
}*/
/*void menu() //�޴�����Լ�
{
	printf("<1> �ܾ�\n");
	printf("<2> �Ա�\n");
	printf("<3> ���\n");
	printf("<4> ����\n");
}

int chooseMenu() //�޴� ��ȣ �Է¹޾� ��ȯ�ϴ� �Լ�
{
	int n;
	printf("�޴��� �����Ͻÿ�:");
	scanf_s("%d", &n);
	return n;
}
long deposit() //�Ա��Լ�
{
	long money;
	printf("�Ա� �ݾ��� �Է��Ͻÿ�:");
	scanf_s("%ld", &money);
	return money; //�Աݾ� ��ȯ
}
long withdraw() //����Լ�
{
	long money;
	printf("��� �ݾ��� �Է��Ͻÿ�:");
	scanf_s("%ld", &money);
	return money; //��ݾ� ��ȯ
}
int main(void)
{
	printf("**********Welcome to Express ATM**********\n");
	long price = 0; //�ܰ� ���� ����,�ʱ�ȭ�� ���ѷ����� ���� �ܰ���� �ȵ�
	int c = 1; //c�� �̿��ؼ� ��ȯ������ �̿��ؾ� '�޴��� �����Ͻÿ�' �ȳ����� �ݺ��ȵ�
	while (1) //4 ���� ������ ���ѷ���
	{
		menu(); //�޴� ���
		c = chooseMenu(); //�޴� ��ȣ ����
		if (c == 1) //�ܰ�
			printf("�ܰ�� %ld �Դϴ�.\n", price);
		else if (c == 2) //�Ա�
		{
			price += deposit();
			printf("�ܰ�� %ld �Դϴ�.\n", price);
		}

		else if (c == 3) //���
		{
			price -= withdraw();
			printf("�ܰ�� %ld �Դϴ�.\n", price);
		}
		else//����
			break; //return 0 �ƴϰ� break��
	}
	printf("2411849 �̺�����");
	return 0;
}*/

/*void menu(void)
{
	printf("=====================================\n");
	printf(" 'c' �����µ����� ȭ���µ��� ��ȯ\n");
	printf(" 'f' ȭ���µ����� �����µ��� ��ȯ\n");
	printf(" 'q' ����\n");
	printf("=====================================\n");
}

double C2F(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}

double F2C(double f_temp)
{
	return (f_temp - 32.0) * 5.0 / 9.0;
}
int main(void)
{
	char choice;
	double temp;
	while (1) {
		menu();
		printf("�޴����� �����ϼ���:");
		choice = getchar();
		if (choice == 'q')
			break;
		else if (choice == 'c')
		{
			printf("�����µ�:");
			scanf_s("%lf", &temp);
			printf("ȭ���µ�: %lf \n\n", C2F(temp));
		}
		else if (choice == 'f')
		{
			printf("ȭ���µ�:");
			scanf_s("%lf", &temp);
			printf("�����µ�: %lf \n\n", F2C(temp));
		}
		choice=getchar();
	}
	return 0;
}*/







