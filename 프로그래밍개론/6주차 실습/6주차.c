#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <math.h>
int is_prime(int num)//소수판별함수
{
	int i;
	if (num <= 1) //1은 소수아니므로 0반환
		return 0;
	for (i = 2; i < num; i++) //num직전까지 나뉠 수있는 경우는 소수아님.0반환
	{
		if (num % i == 0)
			return 0;
	}
	return 1; //소수면 1반환
}

int main(void)
{
	int num, i;
	printf("양의 정수를 입력하시오:"); //안내문출력
	scanf("%d", &num);
	for (i = 2; i <= num; i++) //i 증가시키며 num까지 반복
	{
		if (is_prime(i) && is_prime(num - i)) //i과 num-i가 모두 참일때만
			printf("%d = %d + %d\n", num, i, num - i); //출력
	}
	printf("2411849 이빛찬란");
	return 0;
}

/*int randint() //랜덤 수 생성함수
{
	return rand() % 80 + 10; //10~90 반환
}

int main(void)
{
	int n;
	printf("개수를입력하시오:");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) //n개의 난수 생성
		printf("%d ", randint()); //출력
	printf("\n2411849 이빛찬란");
	return 0;
}*/

/*int menu(void) //메뉴출력
{
	int n;
	printf("1.팩토리얼\n2.싸인\n3.로그(base 10)\n");
	printf("4.제곱근\n5.순열(nPr)\n6.조합(nCr)\n");
	printf("7.종료\n");
	printf("선택해주세요:");
	scanf_s("%d", &n);
	return n;
}

void factorial() //팩토리얼
{
	long n,i;
	long result = 1; //곱이므로 0안됨
	printf("정수를 입력하시오:");
	scanf_s("%ld", &n);
	for (i = 1; i <=n; i++) //1부터n까지의 곱
		result = result * i;
	printf("결과=%d\n\n", result); //출력

}

void sine() //sin함수
{
	double a, result;
	printf("각도를 입력하시오:");
	scanf_s("%lf", &a);
	result = sin(a); //계산 후 변수에 저장
	printf("결과=%lf\n\n", result); //출력
}

void logBase10() //상용로그
{
	double a, result;
	printf("실수값을 입력하시오:");
	scanf_s("%lf", &a);
	if (a < 0.0) //로그의 성질에 따른 예외처리
		printf("오류\n");
	else
	{
		result = log10(a); //계산 후 변수저장
		printf("결과=%lf\n\n", result); //출력
	}
}

int main(void)
{
	while (1)
	{
		switch (menu())  //함수의 반환값이 변수로 들어감
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
			printf("종료합니다.\n");
			printf("2411849 이빛찬란");
			return 0;
		default:
			printf("잘못된 선택입니다.\n");
			break;
		}
	}*/

/*int main(void)
{
	unsigned long start, end; //시간 음수없으므로 unsigned
	start = time(NULL); //시작시간
	printf("10초가 되면 아무 키나 누르세요\n");
	while (1) //무한루프
	{
		if (getchar()) //값 받는 즉시 break되도록 함
			break;
	}
	printf("종료되었습니다.\n");
	end = time(NULL); //끝난시간
	printf("경과된 시간은 %d초입니다.\n",end-start); //결과출력
	return 0;
}*/

/*void menu(void) //메뉴출력함수
{
	printf("=====================================\n");
	printf(" 'c' 섭씨온도에서 화씨온도로 변환\n");
	printf(" 'f' 화씨온도에서 섭씨온도로 변환\n");
	printf(" 'q' 종료\n");
	printf("=====================================\n");
}

double C2F(double c_temp) //섭씨에서 화씨
{
	return 9.0 / 5.0 * c_temp + 32;
}

double F2C(double f_temp) //화씨에서 섭씨
{
	return (f_temp - 32.0) * 5.0 / 9.0;
}
int main(void) 
{
	char choice; //메뉴 는 캐릭터형 변수로 선언
	double temp; //온도변수
	while (1) {
		menu();
		printf("메뉴에서 선택하세요:");
		choice = getchar(); //메뉴 입력받아 choice에 저장
		if (choice == 'q') //종료
			break;
		else if (choice == 'c') //c2f
		{
			printf("섭씨온도:");
			scanf_s("%lf", &temp);
			printf("화씨온도: %lf \n\n", C2F(temp));
		}
		else if (choice == 'f') //f2c
		{
			printf("화씨온도:");
			scanf_s("%lf", &temp);
			printf("섭씨온도: %lf \n\n", F2C(temp));
		}
		choice = getchar(); //엔터키 오류 해결
	}
	printf("2411849 이빛찬란");
	return 0;
}

/*int even(int n)
{
	return (n % 2 == 0) ? 1 : 0; //짝수이면 1 아니면 0 반환
}

int absolute(int n) //절댓값 받아서 계산
{
	return (n > 0) ? n : -n;
}

int sign(int n) //부호계산
{
	return (n > 0) ? 1 : -1;
}

int main(void)
{
	int n; //해당 정수 변수
	printf("정수를 입력하시오:"); //안내문출력
	scanf_s("%d", &n); //입력받음
	printf("even() 의 결과: %d\n", even(n)); //짝홀 출력
	printf("absolute() 의 결과: %d\n", absolute(n)); //절댓값출력
	printf("sign() 의 결과: %d\n", sign(n));//부호출력
	printf("2411849 이빛찬란");
	return 0;
}*/
/*void menu() //메뉴출력함수
{
	printf("<1> 잔액\n");
	printf("<2> 입금\n");
	printf("<3> 출금\n");
	printf("<4> 종료\n");
}

int chooseMenu() //메뉴 번호 입력받아 반환하는 함수
{
	int n;
	printf("메뉴를 선택하시오:");
	scanf_s("%d", &n);
	return n;
}
long deposit() //입금함수
{
	long money;
	printf("입금 금액을 입력하시오:");
	scanf_s("%ld", &money);
	return money; //입금액 반환
}
long withdraw() //출금함수
{
	long money;
	printf("출금 금액을 입력하시오:");
	scanf_s("%ld", &money);
	return money; //출금액 반환
}
int main(void)
{
	printf("**********Welcome to Express ATM**********\n");
	long price = 0; //잔고 저장 변수,초기화가 무한루프에 들어가면 잔고업뎃 안됨
	int c = 1; //c를 이용해서 반환값만을 이용해야 '메뉴를 선택하시오' 안내문이 반복안됨
	while (1) //4 선택 전까지 무한루프
	{
		menu(); //메뉴 출력
		c = chooseMenu(); //메뉴 번호 저장
		if (c == 1) //잔고
			printf("잔고는 %ld 입니다.\n", price);
		else if (c == 2) //입금
		{
			price += deposit();
			printf("잔고는 %ld 입니다.\n", price);
		}

		else if (c == 3) //출금
		{
			price -= withdraw();
			printf("잔고는 %ld 입니다.\n", price);
		}
		else//종료
			break; //return 0 아니고 break임
	}
	printf("2411849 이빛찬란");
	return 0;
}*/

/*void menu(void)
{
	printf("=====================================\n");
	printf(" 'c' 섭씨온도에서 화씨온도로 변환\n");
	printf(" 'f' 화씨온도에서 섭씨온도로 변환\n");
	printf(" 'q' 종료\n");
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
		printf("메뉴에서 선택하세요:");
		choice = getchar();
		if (choice == 'q')
			break;
		else if (choice == 'c')
		{
			printf("섭씨온도:");
			scanf_s("%lf", &temp);
			printf("화씨온도: %lf \n\n", C2F(temp));
		}
		else if (choice == 'f')
		{
			printf("화씨온도:");
			scanf_s("%lf", &temp);
			printf("섭씨온도: %lf \n\n", F2C(temp));
		}
		choice=getchar();
	}
	return 0;
}*/







