#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void enterkey(void);

/* ハイ＆ロー */
void main(void)
{
	int q;
	int sele;
	int sele_p;
	int ran;
	int ran_p;
	int i = 0;
	int money = 100000;
	
	while(q!=0){
		i += 1;
		printf( "\n お金：%d \n"
				"\n 「ハイ＆ロー」で遊びますか？(%d回目)\n"
				"\n 掛け金：%d円\n"
				"\n 勝ったら%d倍！！\n"
				"\n 1.遊ぶ\n"
				"\n 2.やめておく\n"
				"\n 入力："
				,money ,i ,i*1000 ,i*2
				);
		scanf( "%d",&sele);
		switch(sele){
			case 1:
				printf( "\n 「ハイ＆ロー」\n"
						"\n 基となる数字に対して\n"
						"\n 自分の数字が大きいか小さいか当てる\n"
						);
				enterkey();
				srand((unsigned)time(NULL));
				ran = rand()%12 + 2;
				printf( "\n\n 基となる数字：%d \n",ran);
				enterkey();
				srand((unsigned)time(NULL));
				ran_p = rand()%13 + 1;
				printf( "\n あなたの数字：＊ \n");
				enterkey();
				printf( "\n あなたの数字は %d より上？下？（1～13）\n"
						"\n 1.上\n"
						"\n 2.下\n"
						"\n 入力："
						,ran
						);
				scanf("%d",&sele_p);
				system("cls");
				printf( "\n 基となる数字：%d \n"
						"\n あなたの数字：%d \n"
						,ran ,ran_p
						);
				enterkey();
				if((ran>ran_p)&&sele_p==2) {
					printf( "\n==============\n"
							"\n   勝ち\n"
							"\n==============\n"
							);
					money += (i*1000)*(i*2);
				} else if((ran<ran_p)&&sele_p==1) {
					printf( "\n==============\n"
							"\n   勝ち\n"
							"\n==============\n"
							);
					money += (i*1000)*(i*2);
				} else if(ran==ran_p) {
					printf( "\n 数字が同じなら負け\n");
					printf( "\n==============\n"
							"\n   負け\n"
							"\n==============\n"
							);	
					money -= i*1000;
					i = 0;
				} else {
					printf( "\n==============\n"
							"\n   負け\n"
							"\n==============\n"
							);
					money -= i*1000;
					i = 0;
				}
				break;
			case 2:
				q = 0;
				break;
			default:
				break;
		}
	}
}

void enterkey(void)
{
	char c;
	c = getchar();
	system("cls");
}
