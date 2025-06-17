#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	printf("\"ASCII code\",\'A\',\'B\',\'C\'\n");  //\쓰고 "또는'써야 프린트문에서 정상적으로 출력됨
	printf("\\t \\a \\n"); //\를 두번써야 출력시에도 \가 나옴
	printf("\n2411849 이빛찬란");
}

	
		
	/*const double SQMETER_PER_PYEONG = 3.3058; //main함수 안에서 double형태로 기호상수 지정
	double meter = 0; //meter 변수 선언 및 초기화
	double x; //입력받을 평 저장할 변수 선언
	printf("평을 입력하세요:"); //안내문 출력
	scanf("%lf", &x); //평을 lf형태로 입력받고 x에 저장
	meter = SQMETER_PER_PYEONG * x; //계산
	printf("%lf 평방미터입니다", meter);//평방미터
	printf("\n2411849 이빛찬란");
	return 0;


	double m, v, e; //double 형으로 변수 선언
	printf("질량(kg):"); //안내문출력
	scanf("%lf", &m); //lf형으로 질량 입력받고 저장
	printf("속도(m/s):"); //안내문출력
	scanf("%lf", &v); //lf형으로 입력받고 저장
	e = (m * v * v) * (1.0 / 2.0); //계산
	printf("운동에너지(J): %lf", e);//운동에너지 출력
	printf("\n2411849 이빛찬란");
	return 0;

	char a = 61; //a를 char형으로 아스키코드 이용해 선언
	printf("%c %c %c", 'a' + 1, 'a' + 2, 'a' + 3); //b c d 출력
	printf("\n2411849 이빛찬란");
	return 0;
}

	/*int x, y, sum, z;  //정수 입력받을 변수와 합을 저장할 변수 정의
	sum = 0; //초기화
	printf("3개의 정수를 입력하세요(x,y,z)"); //변수입력을 사용자에게 알림
	scanf("%d %d %d", &x,&y,&z); //변수 3개를 정수의 형태로 입력받음
	sum += x; //첫번째 변수 sum에 더함
	sum += y; //두번재 변수 더함
	sum += z; //세번째 변수 더함
	printf(" 정수의 합은 %d\n", sum); //새로운 값이 저장된 sum변수를 정수 형태로 출력
	printf("2411849 이빛찬란");
	return 0;

	int id, pass;  //아이디와 패스워드 저장할 변수 지정
	printf("아이디와 패스워드를 4개의 숫자로 입력하세요:\n"); //입력 양식 안내 출력
	printf("id:____\b\b\b\b"); //입력할때바다 언더바 뒤로가게 출력
	scanf("%d", &id); //입력받은 아이디 정수형태로 저장
	printf("pass:____\b\b\b\b");  //입력할때바다 언더바 뒤로가게 출력
	scanf("%d", &pass); //비밀번호 정수형태로 저장
	char beep = '\a'; //이스케이프 시퀀스 캐릭터형으로 지정
	printf("%c",beep); //경고음 울리게 출력
	printf("입력된 아이디는 \"%d\",패스워드는 \"%d\" 입니다.\n",id,pass);//쥬의: printf("아이디는 \"id\" 입니다")<이런식으로하면 그냥 아이디는 id 입니다 이렇게나옴.)
	printf("2411849 이빛찬란");
	return 0;

	double v = 300000; //속도를 double형태로 저장
	double d = 149600000; //거리를 double형태로 저장
	double t = d / v; //속도도 더블형태로저장
	printf("빛의속도는 %lf km/s\n", v); //빛의속도출력 double 이므로 long float형태
	printf("태양과지구와의거리 %lf km\n", d); //거리출력 double 이므로 long float형태
	printf("도달 시간은 %lf 초\n", t); //시간출력 double 이므로 long float형태
	printf("2411849 이빛찬란");
	return 0;

	int x = 10;  //정수형변수 x선언
	int y = 20; //정수형변수 y선언
	printf("x=%d y=%d\n", x,y); //각각 출력
	int z = x;  //z는 10
	x = y; //x는 20
	y = z; //y는 10
	printf("x=%d y=%d\n", x,y); //바뀐값출력
	printf("2411849 이빛찬란");
	return 0;*/


	




