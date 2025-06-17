#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define ENTRIES 5 //항목의 수

/*void encrypt(char cipher[], int shift)
{
	int i=0;
	while (cipher[i] != '\0') { //끝나기전까지 반복
		if (cipher[i] >= 'a' && cipher[i] <= 'z') { //소문자에 해당할 경우만 바꿈
			cipher[i] += shift;
			if (cipher[i] > 'z') //더했는데 범위 커지면
				cipher[i] -= 26;// 다시 순환되게
		}
		i++;
	}
	printf("암호화된 문자열: %s", cipher);
}
int main(void)
{
	char origin[30]; //배열선언
	printf("문자열을 입력하시오:");
	gets_s(origin, 30); //입력받음
	encrypt(origin, 3);
	printf("\n2411849 이빛찬란");
	return 0;
}*/

/*int main(void) {
	char dic[ENTRIES][2][30] = { //30은 단어 각각의 길이범위임
		{"book","책"},
		{"boy","소년"},
		{"computer","컴퓨터"},
		{"language","언어"},
		{"rain","비"},
	};
	char word[30]; //입력받을 배열 선언
	printf("단어를 입력하시오:");
	scanf("%s", word); //입력받음
	for (int i = 0; i < ENTRIES; i++) { //행 수만큼 탐색
		if (strcmp(dic[i][0], word) == 0) { //영단어와 일치하면
			printf("%s: %s\n", word, dic[i][1]); //한글뜻도 출력
			printf("2411849 이빛찬란");
			return 0;
		}
	}
	printf("사전에서 발견되지 않음\n2411849 이빛찬란"); //탐색실패
}*/

/*int main(void)
{
	char pass[100]; //password
	int len; int error=0;
	int num_count=0, upper_count=0, lower_count=0; //대,소 영문자개수
	printf("패스워드를 입력하시오:");
	gets_s(pass, sizeof(pass));
	len = strlen(pass);//문자열길이
	if (len < 7) {
		printf("유효한 암호가 아닙니다");
		exit(1); //바로 종료
	}
	for (int i = 0; i < len; i++) { //len>=7
		if (islower(pass[i]))
			++lower_count;
		if (isupper(pass[i]))
			++upper_count;
		if (isdigit(pass[i]))
			++num_count;
	}
	if (lower_count&&upper_count&&num_count) //대,소,숫자 모두 하나이상있을경우
		printf("강한 암호입니다.");
	else
		printf("유효한 암호가 아닙니다.");
	printf("\n2411849 이빛찬란");
	return 0;
}*/

/*int main(void)
{
	int wc = count_word("I like c programming");
	printf("단어의 개수: %d\n", wc);
	printf("2411849 이빛찬란");
}
int count_word(char* s)
{
	int i,wc=0; //wc는 최종 리턴
	int waiting = 1; //새로운 단어를 기다리는 상태
	for (i = 0; s[i] != '\0'; ++i) { //가운데는 조건식
		if (isalpha(s[i])) { //알파벳일때
			if (waiting) { //대기상태일때
				wc++; //단어수 증가
				waiting = 0;
			}
		}
		else //공백,문장부호 만나면 waiting=1 ,다시 대기상태로 진입
			waiting = 1;
	}
	return wc;
}*/


/*int main(void)
{
	char sol[100] = "meet at midnight"; //하드코딩
	char ans[100] = "____ __ ________";
	char ch;
	while (1) { //맞출때까지 무한반복
		printf("문자열을 입력하시오:%s\n", ans); //ans는 변경되야함
		printf("글자를 추측하시오:");
		ch = getchar(); //입력받음
		if (check(sol,ans, ch) == 1)
			break;
		getchar(); //엔터키고려
	}
	printf("\n2411849 이빛찬란");
	return 0;
}
int check(char solution[], char answer[], char ch) 
{
	int i;
	for (i = 0; solution[i] != '\0'; i++) {
		if (solution[i] == ch) //해당 글자가 맞아야
			answer[i] = ch; // 위치 공개
	}
	if (strcmp(solution, answer) == 0) //정답일때
		return 1;
	else
		return 0;
}*/

int main() {
	char str[100];  // 입력 받을 문자열
	int freq[256] = { 0 };  // 각 문자의 빈도를 저장할 배열, 아스키코드로 비교해야함.
	printf("문자열을 입력하시오: ");
	gets_s(str, sizeof(str));  //문자열 입력. scanf말고 이거써야됨 
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ') {  // 공백 문자가 아닐때만
			freq[str[i]]++; //인덱스는 자동으로 정수로 들어감.
		}
	}
	for (int i = 0; i < 256; i++) {
		if (freq[i] > 0) { //1번이상 나와야 출력
			printf("%c: %d\n", i, freq[i]); //i가 숫자이므로 %c로 해야 아스키코드 적용됨
		}
	}
	printf("\n2411849 이빛찬란");
	return 0;
}





