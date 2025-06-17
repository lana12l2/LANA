#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEC_PER_MINUTE 60
int main(void)
{


	/*int x, y, z, w;  //입력받을 x,y좌표와 임시 저장변수 z,w선언
	printf("x좌표를 입력하시오:"); //안내문출력
	scanf("%d", &x); //x입력받음
	printf("y좌표를 입력하시오:"); //안내문출력
	scanf("%d", &y); //입력받음
	z = (y > 0) ? 1 : 2; //y좌표가 양수이면 1 아니면 2 저장
	w = (x < 0) ? z + 1 : z + 2; //x좌표의 음수여부에 따라 z값 변경
	printf("\n%d사분면입니다", ((x > 0) && (y > 0)) ? z : w); //오류나지 않도록 1사분면일 경우는 한정해서 출력
	printf("\n2411849 이빛찬란");
	return 0;
}

	/*int x, y, z, w;  //입력받을 x,y좌표와 임시 저장변수 z,w선언
	printf("x좌표를 입력하시오:"); //안내문출력
	scanf("%d", &x); //x입력받음
	printf("y좌표를 입력하시오:"); //안내문출력
	scanf("%d", &y); //입력받음
	z = 1;
	z = ((x < 0) && (y > 0)) ? ++z:z;
	w = ((x < 0)&&(z==1)) ? z + 2 : z; //바로 윗줄에서 z가 2 인경우는 반대로 되어야함
	w = ((x < 0) && (z == 2)) ? z : z + 2;
	printf("\n%d사분면입니다",(x*y>0)? z:w);
	printf("\n2411849 이빛찬란");
	return 0;





	int x; //초 입력 변수
	int minute, second; //분,초 저장할 변수 int형으로 선언
	printf("초를 입력하세요:"); //입력안내
	scanf("%d", &x); //입력받아 변수에 저장
	minute = x / SEC_PER_MINUTE; //기호 상수 이용해서 분 계산
	second = x % SEC_PER_MINUTE; //기호 상수 이용해서 초 계산
	printf("%d초는 %d분 %d초 입니다.", x, minute, second); //출력
	printf("\n2411849 이빛찬란");
	return 0;*/

	int x, y, z, a, b, c; //각각 물건 값, 투입금액,잔돈,천원,오백원,백원 변수
	printf("물건 값을 입력하시오:"); //안내문 출력
	scanf("%d", &x); //물건값 x에 저장
	printf("투입한 금액을 입력하시오:"); //안내문출력
	scanf("%d", &y); //투입금액 y에 저장
	printf("거스름돈은 다음과 같습니다.\n\n");//안내문출력
	z = y - x; //잔돈 변수
	a = z / 1000; //천원 계산
	z = z % 1000; // 잔돈변수 업데이트
	b = z / 500; //오백원 계산
	z = z % 500; //잔돈 업데이트
	c = z / 100;//백원 계산
	printf("천원권:%d장\n", a); //천원출력
	printf("오백원 동전:%d개\n", b); //오백원출력
	printf("백원 동전:%d개\n", c);//백원출력
	printf("2411849 이빛찬란");
	return 0;
}

	/*int i; //입력받을변수, 십의자리.일의자리 변수 선언
	printf("정수를 입력하시오:"); //안내문출력
	scanf("%d", &i); //정수입력받음
	printf("십의 자리:%d\n", i / 10); //십의자리 계산
	printf("일의 자리:%d\n", i % 10); //나머지 일의자리에 대입
	printf("2411849 이빛찬란");
	return 0;

    int x, y; //정수형변수 선언
    x = 1; //1로 초기화
    printf("수식 x+1의 값은 %d\n", x + 1); //출력
    printf("수식 y=x+1의 값은 %d\n", y = x + 1); //수식의 값 출력
    printf("수식 y=10+(x=2+7)의 값은 %d\n", y = 10 + (x = 2 + 7)); //y값은 19 저장
    printf("수식 y=x=3의 값은 %d\n", y = x = 3); //결과적으로 y값은 3
    printf("2411849 이빛찬란");
    return 0;

    int x, y, z, k; //입력받을 변수와 k라는 중간 비교변수 선언
	printf("정수 3개를 입력하시오:"); //안내문출력
	scanf("%d %d %d", &x, &y, &z); //정수형태로입력받음
	k = (x > y) ? x : y; //먼저 임의의 두 수 중 큰것을 k에 저장
	printf("최댓값은 %d입니다\n", (k > z) ? k : z); //나머지 한 수와 k를 비교
	printf("2411849 이빛찬란");
	return 0;

	int x, mask; //입력받을 변수와 비교변수 선언
	printf("십진수:");//안내문출력
	scanf("%d", &x);//입력받기
	mask = 128;// mask=1<<7; 1을 왼쪽으로7번이동한거 이러면 이진수로 1000000됨
	((x & mask) == 0) ? printf("0") : printf("1"); //비트수만큼 반복하기 마지막 mask는 안옮겨도됨
	mask = mask >> 1;
	((x & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((x & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((x & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((x & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((x & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((x & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((x & mask) == 0) ? printf("0") : printf("1");
	printf("\n2411849 이빛찬란");
	return 0;

	char data = 'a'; //문자형 변수data선언
	char key = 0xff; //16진수로 키 생성
	char encrypted_data, orig_data; //암호화,복호화 변수 선언
	printf("원래의 문자=%c\n", data); //안내문출력
	encrypted_data = data ^ key; //xor연산으로 암호화
	printf("암호화된 문자=%c\n", encrypted_data); //암호화된거 출력
	orig_data = encrypted_data ^ key; //xor연산으로 복호화
	printf("복원된 문자=%c\n", orig_data); //복호화후 원래값 출력
	printf("2411849 이빛찬란");
	return 0;

	double x, y; //화씨,섭씨온도 저장할 변수 선언
	printf("화씨온도를 입력하시오:");//안내문출력
	scanf("%lf", &x);//값 입력받아 변수에 저장
	y = (x - 32) * 5.0 / 9.0;//섭씨 계산 소수점으로 써야함에 주의!! 아니면 double(5)/double(9) 이것도가능
	printf("섭씨온도는 %f입니다\n", y);//결과출력
	printf("2411849 이빛찬란");
	return 0;
}

}

}

}*/







