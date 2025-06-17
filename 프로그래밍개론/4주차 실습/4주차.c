#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	int month; //입력받을 변수 선언
	printf("월을 입력하시오:"); //안내문출력
	scanf_s("%d", &month); //입력받음
	switch (month)
	{
	case 1: //1월   case 1:printf("jan");break; 로 해도 됨
		printf("jan");
		break;
	case 2: //2월
		printf("fab");
		break;
	case 3: //3월
		printf("mar");
		break;
	case 4: //4월
		printf("apr");
		break;
	case 5: //5월
		printf("may");
		break;
	case 6: //6월
		printf("jun");
		break;
	case 7: //7월
		printf("jul");
		break;
	case 8: //8월
		printf("aug");
		break;
	case 9: //9월
		printf("sep");
		break;
	case 10: //10월
		printf("oct");
		break;
	case 11: //11월
		printf("nov");
		break;
	case 12: //12월
		printf("dec");
		break;
	default: //다른 값 입력시
		printf("잘못 입력하셨네요");
		break;
	}
	printf("\n2411849 이빛찬란");
	return 0;
}
	
	
	/*int number, x; //정답 변수와 입력 변수 선언
	srand(time(NULL)); 
	number = rand()%100; //난수를 두자리로 만들고 변수에 저장
	printf("복권 번호를 입력하시오(0에서 99사이)"); //안내문출력
	scanf("%d", &x); //정수형변수로 읽어들임
	printf("당첨 번호는 %d 입니다 \n", number); //정답출력
	if (x == number) //완전히 동일할때 
		printf("상금은 1000000 입니다");
	else if (x / 10 == number / 10 || x / 10 == number % 10 || x % 10 == number / 10 || x % 10 == number % 10) //한자리만 같을때
		printf("상금은 500000 입니다");
	else //둘다 아닐때
		printf("상금은 없습니다");
	printf("\n2411849 이빛찬란");
	return 0;
	
	char op; //연산자 변수 char형 선언
	int x, y, result; //피연산자,결과 변수 선언
	printf("수식을 입력하세요(예:2 + 5)>>"); //안내문출력
	scanf("%d %c %d", &x, &op, &y); //피연산자,연산자 입력받아 저장
	result = 0; //결과값 초기화
	switch (op) {
	case '+':result = x + y;break; //op==+
	case '-':result = x - y; break; //op==-
	case '*':result = x * y;break; //op==*
	case '/':result = x / y;break; //op==/
	case '%':result = x % y;break; //op==%
	dafault:printf("지원되지않는 연산자입니다."); //기본값
	}
	printf("%d %c %d = %d", x, op, y, result); //결과값출력
	printf("\n2411849 이빛찬란");
	return 0;

	char op; //연산자 변수 char형 선언
	int x, y, result; //피연산자,결과변수 선언
	printf("수식을 입력하세요(예:2 + 5)>>"); //안내문출력
	scanf("%d %c %d", &x, &op, &y); //피연산자,연산자 입력받음
	result = 0; //결과 초기화
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
		printf("지원되지 않는 연산자입니다"); //나머지경우
	printf("%d %c %d = %d", x, op, y, result); //결과출력
	printf("\n2411849 이빛찬란");
	return 0;

	char ch; //변수선언
	printf("문자를 입력하시오:"); //안내문출력
	ch = getchar(); //입력받아서  ch에 저장
	switch (ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':printf("모음입니다"); break; //다 써도되긴함 아무것도 없으면 그냥 담으로 넘어감
	default:
		printf("자음입니다"); break; //여기 브레이크는 써도되고 안써도됨
	}
	printf("\n2411849 이빛찬란");
	return 0;
	double x, f; //입력받을 변수와 값 저장할 변수 저장
	printf("x값을 입력하시오:"); //안내문출력
	scanf_s("%lf", &x); //lf형태로 입력받음
	if (x <= 0) //0보다 큰경우
		f = x * x - 9 * x + 2;
	else //0보다 작은경우
		f = 7 * x + 2;
	printf("f(x)의 값은 %.2lf입니다.\n", f); //함수값출력
	printf("2411849 이빛찬란");
	return 0;

	double height, weight, k; //키,몸무게,표준체중 변수k 선언
	printf("체중과 키를 입력하시오:"); //입력안내
	scanf_s("%lf %lf", &weight, &height); //체중과 키 입력받음
	k = (height - 100) * 0.9; //k는 표준체중 저장 변수
	if (weight > k) //표준체중 초과일때
		printf("과체중입니다."); //안내문출력
	else if (weight == k) //표준체중과 동일할 때
		printf("표준체중입니다."); //안내문출력
	else //표준 미만일때
		printf("저체중입니다."); //안내문출력
	printf("\n2411849 이빛찬란");
	return 0;

	int x, y, z; //입력받을 정수 저장 변수 선언
	int min = 0; //최솟값 변수 선언 및 초기화
	printf("정수 3개를 입력하시오:"); //안내문출력
	scanf("%d %d %d", &x, &y, &z); //정수형태로입력받음


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
	printf("제일 작은 정수는 %d입니다.", min); //결과출력
	printf("\n2411849 이빛찬란");
	return 0;

	char ch; //문자형 변수 ch 선언
	printf("문자를 입력하시오:"); //안내문출력
	ch = getchar(); //문자 저장됨
	if ('a' < ch && ch < 'z') //소문자 아스키코드 값 비교
		printf("%c는소문자입니다.", ch); //출력
	else if ('A' < ch && ch < 'Z') //대문자 아스키코드 값 비교
		printf("%c는 대문자입니다.", ch); //출력
	else if ('0' < ch && ch < '9') //숫자 아스키코드 값 비교
		printf("%c는 숫자입니다.", ch); //출력
	else //기타 입력할 경우
		printf("%c는 기타 문자입니다.", ch); //출력
	printf("\n2411849 이빛찬란");
	return 0;


	*/








