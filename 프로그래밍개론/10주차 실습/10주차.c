#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define ENTRIES 5 //�׸��� ��

/*void encrypt(char cipher[], int shift)
{
	int i=0;
	while (cipher[i] != '\0') { //������������ �ݺ�
		if (cipher[i] >= 'a' && cipher[i] <= 'z') { //�ҹ��ڿ� �ش��� ��츸 �ٲ�
			cipher[i] += shift;
			if (cipher[i] > 'z') //���ߴµ� ���� Ŀ����
				cipher[i] -= 26;// �ٽ� ��ȯ�ǰ�
		}
		i++;
	}
	printf("��ȣȭ�� ���ڿ�: %s", cipher);
}
int main(void)
{
	char origin[30]; //�迭����
	printf("���ڿ��� �Է��Ͻÿ�:");
	gets_s(origin, 30); //�Է¹���
	encrypt(origin, 3);
	printf("\n2411849 �̺�����");
	return 0;
}*/

/*int main(void) {
	char dic[ENTRIES][2][30] = { //30�� �ܾ� ������ ���̹�����
		{"book","å"},
		{"boy","�ҳ�"},
		{"computer","��ǻ��"},
		{"language","���"},
		{"rain","��"},
	};
	char word[30]; //�Է¹��� �迭 ����
	printf("�ܾ �Է��Ͻÿ�:");
	scanf("%s", word); //�Է¹���
	for (int i = 0; i < ENTRIES; i++) { //�� ����ŭ Ž��
		if (strcmp(dic[i][0], word) == 0) { //���ܾ�� ��ġ�ϸ�
			printf("%s: %s\n", word, dic[i][1]); //�ѱ۶浵 ���
			printf("2411849 �̺�����");
			return 0;
		}
	}
	printf("�������� �߰ߵ��� ����\n2411849 �̺�����"); //Ž������
}*/

/*int main(void)
{
	char pass[100]; //password
	int len; int error=0;
	int num_count=0, upper_count=0, lower_count=0; //��,�� �����ڰ���
	printf("�н����带 �Է��Ͻÿ�:");
	gets_s(pass, sizeof(pass));
	len = strlen(pass);//���ڿ�����
	if (len < 7) {
		printf("��ȿ�� ��ȣ�� �ƴմϴ�");
		exit(1); //�ٷ� ����
	}
	for (int i = 0; i < len; i++) { //len>=7
		if (islower(pass[i]))
			++lower_count;
		if (isupper(pass[i]))
			++upper_count;
		if (isdigit(pass[i]))
			++num_count;
	}
	if (lower_count&&upper_count&&num_count) //��,��,���� ��� �ϳ��̻��������
		printf("���� ��ȣ�Դϴ�.");
	else
		printf("��ȿ�� ��ȣ�� �ƴմϴ�.");
	printf("\n2411849 �̺�����");
	return 0;
}*/

/*int main(void)
{
	int wc = count_word("I like c programming");
	printf("�ܾ��� ����: %d\n", wc);
	printf("2411849 �̺�����");
}
int count_word(char* s)
{
	int i,wc=0; //wc�� ���� ����
	int waiting = 1; //���ο� �ܾ ��ٸ��� ����
	for (i = 0; s[i] != '\0'; ++i) { //����� ���ǽ�
		if (isalpha(s[i])) { //���ĺ��϶�
			if (waiting) { //�������϶�
				wc++; //�ܾ�� ����
				waiting = 0;
			}
		}
		else //����,�����ȣ ������ waiting=1 ,�ٽ� �����·� ����
			waiting = 1;
	}
	return wc;
}*/


/*int main(void)
{
	char sol[100] = "meet at midnight"; //�ϵ��ڵ�
	char ans[100] = "____ __ ________";
	char ch;
	while (1) { //���⶧���� ���ѹݺ�
		printf("���ڿ��� �Է��Ͻÿ�:%s\n", ans); //ans�� ����Ǿ���
		printf("���ڸ� �����Ͻÿ�:");
		ch = getchar(); //�Է¹���
		if (check(sol,ans, ch) == 1)
			break;
		getchar(); //����Ű���
	}
	printf("\n2411849 �̺�����");
	return 0;
}
int check(char solution[], char answer[], char ch) 
{
	int i;
	for (i = 0; solution[i] != '\0'; i++) {
		if (solution[i] == ch) //�ش� ���ڰ� �¾ƾ�
			answer[i] = ch; // ��ġ ����
	}
	if (strcmp(solution, answer) == 0) //�����϶�
		return 1;
	else
		return 0;
}*/

int main() {
	char str[100];  // �Է� ���� ���ڿ�
	int freq[256] = { 0 };  // �� ������ �󵵸� ������ �迭, �ƽ�Ű�ڵ�� ���ؾ���.
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(str, sizeof(str));  //���ڿ� �Է�. scanf���� �̰Ž�ߵ� 
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ') {  // ���� ���ڰ� �ƴҶ���
			freq[str[i]]++; //�ε����� �ڵ����� ������ ��.
		}
	}
	for (int i = 0; i < 256; i++) {
		if (freq[i] > 0) { //1���̻� ���;� ���
			printf("%c: %d\n", i, freq[i]); //i�� �����̹Ƿ� %c�� �ؾ� �ƽ�Ű�ڵ� �����
		}
	}
	printf("\n2411849 �̺�����");
	return 0;
}





