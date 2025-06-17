#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 100
typedef struct person { //�л� ����ü ����
	char name[SIZE]; //�̸�,�ּ�,��ȣ,Ư¡�� ���� char �迭�� ����
	char address[SIZE];
	char mobilephone[SIZE];
	char desc[SIZE];
} PERSON; //typedef�� ����

void menu() { //�޴�
	printf("======================\n");
	printf("1.�߰�\n");
	printf("2.����\n");
	printf("3.�˻�\n");
	printf("4.����\n");
	printf("======================\n");
}


void add_record(FILE* fp); // ���������͸� �޾Ƽ� ���� �߰��ϴ� �Լ�
PERSON get_record(); // �����ʹ� ����ڿ��� �ް�, ����ü ��ü�� ��ȯ��
void update_record(FILE* fp); // ���������͸� �޾Ƽ� Ư�� ����ü�� ����
void search_record(FILE* fp); //Ư�� �̸��� �����͸� ã�� �Լ�
void print_record(PERSON data); //����ü ������ �޾Ƽ� �����


int main(void)
{
	FILE* fp;
	int select;
	if ((fp = fopen("address.dat", "ab+")) == NULL) { //���� ������ ������� ����
		fprintf(stderr, "�Է��� ���� ������ �� �� �����ϴ�"); 
		exit(1);
	}
	while (1) { //4�Է� ������ ���ѹݺ��Ѵ�
		menu();		
		printf("�޴� ��ȣ�� �Է��Ͻÿ�: ");	
		scanf("%d", &select);
		while (getchar() != '\n'); // ���� ���� (��ȣ �Է� �� ���� ����) ; ������ ����
		switch (select) {
		case 1:	add_record(fp); break;	// �����͸� �߰��Ѵ�
		case 2:	update_record(fp); break;	// �����͸� �����Ѵ�
		case 3:	search_record(fp); break;	// �����͸� Ž���Ѵ�
		case 4:	printf("2411849 �̺�����"); return 0;
		}
	}
	fclose(fp); //���� �ݱ�
	return 0;
}

PERSON get_record()
{
	PERSON data;
	printf("�̸�: ");
	gets(data.name); //gets�� �̿��Ͽ� ���ڿ��� �Է¹޴´�
	printf("�ּ�: ");
	gets(data.address);
	printf("�޴���: ");
	gets(data.mobilephone);
	printf("Ư¡: ");
	gets(data.desc);

	return data; //��� ����� �Է¹��� �� ����ü ��ü�� ��ȯ
}

void print_record(PERSON data) //����ü ������ �޾Ƽ� �� ��� ���
{
	printf("�̸�: %s\n", data.name);
	printf("�ּ�: %s\n", data.address);
	printf("�޴���: %s\n", data.mobilephone);
	printf("Ư¡: %s\n", data.desc);
}


void add_record(FILE* fp)
{
	PERSON data;
	data = get_record();	//get_record�� ���� ����ü�� �Ű������� �����ϰ�
	fseek(fp, 0, SEEK_END);	// ���������͸� �ǵڷ� �ű�ڿ�(�̾��)
	fwrite(&data, sizeof(data), 1, fp);	// data���� fp�� ����
}

void search_record(FILE* fp)
{
	char name[SIZE];
	PERSON data;
	fseek(fp, 0, SEEK_SET);	// ������ ó������ ���� ��
	printf("Ž���ϰ��� �ϴ� ����� �̸�: ");
	gets(name);		// 2. gets�� �̿��Ͽ� Ž���ϰ��� �ϴ� ����� �̸��� �Է� �ޱ�
	while (!feof(fp)) {		// ������ ������ �ݺ��Ѵ�
		fread(&data, sizeof(data), 1, fp); //data�� fp�� �о��
		if (strcmp(data.name, name) == 0) {	// data�� ����� ����� �Է¹��� �̸��� ���ؾ� �� - strcmp �Լ� ���
			print_record(data);
			break;
		}
	}
}
void update_record(FILE* fp)
{
	char name[SIZE];
	PERSON data;
	FILE* fp1; //tmp.dat�� ����������

	if ((fp1 = fopen("tmp.dat", "wb")) == NULL) { //���ο� �������� ������� ����
		fprintf(stderr, "���� tmp.dat�� �� �� �����ϴ�");
		exit(1);
	}
	
	fseek(fp, 0, SEEK_SET);	// ������ ó������ ����
	printf("�����ϰ��� �ϴ� ����� �̸�: ");
	gets(name);		// �̸��� �Է¹޴´�
	while (fread(&data, sizeof(data), 1, fp) == 1) {    // ������ ������ �ݺ��Ѵ� data�� �о��
		if (strcmp(data.name, name) == 0) {	// �̸� ������
			data = get_record(); //������ �Է¹ް�
		}
		fwrite(&data, sizeof(data), 1, fp1);  // ���� ��ġ���� data���� fp1���� ������ ����
	}
	fclose(fp1);
	fclose(fp);
	remove("address.dat"); //�������� ����
	rename("tmp.dat", "address.dat"); //�̸� ����
	if ((fp = fopen("address.dat", "a+")) == NULL) {
		fprintf(stderr, "���� address.dat�� �� �� �����ϴ�");
		exit(1);
	}
}


/*int main(void)
{
	FILE* pf = NULL; //���������� �ʱ�ȭ
	char buffer[500]; //������ ���� �������
	int num = 1; 
	pf = fopen("proverbs.txt", "r"); //pf�� proverbs�ּҸ� ���� ,�������� �ּ� �����ؼ� \��/�� �ٲٰ� +/�����̸�.txt(��ü���)
	if (pf == NULL) {
		printf("���� ���� ����"); 
		return 0;
	}
	while (fgets(buffer,sizeof(buffer),pf)!=NULL) //pf����buffer�� ���ڿ��� ����
	{
		printf("%d: %s", num, buffer);
		num++; //��ȣ ����
	}
	fclose(pf);
	printf("2411849 �̺�����");
	return 0;
}*/


/*int main(void)
{
	FILE* src_file, * dst_file; //���������� �ΰ� ����
	unsigned char buffer[1024]; //���İ��� �������
	int r_count; //�д� ����Ʈ��
	src_file = fopen("C:/Users/2023user/OneDrive/���� ȭ��/���α׷��ְ���/13���� �ǽ�/dog.jpg", "rb"); //���� ���� �б���� ����
	dst_file = fopen("copy.jpg", "wb"); // ���� ���� ������� ����
	if (src_file==NULL||dst_file==NULL) { //������Ȳ(���߿� �ϳ��� null)
		fprintf(stderr, "���� ���� ����\n");
		return 1;
	}
	while ( (r_count= fread(buffer, sizeof(unsigned char), sizeof(buffer), src_file))>0) {//buffer���� �д� ����Ʈ �� ��ȯ, sizeof(unsigned char)�� �� �׸��� ũ��
		int w_count= fwrite(buffer, 1, r_count, dst_file); //buffer���� dst�� ���� ����Ʈ ��ȯ
		if (w_count < 0) { //buffer���� dst�� ���ٰ� ����
			fprintf(stderr, "���� ���� ����\n");
			return 1;
		}
		if (w_count < r_count) { //������>���� ����
			fprintf(stderr, "�̵�� ���� ����\n");
			return 1;
		}
	}
	printf("copy.jpg�� �̹��� ������ �����\n");
	fclose(src_file);
	fclose(dst_file);
	printf("2411849 �̺�����");
	return 0;
}*/


/*int main(int argc, char* argv[]) //���� ����, �����̸��� ��Ÿ���� ������ �迭
{
	FILE* fp1, * fp2, * fp3;
	char file1[100], file2[100], file3[100]; //�����̸� ��������
	char buffer[100];
	if (argc >= 4) { //�Ű������� 4������ �����ؾ���(argc����)
		strcpy(file1, argv[1]); //argv[1]�� �̸��� file1�� �ٿ��ֱ� �ε��� 1���� ������
		strcpy(file2, argv[2]);//argv[2]�� �̸��� file2�� �ٿ��ֱ�
		strcpy(file3, argv[3]);//argv[3]�� �̸��� file3�� �ٿ��ֱ�
	}
	else
	{
		printf("�μ��� �����մϴ�.\n");
		return 0;
	}
	printf("%s ���� + %s ������ %s ���Ϸ� �����մϴ�.\n", file1, file2, file3);
	if ((fp1 = fopen(file1, "r")) == NULL) { //file���� ����(�б���)
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n",file1);
		exit(1);
	}
	if ((fp2 = fopen(file2, "r")) == NULL) {
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file2);
		exit(1);
	}
	if ((fp3 = fopen(file3, "w")) == NULL) { //������
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file3);
		exit(1);
	}
	while (fgets(buffer, sizeof(buffer), fp1) != NULL) { //buffer�� �Է�
		fputs(buffer, fp3); //file3�� ���
	}

	while (fgets(buffer, sizeof(buffer), fp2) != NULL) { //buffer�� �Է�
			fputs(buffer, fp3); //file3�� ���
	}
	fclose(fp1); //�ݱ�
	fclose(fp2);
	fclose(fp3);
	printf("\n2411849 �̺�����");
	return 0;
}*/







/*int main(void)
{
	char t1[100]; //test3
	char t2[100]; //test4
	char buffer[100]; //t1�Է¹޾Ƽ� ��ȯ�Ҷ� ���
	FILE* fp1, * fp2;
	char ch;
	printf("���� ���� �̸�:");
	scanf("%s", t1);
	printf("������ ���� �̸�:");
	scanf("%s", t2);
	fp1 = fopen(t1, "r"); //�б���
	if ((fp1 = fopen(t1, "r")) == NULL) {
		fprintf(stderr, "���� ���� ����");
		exit(1);
	}
	fp2 = fopen(t2, "w"); //������
	if ((fp2 = fopen(t2, "w")) == NULL) {
		fprintf(stderr, "���� ���� ����");
		exit(1);
	}
	while (fgets(buffer, sizeof(buffer), fp1) != NULL) { //fp1�� ���������� �ݺ�,buffer�� ����
		for (int i = 0; buffer[i] != '\0'; i++) { //���ڸ��� ��
			if (islower(buffer[i])) { //�ҹ����϶�
				buffer[i] = toupper(buffer[i]); // �빮�ڷ� ��ȯ
			}
			else {
				buffer[i] = tolower(buffer[i]); // �ҹ��ڷ� ��ȯ
			}
		}
		fputs(buffer, fp2); //buffer���� test4�� ���
		printf("%s", buffer); //��ȯ�� �� �ٷ� ���
	}
	fclose(fp1);
	fclose(fp2);
	printf("2411849 �̺�����");
	return 0;
}*/




