#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	int month; //�Է¹��� ���� ����
	printf("���� �Է��Ͻÿ�:"); //�ȳ������
	scanf_s("%d", &month); //�Է¹���
	switch (month)
	{
	case 1: //1��   case 1:printf("jan");break; �� �ص� ��
		printf("jan");
		break;
	case 2: //2��
		printf("fab");
		break;
	case 3: //3��
		printf("mar");
		break;
	case 4: //4��
		printf("apr");
		break;
	case 5: //5��
		printf("may");
		break;
	case 6: //6��
		printf("jun");
		break;
	case 7: //7��
		printf("jul");
		break;
	case 8: //8��
		printf("aug");
		break;
	case 9: //9��
		printf("sep");
		break;
	case 10: //10��
		printf("oct");
		break;
	case 11: //11��
		printf("nov");
		break;
	case 12: //12��
		printf("dec");
		break;
	default: //�ٸ� �� �Է½�
		printf("�߸� �Է��ϼ̳׿�");
		break;
	}
	printf("\n2411849 �̺�����");
	return 0;
}
	
	
	/*int number, x; //���� ������ �Է� ���� ����
	srand(time(NULL)); 
	number = rand()%100; //������ ���ڸ��� ����� ������ ����
	printf("���� ��ȣ�� �Է��Ͻÿ�(0���� 99����)"); //�ȳ������
	scanf("%d", &x); //������������ �о����
	printf("��÷ ��ȣ�� %d �Դϴ� \n", number); //�������
	if (x == number) //������ �����Ҷ� 
		printf("����� 1000000 �Դϴ�");
	else if (x / 10 == number / 10 || x / 10 == number % 10 || x % 10 == number / 10 || x % 10 == number % 10) //���ڸ��� ������
		printf("����� 500000 �Դϴ�");
	else //�Ѵ� �ƴҶ�
		printf("����� �����ϴ�");
	printf("\n2411849 �̺�����");
	return 0;
	
	char op; //������ ���� char�� ����
	int x, y, result; //�ǿ�����,��� ���� ����
	printf("������ �Է��ϼ���(��:2 + 5)>>"); //�ȳ������
	scanf("%d %c %d", &x, &op, &y); //�ǿ�����,������ �Է¹޾� ����
	result = 0; //����� �ʱ�ȭ
	switch (op) {
	case '+':result = x + y;break; //op==+
	case '-':result = x - y; break; //op==-
	case '*':result = x * y;break; //op==*
	case '/':result = x / y;break; //op==/
	case '%':result = x % y;break; //op==%
	dafault:printf("���������ʴ� �������Դϴ�."); //�⺻��
	}
	printf("%d %c %d = %d", x, op, y, result); //��������
	printf("\n2411849 �̺�����");
	return 0;

	char op; //������ ���� char�� ����
	int x, y, result; //�ǿ�����,������� ����
	printf("������ �Է��ϼ���(��:2 + 5)>>"); //�ȳ������
	scanf("%d %c %d", &x, &op, &y); //�ǿ�����,������ �Է¹���
	result = 0; //��� �ʱ�ȭ
	if (op == '+') //op==+
		result = x + y;
	else if (op == '-') //op==-
		result = x - y;
	else if (op == '*') //op==*
		result = x * y;
	else if (op == ' / ') //op==/
		result = x / y;
	else if (op == '%') //op==%
		result = x % y;
	else
		printf("�������� �ʴ� �������Դϴ�"); //���������
	printf("%d %c %d = %d", x, op, y, result); //������
	printf("\n2411849 �̺�����");
	return 0;

	char ch; //��������
	printf("���ڸ� �Է��Ͻÿ�:"); //�ȳ������
	ch = getchar(); //�Է¹޾Ƽ�  ch�� ����
	switch (ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':printf("�����Դϴ�"); break; //�� �ᵵ�Ǳ��� �ƹ��͵� ������ �׳� ������ �Ѿ
	default:
		printf("�����Դϴ�"); break; //���� �극��ũ�� �ᵵ�ǰ� �Ƚᵵ��
	}
	printf("\n2411849 �̺�����");
	return 0;
	double x, f; //�Է¹��� ������ �� ������ ���� ����
	printf("x���� �Է��Ͻÿ�:"); //�ȳ������
	scanf_s("%lf", &x); //lf���·� �Է¹���
	if (x <= 0) //0���� ū���
		f = x * x - 9 * x + 2;
	else //0���� �������
		f = 7 * x + 2;
	printf("f(x)�� ���� %.2lf�Դϴ�.\n", f); //�Լ������
	printf("2411849 �̺�����");
	return 0;

	double height, weight, k; //Ű,������,ǥ��ü�� ����k ����
	printf("ü�߰� Ű�� �Է��Ͻÿ�:"); //�Է¾ȳ�
	scanf_s("%lf %lf", &weight, &height); //ü�߰� Ű �Է¹���
	k = (height - 100) * 0.9; //k�� ǥ��ü�� ���� ����
	if (weight > k) //ǥ��ü�� �ʰ��϶�
		printf("��ü���Դϴ�."); //�ȳ������
	else if (weight == k) //ǥ��ü�߰� ������ ��
		printf("ǥ��ü���Դϴ�."); //�ȳ������
	else //ǥ�� �̸��϶�
		printf("��ü���Դϴ�."); //�ȳ������
	printf("\n2411849 �̺�����");
	return 0;

	int x, y, z; //�Է¹��� ���� ���� ���� ����
	int min = 0; //�ּڰ� ���� ���� �� �ʱ�ȭ
	printf("���� 3���� �Է��Ͻÿ�:"); //�ȳ������
	scanf("%d %d %d", &x, &y, &z); //�������·��Է¹���


	if (x < y)
	{
		if (x < z) //x==min
			min = x;
		else //z==min
			min = z;
	}
	else
	{
		if (y < z) //y==min
			min = y;

		else //z==min
			min = z;
	}
	printf("���� ���� ������ %d�Դϴ�.", min); //������
	printf("\n2411849 �̺�����");
	return 0;

	char ch; //������ ���� ch ����
	printf("���ڸ� �Է��Ͻÿ�:"); //�ȳ������
	ch = getchar(); //���� �����
	if ('a' < ch && ch < 'z') //�ҹ��� �ƽ�Ű�ڵ� �� ��
		printf("%c�¼ҹ����Դϴ�.", ch); //���
	else if ('A' < ch && ch < 'Z') //�빮�� �ƽ�Ű�ڵ� �� ��
		printf("%c�� �빮���Դϴ�.", ch); //���
	else if ('0' < ch && ch < '9') //���� �ƽ�Ű�ڵ� �� ��
		printf("%c�� �����Դϴ�.", ch); //���
	else //��Ÿ �Է��� ���
		printf("%c�� ��Ÿ �����Դϴ�.", ch); //���
	printf("\n2411849 �̺�����");
	return 0;


	*/








