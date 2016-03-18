/* practice_1_2.c */
/* YusukeKato */
/* 2016.3.19 */

#include <stdio.h>
#include <stdlib.h>

void enterkey(void);
int pro(void);
int story_1(void);
int end(int end);

static char key;
static int hp = 100;
static int power = 10;

int main(void)
{
	pro();
	story_1();
	end(1);
	
	return 0;
}

/* プロローグ */
int pro(void)
{
	printf("\n 始まります・・・・・・\n");
	enterkey();
	printf( "\n 今から千年前、伝説の勇者は\n"
			"\n 恐ろしき魔王とその手下たちを滅ぼした。\n"
			"\n そして、世界に平和が訪れた。\n"
			"\n 人は自由を手に入れ、豊かな生活を送っていた。\n"
			"\n しかし、今、その平和は崩れようとしている。\n"
			"\n 突如現れた魔王は再び世界征服のために動き出した・・・・・・\n"
			);
	enterkey();
	
	return 0;
}

/* 物語１ */
int story_1(void)
{
	int sele1;
	
	printf( "\n 一章\n"
			"\n 冒険の始まり\n"
			);
	enterkey();
	/* sele1 */ 
	printf( "\n 朝、目が覚めた。\n"
			"\n 窓から差し込む光がまぶしい。\n"
			"\n 今日も良い一日が始まる、\n"
			"\n そんな気がした。\n"
			);
	enterkey();
	printf( "\n 朝ご飯は？\n"
			"\n 1.食べる\n"
			"\n 2.食べない\n"
			);
	printf("\n 入力：");
	scanf("%d",&sele1);
	enterkey();
	switch(sele1)
	{
		case 1:
			printf( "\n 誰かに毒を盛られた！！\n"
					"\n ５のダメージ！！\n"
					);
			hp -= 5;
			break;
		case 2:
			printf( "\n やっぱり、朝ご飯を抜くと力が出ないなぁ\n"
					"\n 力が２下がった・・・・・・\n"
					);
			power -= 2;
			break;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	enterkey();
	
	return 0;
}

int end(int end)
{
	switch(end)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			break;
	}
	printf("\n 終わります・・・・・・\n\n");
	
	return 0;
}

void enterkey(void)
{
	key = getchar();
	system("cls");
}

