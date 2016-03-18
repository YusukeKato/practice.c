/* practice_9_1.c */
/* YusukeKato */
/* 2016.3.18 */
/* 遊び */
/* getchar();を使いたかった */
/* enterkey();は即席 */

#include <stdio.h>
#include <stdlib.h>

void enterkey(void);

int main(void)
{
	char a;//char-getchar(); int-scanf(); なんとなく
	printf("\n\n\n\t 始めますよ・・・・・・\n\n");
	enterkey();
	printf( "\n\n\t 選べ・・・・・・\n"
			"\n\t 1.食べる\n"
			"\n\t 2.食べない\n");
	printf("\n\t 入力：");
	//scanf("%d",&a);
	a = getchar();
	enterkey();
	switch(a)
	{
		case '1':
			printf("\n\n\t やったな！！\n\n");
			break;
		case '2':
			printf("\n\n\t そうか・・・・・・\n\n");
			break;
		default:
			printf("\n\n\t 自由、それは希望\n\n");
			break;
	}
	enterkey();
	printf("\n\n\n\t 終わりますよ・・・・・・\n\n");
	return 0;
}

void enterkey(void)
{
	char c;
	c = getchar();
	system("cls");
}