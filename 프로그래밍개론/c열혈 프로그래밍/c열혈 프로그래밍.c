#include <stdio.h>

int main(void) {
	/*int x;
	printf("숫자를입력하면(10진수) 16진수로 나옵니다");
	scanf("%d", &x);
	printf("%X", x);    //x를 대문자로하면 아스키코드도 대문자로나옴
	return 0;*/



	/*int a, b, tmp;
	int i = 0,j=0;
	printf("몇단부터 몇단까지가 궁금하신가요?");
	scanf("%d %d", &a, &b);
	if (a > b) { //a<b로 정렬
		tmp = b;
		b = a;
		a = tmp;
	}
	j = a;
	for (j = a; j <= b; j++) {
		printf("%d단 출력\n", j);
		for (i = 1; i < 10; i++) {
			printf("%d * %d = %d\n", j, i, j *i);
		}
	}
	return 0;*/



	/*int a, b, tmp;
	int i=1;
	printf("두 수를 입력");
	scanf("%d %d", &a, &b);
	if (a < b) { //a>b로 정렬
		tmp = b;
		b = a;
		a = tmp;
	}
	while (i != 0) {
		i = a % b;
		a = b;
		b = i;
	}
	printf("최대공약수는 %d", a);
	return 0;*/




	int money = 3500, cream = 500, cookie = 700, cola = 400;
	int a=0, b=0, c=0; ///여기가 문제인것같음
	while (money >= b * cookie + a * cream + c * cola) {
		money = money - b * cookie;
		while (money >= a * cream + c * cola) {
			money = money - a * cream;
			if (money % cola == 0) {
					c = money / cola;
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", a, b, c);
			}
			//printf("%d %d %d\n", a,b,c);
		}
		a++;
		b++;

	}
	return 0;




	/*int n = 2;     //와시발 존나오랫동안풀었다 ㅜㅜㅜㅜㅜ
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
	printf("초를 입력하세요");
	scanf("%d", &time);
	h = (time / 3600);
	time = time % 3600;
	m = time / 60;
	time = time % 60;
	s = time;
	printf("%d 시간 %d분 %d초", h, m, s);
	return 0;*/



	/*int n, k, result;
	result = 1;
	k = 0;
	printf("상수 입력");
	scanf("%d", &n);
	while (result<=n) {
		result = result * 2 ;
		k++;
	}
	printf("%d ", --k);
	return 0;*/



/*int x;
scanf("%d", &x);
printf("답은 %d", square(x));
return 0; */
}





int square(int x) { //2의 n승을 구하는 재귀함수
	if (x == 0)
		return 1;
	else if (x == 1)
		return 2;
	else
		return square(x - 1) * 2;
}




