#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void enterkey(void);

/* ブラックジャック */
int main(void)
{
	int pRand[100];
	int eRand[100];
	int i,j,q=1,qq=1,qqq=1;
	int pSum,eSum;
	int sum;
	int sele;
	int sele_2;
	int money = 100000;
	
	while(qq!=0){
		for(i=0; i<100; i++){
			pRand[i] = 0;
			eRand[i] = 0;
		}
		system("cls");
		printf( "\n ブラックジャック\n"
				"\n 合計２１をめざせ！！\n"
				"\n 掛け金１０００円！！\n"
				"\n 買ったら１０倍！！！\n"
				);
		enterkey();
		printf( "\n お金：%d \n",money);
		printf( "\n ゲームで遊びますか？\n"
				"\n 1.遊ぶ\n"
				"\n 2.遊ばない\n"
				);
		printf( "\n 入力：");
		scanf( "%d",&sele);
		switch(sele){
			case 1:
				q = 1;
				for(i=0; q!=0; ++i){
					system("cls");
					srand((unsigned)time(NULL));
					pRand[i] = rand()%10 + 1;
					if(i<2){
						printf( "\n %dつ目の値：%d \n",i+1 ,pRand[i]);
					} else if(i>=2){
						printf( "\n %dつ目の値：＊ \n",i+1);
					}
					sum = 0;
					for(j=0; j<100; j++){
						sum += pRand[j];
					}
					pSum = sum;
					if(i<2) {
						printf( "\n 合計：%d \n",pSum);
					} else if(i>=2) {
						printf( "\n 合計：＊ \n");
					}
					printf( "\n この値で勝負しますか？\n"
							"\n 1.勝負する\n"
							"\n 2.まだ足りない\n"
							);
					printf( "\n 入力：");
					scanf("%d",&sele_2);
					switch(sele_2){
						case 1:
							q = 0;
							break;
						case 2:
							system("cls");
							printf( "\n エンターキー押して\n");
							enterkey();
							break;
						default:
						exit(0);
					}
				}
				qqq = 1;
				for(i=0; qqq!=0; i++){
					srand((unsigned)time(NULL));
					eRand[i] = rand()%10 + 1;
					printf( "\n 相手の%dつ目の値：%d \n",i+1,eRand[i]);
					sum = 0;
					for(j=0; j<100; j++){
						sum += eRand[j];
					}
					eSum = sum;
					enterkey();
					if((eSum>17&&eSum<=21)||eSum>21){
						qqq = 0;
					}
				}
				printf( "\n 自分：%d	相手：%d \n",pSum ,eSum);
				if(pSum==eSum||pSum>21||((eSum>=1&&eSum<=21)&&eSum>pSum)){
					printf( "\n===============\n"
							"\n 負け\n"
							"\n===============\n"
							);
					money -= 1000;
				} else {
					printf( "\n===============\n"
							"\n 勝ち\n"
							"\n===============\n"
							);
					money += 10000;
				}
				enterkey();
				break;
			case 2:
				qq = 0;
				break;
			default:
				exit(0);
		}
	}
	return 0;
}

void enterkey(void)
{
	char c;
	c = getchar();
	system("cls");
}