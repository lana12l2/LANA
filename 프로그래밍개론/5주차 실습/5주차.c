#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	srand(time(NULL)); //시간 기반 난수
	int guess, k; //추측,정답,+-1 저장 변수선언
	k = 1; //while문 실행위해 0아니게 초기화
	printf("컴퓨터가 당신이 생각하는 숫자를 알아맞히는 게임입니다.\n하나의 숫자를 생각하세요.\n컴퓨터가 제시한 숫자보다 정답이 높으면 1,낮으면 -1이라고 하세요.\n컴퓨터가 숫자를 맞히면 0이라고 하세요.\n");
	//printf("생각한 숫자:");//
	//scanf("%d", &answer);
	guess = 50; //기준 설정
	while (k != 0)
	{
		printf("숫자가 %d인가요?", guess); //안내문출력
		scanf("%d", &k); //사용자 입력
		if (k == 1) //guess<정답
			guess = guess + rand() % 11 + 1; //적당한 간격으로 추측
		else //guess>정답
			guess = guess - rand() % 11 + 1; //적당한 간격으로 추측

	}
	printf("\n2411849 이빛찬란");
	return 0;
}

	/*int n, m; //변수선언
	printf("행의 개수 입력:"); //안내문출력
	scanf("%d", &n); //입력받음
	m = n; //m에 대입
	for (int i = 0; i < n; i++)//행 n개 만큼 반복
	{
		for (int j = 0; j < m - 1; j++) //4번째줄까지만 빈칸 출력
			printf(" "); //출력
		for (int k = 0; k < 2 * i + 1; k++) //빈칸 바로 옆에 * 출력이므로 병렬구조,i 가 0부터 시작이므로 2i+1로 진행
			printf("*"); //출력
		m--; //빈칸  감소
		printf("\n"); //줄띄우기
	}
	printf("2411849 이빛찬란");
	return 0;*/



	/*int a, b, c;//변수선언
	for (a = 1; a <= 100; a++) //a가 1부터 100까지 일때 반복
		for (b = a; b <= 100; b++)//중복되는경우때문에 (3 4 5 or 4 3 5) 항상 a<b<c의 값으로 진행,b는 a보다 무조건 큼
			for (c = b; c <= 100; c++) //c는 b보다 무조건 큼
				if (a * a + b * b == c * c)//만족하는경우 계산
					printf("%d %d %d\n", a, b, c); //출력
	printf("\n2411849 이빛찬란");
	return 0;*/


	/*int i, x, y, sum, answer;
	srand(time(NULL));
	for (i = 0; i < 10; i++) //10번 반복하기 0<=i<=9
	{
		x = rand() % 10; //한자리수 덧셈
		y = rand() % 10; //한자리수 덧셈
		sum = x + y; //정답 저장
		printf("\n%d + %d =_\b", x, y); //사용자 입력양식 출력
		scanf_s("%d", &answer); //사용자 계산 입력받음
		if (sum == answer) //sum==answer
			printf("맞았습니다.");
		else //sum!=answer
			printf("틀렸습니다.");
	}
	printf("\n2411849 이빛찬란");
	return 0;*/


	/*int year; //기간 변수 선언
	double total, money, rate; //총액,원금,이자 변수선언
	printf("원금:"); //안내문출력
	scanf_s("%lf", &money); //원금입력
	printf("이율(%%):"); //%하나쓰면 기다리게되어출력안됨 두개쓰기
	scanf_s("%lf", &rate); //이자입력
	printf("기간(년):"); //안내문출력
	scanf_s("%d", &year); //기간입력
	printf("==================\n"); printf("연도 원리금\n"); printf("==================\n"); 
	total = money; //처음 총액==money
	rate /= 100.0; //이자 소수 계산
	for (int i = 0; i < year; i++) //year만큼 반복
	{
		total = total * (1 + rate); //총액 계산
		printf("%2d   %10.1lf\n", i + 1, total); //오른쪽 정렬, 소수점은 한자리만나타내기
	}
	printf("\n2411849 이빛찬란");
	return 0;*/


	/*int loop_count; //반복횟수 변수선언
	double sum = 0.0; //파이값 초기화 및double 형 선언
	double y = 4.0; //초기 분자값 선언
	double x = 1.0; //초기 분모값 선언
	printf("반복횟수:"); //안내문출력
	scanf_s("%d", &loop_count);//반복횟수 입력받기
	while (loop_count > 0) //반복횟수가 0이되는 순간 실행하지 않고 탈출
	{
		sum = sum + y / x; //기존 sum에 현재의 분수더하기 
		x = x + 2.0; //분모변경
		y = y * (-1.0); //분자변경
		--loop_count; //반복횟수 감소
	}
	printf("pi=%lf", sum); //파이값 출력
	printf("\n2411849 이빛찬란");
	return 0;*/


	/*int num; //변수선언
	int digit; //각 자리 숫자 저장할 변수 선언
	printf("정수를 입력하시오:"); //안내문출력
	scanf_s("%d", &num); //입력받아 저장
	do
	{
		digit = num % 10; //작은자리 먼저 계산
		printf("%d", digit); // 숫자 출력
		num /= 10; //몫만 저장

	} while (num!= 0); //몫이 0이 될때 종료
	printf("\n2411849 이빛찬란");
	return 0;*/


	

	/*int guess, count = 0, answer;
	srand(time(NULL)); //시간을 시드로해서 난수를 만드는것
	answer = rand() % 100 + 1; //1부터 100사이니까 나머지(0-99) 1더해줘야됨 과제제출시는 정답출력안되게하기
	do {
		printf("정답을 추측하시오:"); //안내문출력
		scanf_s("%d", &guess); //추측입력받음
		count++; //횟수증가
		if (answer > guess) //answer>guess
			printf("LOW\n");
		else if //answer<guess
			printf("HIGH\n");
	}
	while (answer != guess); //answer==guess 일때 do-while문 탈출
	printf("축하합니다. "); printf("시도횟수=%d", count);//결과출력
	printf("\n2411849 이빛찬란");
	return 0;
}*/
