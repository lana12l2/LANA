#include <stdio.h>

int main(void) {
	/*int x;
	printf("���ڸ��Է��ϸ�(10����) 16������ ���ɴϴ�");
	scanf("%d", &x);
	printf("%X", x);    //x�� �빮�ڷ��ϸ� �ƽ�Ű�ڵ嵵 �빮�ڷγ���
	return 0;*/



	/*int a, b, tmp;
	int i = 0,j=0;
	printf("��ܺ��� ��ܱ����� �ñ��ϽŰ���?");
	scanf("%d %d", &a, &b);
	if (a > b) { //a<b�� ����
		tmp = b;
		b = a;
		a = tmp;
	}
	j = a;
	for (j = a; j <= b; j++) {
		printf("%d�� ���\n", j);
		for (i = 1; i < 10; i++) {
			printf("%d * %d = %d\n", j, i, j *i);
		}
	}
	return 0;*/



	/*int a, b, tmp;
	int i=1;
	printf("�� ���� �Է�");
	scanf("%d %d", &a, &b);
	if (a < b) { //a>b�� ����
		tmp = b;
		b = a;
		a = tmp;
	}
	while (i != 0) {
		i = a % b;
		a = b;
		b = i;
	}
	printf("�ִ������� %d", a);
	return 0;*/




	int money = 3500, cream = 500, cookie = 700, cola = 400;
	int a=0, b=0, c=0; ///���Ⱑ �����ΰͰ���
	while (money >= b * cookie + a * cream + c * cola) {
		money = money - b * cookie;
		while (money >= a * cream + c * cola) {
			money = money - a * cream;
			if (money % cola == 0) {
					c = money / cola;
					printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", a, b, c);
			}
			//printf("%d %d %d\n", a,b,c);
		}
		a++;
		b++;

	}
	return 0;




	/*int n = 2;     //�ͽù� ������������Ǯ���� �̤̤̤̤�
	for (int k = 0; k < 10; k++) {
		for (int i = 1; i < n; i++) {
			if ((n % i == 0) && (i != 1)) {
				n++;
				i = 1;
				continue;
			}
		}
		printf("%d ", n);
		n++;
	}
	return 0;*/



	/*int time;
	int h, m, s;
	printf("�ʸ� �Է��ϼ���");
	scanf("%d", &time);
	h = (time / 3600);
	time = time % 3600;
	m = time / 60;
	time = time % 60;
	s = time;
	printf("%d �ð� %d�� %d��", h, m, s);
	return 0;*/



	/*int n, k, result;
	result = 1;
	k = 0;
	printf("��� �Է�");
	scanf("%d", &n);
	while (result<=n) {
		result = result * 2 ;
		k++;
	}
	printf("%d ", --k);
	return 0;*/



/*int x;
scanf("%d", &x);
printf("���� %d", square(x));
return 0; */
}





int square(int x) { //2�� n���� ���ϴ� ����Լ�
	if (x == 0)
		return 1;
	else if (x == 1)
		return 2;
	else
		return square(x - 1) * 2;
}




