#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 100
typedef struct person { //학생 구조체 정의
	char name[SIZE]; //이름,주소,번호,특징을 각각 char 배열로 저장
	char address[SIZE];
	char mobilephone[SIZE];
	char desc[SIZE];
} PERSON; //typedef로 선언

void menu() { //메뉴
	printf("======================\n");
	printf("1.추가\n");
	printf("2.수정\n");
	printf("3.검색\n");
	printf("4.종료\n");
	printf("======================\n");
}


void add_record(FILE* fp); // 파일포인터를 받아서 끝에 추가하는 함수
PERSON get_record(); // 데이터는 사용자에게 받고, 구조체 전체를 반환함
void update_record(FILE* fp); // 파일포인터를 받아서 특정 구조체를 수정
void search_record(FILE* fp); //특정 이름의 데이터를 찾는 함수
void print_record(PERSON data); //구조체 변수를 받아서 출력함


int main(void)
{
	FILE* fp;
	int select;
	if ((fp = fopen("address.dat", "ab+")) == NULL) { //이진 파일을 쓰기모드로 열기
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다"); 
		exit(1);
	}
	while (1) { //4입력 전까지 무한반복한다
		menu();		
		printf("메뉴 번호를 입력하시오: ");	
		scanf("%d", &select);
		while (getchar() != '\n'); // 버퍼 비우기 (번호 입력 후 엔터 제거) ; 있음에 유의
		switch (select) {
		case 1:	add_record(fp); break;	// 데이터를 추가한다
		case 2:	update_record(fp); break;	// 데이터를 수정한다
		case 3:	search_record(fp); break;	// 데이터를 탐색한다
		case 4:	printf("2411849 이빛찬란"); return 0;
		}
	}
	fclose(fp); //파일 닫기
	return 0;
}

PERSON get_record()
{
	PERSON data;
	printf("이름: ");
	gets(data.name); //gets를 이용하여 문자열을 입력받는다
	printf("주소: ");
	gets(data.address);
	printf("휴대폰: ");
	gets(data.mobilephone);
	printf("특징: ");
	gets(data.desc);

	return data; //모든 멤버를 입력받은 후 구조체 전체를 반환
}

void print_record(PERSON data) //구조체 변수를 받아서 각 멤버 출력
{
	printf("이름: %s\n", data.name);
	printf("주소: %s\n", data.address);
	printf("휴대폰: %s\n", data.mobilephone);
	printf("특징: %s\n", data.desc);
}


void add_record(FILE* fp)
{
	PERSON data;
	data = get_record();	//get_record로 받은 구조체를 매개변수에 저장하고
	fseek(fp, 0, SEEK_END);	// 파일포인터를 맨뒤로 옮긴뒤에(이어쓰기)
	fwrite(&data, sizeof(data), 1, fp);	// data에서 fp로 쓴다
}

void search_record(FILE* fp)
{
	char name[SIZE];
	PERSON data;
	fseek(fp, 0, SEEK_SET);	// 파일의 처음으로 가야 함
	printf("탐색하고자 하는 사람의 이름: ");
	gets(name);		// 2. gets를 이용하여 탐색하고자 하는 사람의 이름을 입력 받기
	while (!feof(fp)) {		// 파일의 끝까지 반복한다
		fread(&data, sizeof(data), 1, fp); //data로 fp를 읽어옴
		if (strcmp(data.name, name) == 0) {	// data에 저장된 내용과 입력받은 이름을 비교해야 함 - strcmp 함수 사용
			print_record(data);
			break;
		}
	}
}
void update_record(FILE* fp)
{
	char name[SIZE];
	PERSON data;
	FILE* fp1; //tmp.dat의 파일포인터

	if ((fp1 = fopen("tmp.dat", "wb")) == NULL) { //새로운 이진파일 쓰기모드로 생성
		fprintf(stderr, "파일 tmp.dat를 열 수 없습니다");
		exit(1);
	}
	
	fseek(fp, 0, SEEK_SET);	// 파일의 처음으로 간다
	printf("수정하고자 하는 사람의 이름: ");
	gets(name);		// 이름을 입력받는다
	while (fread(&data, sizeof(data), 1, fp) == 1) {    // 파일의 끝까지 반복한다 data로 읽어옴
		if (strcmp(data.name, name) == 0) {	// 이름 같으면
			data = get_record(); //데이터 입력받고
		}
		fwrite(&data, sizeof(data), 1, fp1);  // 현재 위치에서 data에서 fp1으로 데이터 쓰기
	}
	fclose(fp1);
	fclose(fp);
	remove("address.dat"); //기존파일 삭제
	rename("tmp.dat", "address.dat"); //이름 변경
	if ((fp = fopen("address.dat", "a+")) == NULL) {
		fprintf(stderr, "파일 address.dat를 열 수 없습니다");
		exit(1);
	}
}


/*int main(void)
{
	FILE* pf = NULL; //파일포인터 초기화
	char buffer[500]; //파일을 읽을 저장공간
	int num = 1; 
	pf = fopen("proverbs.txt", "r"); //pf에 proverbs주소를 저장 ,오류나면 주소 복사해서 \를/로 바꾸고 +/파일이름.txt(전체경로)
	if (pf == NULL) {
		printf("파일 열기 실패"); 
		return 0;
	}
	while (fgets(buffer,sizeof(buffer),pf)!=NULL) //pf에서buffer로 문자열을 읽음
	{
		printf("%d: %s", num, buffer);
		num++; //번호 증가
	}
	fclose(pf);
	printf("2411849 이빛찬란");
	return 0;
}*/


/*int main(void)
{
	FILE* src_file, * dst_file; //파일포인터 두개 선언
	unsigned char buffer[1024]; //거쳐가는 저장공간
	int r_count; //읽는 바이트수
	src_file = fopen("C:/Users/2023user/OneDrive/바탕 화면/프로그래밍개론/13주차 실습/dog.jpg", "rb"); //이진 파일 읽기모드로 열기
	dst_file = fopen("copy.jpg", "wb"); // 이진 파일 쓰기모드로 열기
	if (src_file==NULL||dst_file==NULL) { //오류상황(둘중에 하나라도 null)
		fprintf(stderr, "파일 열기 오류\n");
		return 1;
	}
	while ( (r_count= fread(buffer, sizeof(unsigned char), sizeof(buffer), src_file))>0) {//buffer에서 읽는 바이트 수 반환, sizeof(unsigned char)은 각 항목의 크기
		int w_count= fwrite(buffer, 1, r_count, dst_file); //buffer에서 dst로 쓰는 바이트 반환
		if (w_count < 0) { //buffer에서 dst로 쓰다가 오류
			fprintf(stderr, "파일 쓰기 오류\n");
			return 1;
		}
		if (w_count < r_count) { //읽은거>쓴거 오류
			fprintf(stderr, "미디어 쓰기 오류\n");
			return 1;
		}
	}
	printf("copy.jpg로 이미지 파일이 복사됨\n");
	fclose(src_file);
	fclose(dst_file);
	printf("2411849 이빛찬란");
	return 0;
}*/


/*int main(int argc, char* argv[]) //파일 개수, 파일이름을 나타내는 포인터 배열
{
	FILE* fp1, * fp2, * fp3;
	char file1[100], file2[100], file3[100]; //파일이름 길이제한
	char buffer[100];
	if (argc >= 4) { //매개변수는 4개부터 시작해야함(argc때문)
		strcpy(file1, argv[1]); //argv[1]의 이름을 file1에 붙여넣기 인덱스 1부터 시작임
		strcpy(file2, argv[2]);//argv[2]의 이름을 file2에 붙여넣기
		strcpy(file3, argv[3]);//argv[3]의 이름을 file3에 붙여넣기
	}
	else
	{
		printf("인수가 부족합니다.\n");
		return 0;
	}
	printf("%s 파일 + %s 파일을 %s 파일로 복사합니다.\n", file1, file2, file3);
	if ((fp1 = fopen(file1, "r")) == NULL) { //file열기 오류(읽기모드)
		fprintf(stderr, "원본 파일 %s를 열 수 없습니다.\n",file1);
		exit(1);
	}
	if ((fp2 = fopen(file2, "r")) == NULL) {
		fprintf(stderr, "원본 파일 %s를 열 수 없습니다.\n", file2);
		exit(1);
	}
	if ((fp3 = fopen(file3, "w")) == NULL) { //쓰기모드
		fprintf(stderr, "원본 파일 %s를 열 수 없습니다.\n", file3);
		exit(1);
	}
	while (fgets(buffer, sizeof(buffer), fp1) != NULL) { //buffer로 입력
		fputs(buffer, fp3); //file3에 출력
	}

	while (fgets(buffer, sizeof(buffer), fp2) != NULL) { //buffer로 입력
			fputs(buffer, fp3); //file3에 출력
	}
	fclose(fp1); //닫기
	fclose(fp2);
	fclose(fp3);
	printf("\n2411849 이빛찬란");
	return 0;
}*/







/*int main(void)
{
	char t1[100]; //test3
	char t2[100]; //test4
	char buffer[100]; //t1입력받아서 변환할때 사용
	FILE* fp1, * fp2;
	char ch;
	printf("읽을 파일 이름:");
	scanf("%s", t1);
	printf("저장할 파일 이름:");
	scanf("%s", t2);
	fp1 = fopen(t1, "r"); //읽기모드
	if ((fp1 = fopen(t1, "r")) == NULL) {
		fprintf(stderr, "파일 열기 실패");
		exit(1);
	}
	fp2 = fopen(t2, "w"); //쓰기모드
	if ((fp2 = fopen(t2, "w")) == NULL) {
		fprintf(stderr, "파일 열기 실패");
		exit(1);
	}
	while (fgets(buffer, sizeof(buffer), fp1) != NULL) { //fp1이 끝날때까지 반복,buffer가 읽음
		for (int i = 0; buffer[i] != '\0'; i++) { //문자마다 비교
			if (islower(buffer[i])) { //소문자일때
				buffer[i] = toupper(buffer[i]); // 대문자로 변환
			}
			else {
				buffer[i] = tolower(buffer[i]); // 소문자로 변환
			}
		}
		fputs(buffer, fp2); //buffer에서 test4로 출력
		printf("%s", buffer); //변환된 줄 바로 출력
	}
	fclose(fp1);
	fclose(fp2);
	printf("2411849 이빛찬란");
	return 0;
}*/




