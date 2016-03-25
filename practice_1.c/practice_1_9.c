/* practice_1_9.c */
/* YusukeKato */
/* 2016.3.25 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define HP 100
#define POWER 10

void enterkey(void);
void ste(void);
void save_write(void);
void save_read(void);
void start(void);
void make_char(void);
void pro(void);
int story_1(void);
int story_2(void);
int story_3(void);
int story_4(void);
int story_5(void);
int story_6(void);
int story_7(void);
int story_8(void);
int story_9(void);
int story_10(void);
int story_11(void);
int story_12(void);
int battle(int ene);
void menu(void);
void shop(void);
void inn(void);
void ikikaeru(void);
int end(int flag_end);

static char key;
/*  */
static char name[100];
static int hp = 100,power = 10,money = 1000,kusa = 0;
/*  */
static char name_1[100];
static int hp_1 = 80, power_1 = 10;
static char name_2[100];
static int hp_2 = 50, power_2 = 5;
static char name_3[100];
static int hp_3 = 40, power_3 = 10;
static char name_4[100];
static int hp_4 = 150, power_4 = 20;
static char name_5[100];
static int hp_5 = 120, power_5 = 50;
/*  */
static char ene_name[100];
static int ene_hp = 50, ene_power = 5,ene_money = 10;
/*  */
static int flag = 1, flag_end = 0;
static int nakama_1 = 0, nakama_2 = 0, nakama_3 = 0, nakama_4 = 0, nakama_5 = 0;
/* 選択の記録 */
static int flag_1_1 = 0, flag_1_2 = 0, flag_1_3 = 0, flag_1_4 = 0;
static int flag_2_1 = 0, flag_2_2 = 0, flag_2_3 = 0, flag_2_4 = 0;
static int flag_3_1 = 0, flag_3_2 = 0, flag_3_3 = 0, flag_3_4 = 0;

int main(void)
{
	start();
	make_char();
	pro();
	while(flag!=13||flag!=14||flag!=15||flag!=16||flag!=17){
		switch(flag){
			case 1:
				flag = story_1();//始め、村
				break;
			case 2:
				flag = story_2();//旅人
				break;
			case 3:
				flag = story_3();//森
				break;
			case 4:
				flag = story_4();//洞窟
				break;
			case 5:
				flag = story_5();//泥棒
				break;
			case 6:
				flag = story_6();//街
				break;
			case 7:
				flag = story_7();//魔法使い
				break;
			case 8:
				flag = story_8();//雪国
				break;
			case 9:
				flag = story_9();//海
				break;
			case 10:
				flag = story_10();//龍
				break;
			case 11:
				flag = story_11();//湖
				break;
			case 12:
				flag = story_12();//魔王城
				break;
			default:
				printf("\n 終了・・・・・・\n");
				exit(0);
		}
	}
	end(flag);
	return 0;
}

/* 始め */
void start(void)
{
	printf( "\n 始まります・・・・・・\n"
			"\n enterkey\n");
	enterkey();
}

/* プロローグ */
void pro(void)
{
	printf( "\n 今から千年前、伝説の勇者は\n"
			"\n 恐ろしき魔王とその手下たちを滅ぼす。\n"
			);
	enterkey();
	printf( "\n そして、世界に平和が訪れ、\n"
			"\n 人は自由を手に入れ、豊かな生活を送っていた。\n"
			);
	enterkey();
	printf( "\n しかし、今、その平和は崩れようとしている。\n"
			"\n 突如現れた魔王は再び世界征服のために動き出した・・・・・・\n"
			);
	enterkey();
}

/* 物語１ */
int story_1(void)
{
	int sele;
	int story;
	
	save_write();
	
	printf( "\n 一章\n"
			"\n 冒険の始まり\n"
			);
	enterkey();
	
	/* sele1(始) */ 
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
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n 朝食は焼きたてのパンと牛乳だ。\n"
					"\n 見るからにおいしそう。\n"
					);
			enterkey();
			printf( "\n しかし、牛乳は腐っていた！！\n"
					"\n %sは５のダメージを受けた！！\n"
					,name
					);
			hp -= 5;
			flag_1_1 = 1;
			break;
		case 2:
			printf( "\n やっぱり、朝ご飯を抜くと力が出ないなぁ。\n"
					"\n おなかすいた・・・・・・\n"
					);
			enterkey();
			printf("\n %sの力が２下がった・・・・・・\n",name);
			power -= 2;
			flag_1_1 = 2;
			break;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	enterkey();
	ste();
	enterkey();
	/* sele1(終) */
	
	/* sele2(始) */ 
	printf( "\n 家から出ると、そこには田中がいた。\n"
			"\n 田中「%s、旅に出るんだって？」\n"
			"\n 田中「大変だな、何か役に立つものやるよ」\n"
			"\n 田中「選んでくれ」\n"
			,name
			);
	enterkey();
	printf( "\n どれをもらう？\n"
			"\n 1.銀の剣\n"
			"\n 2.鉄の盾\n"
			"\n 3.薬草１ダース\n"
			);
	printf("\n 入力：");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n 光輝く銀の剣、\n"
					"\n どんなものでも切れそうだ。\n"
					);
			enterkey();
			printf( "\n しかし、その剣は呪われていた\n"
					"\n １０のダメージ！！\n"
					);
			hp -= 10;
			flag_1_2 = 1;
			break;
		case 2:
			printf( "\n とても頑丈そうな鉄の盾、\n"
					"\n 手になじむ良い盾だ\n"
					);
			printf("\n %sの力が３上がった！！\n",name);
			power += 3;
			flag_1_2 = 2;
			break;
		case 3:
			printf( "\n 薬草は必需品だ。\n"
					"\n たくさん持っていこう！！\n"
					);
			enterkey();
			printf("\n %sの体力が１２増えた！！\n",name);
			hp += 12;
			flag_1_2 = 3;
			break;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	enterkey();
	ste();
	enterkey();
	/* sele2(終) */
	
	menu();//メニュー
	
	/* sele3(始) */ 
	printf( "\n 生まれ育った村に別れを告げ、\n"
			"\n ついに旅に出た。\n"
			"\n 雲一つない青い空がどこまでも広がっている。\n"
			"\n 限りなく広がる草原を歩く。\n"
			);
	enterkey();
	printf( "\n 遠くのほうから何かがやってくるのがかすかに見えた。\n"
			"\n 明らかに人の声ではない鳴き声が聞こえる。\n"
			"\n どうやら魔物のようだ・・・・・・\n"
			);
	enterkey();
	printf( "\n 魔物はどんなやつ？\n"
			"\n 1.黒っぽい\n"
			"\n 2.黄色っぽい\n"
			"\n 3.赤っぽい\n"
			);
	printf("\n 入力：");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			battle(1);
			flag_1_3 = 1;
			break;
		case 2:
			battle(2);
			flag_1_3 = 2;
			break;
		case 3:
			battle(3);
			flag_1_3 = 3;
			break;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	/* sele3(終) */
	
	/* sele4(始) */ 
	printf( "\n 一つ目の村に着いた。\n"
			"\n のんびりとした穏やかな村だ。\n"
			"\n しかし、近くにいた村人に話を聞いてみると、\n"
			"\n 近くの森に凶暴な魔物が現れて困っているらしい。\n"
			);
	enterkey();
	printf( "\n どうする？\n"
			"\n 1.宿に泊って疲れを癒す\n"
			"\n 2.一緒に旅をする仲間を探す\n"
			"\n 3.森の凶暴な魔物を倒しに行く\n"
			);
	printf("\n 入力：");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n その村には宿が３つあった。\n"
					"\n ３つの宿にはそれぞれ特徴がある。\n"
					);
			enterkey();
			printf( "\n どこにする？\n"
					"\n 1.料理がおいしい宿\n"
					"\n 2.ふかふかベットがある宿\n"
					"\n 3.有名な温泉がある宿\n"
					);
			printf("\n 入力：");
			scanf("%d",&sele);
			enterkey();
			switch(sele){
				case 1:
					printf( "\n 料理がおいしい宿に泊まった。\n"
							"\n ここの料理を食べれば、力がみなぎってくる！！\n"
							);
					enterkey();
					printf( "\n 力が１０上がった！！\n");
					power += 10;
					flag_1_4 = 1;
					story = 3;
					break;
				case 2:
					printf( "\n ふかふかベットがある宿に泊まった。\n"
							"\n このベットならよい夢が見れそうだ。\n"
							);
					enterkey();
					printf( "\n 紫の魔女「あなたも旅をしているの？」\n"
							"\n 同じ宿に泊まっている見知らぬ魔法使いが話しかけてきた。\n"
							);
					enterkey();
					printf( "\n 紫の魔女「私も旅をしているんだけど、一人だといろいろ大変でね」\n"
							"\n 紫の魔女「どう、一緒に旅をしない？」\n"
							);
					enterkey();
					printf( "\n 紫の魔女が仲間になった。\n");
					strncpy(name_3,"紫の魔女",sizeof(name_3));
					flag_1_4 = 2;
					nakama_3 = 1;
					story = 7;
					break;
				case 3:
					printf( "\n 有名な温泉がある宿に泊まった。\n"
							"\n ここの温泉に入れば、疲れなんか吹き飛ぶ！！\n"
							);
					enterkey();
					printf( "\n 体力が３０増えた！！\n");
					hp += 30;
					flag_1_4 = 3;
					story = 3;
					break;
				default:
					printf("\n 終了・・・・・・\n");
					exit(0);
			}
			break;
		case 2:
			printf( "\n 仲間を探すことにした。\n"
					"\n 村を歩き回っていると、一人の旅人を見つけた。\n"
					);
			enterkey();
			printf( "\n ごつい旅人「仲間を探しているのか？」\n"
					"\n ごつい旅人「ちょうど俺も一人では厳しいと考えていたところだ」\n"
					"\n ごつい旅人「よろしくな」\n"
					);
			enterkey();
			printf("\n ごつい旅人が仲間になった。\n");
			strncpy(name_1,"ごつい旅人",sizeof(name_1));
			flag_1_4 = 4;
			nakama_1 = 1;
			story = 2;
			break;
		case 3:
			printf( "\n 森へやってくると、重苦しい気配を感じた。\n"
					"\n 奥のほうから唸り声が聞こえる。\n"
					);
			enterkey();
			printf( "\n どうする？\n"
					"\n 1.奥へ進む\n"
					"\n 2.全力で逃げる\n"
					);
			printf("\n 入力：");
			scanf("%d",&sele);
			enterkey();
			switch(sele){
				case 1:
					printf("\n %sは森の奥へ進んだ。\n",name);
					enterkey();
					printf("\n なんとそこにいたのは龍だった！！！\n");
					enterkey();
					battle(4);
					printf("\n 倒した赤い龍が起き上がってきた。\n");
					enterkey();
					printf("\n 赤い龍が仲間になった。\n");
					strncpy(name_4,"赤い龍",sizeof(name_4));
					nakama_4 = 1;
					flag_1_4 = 5;
					story = 10;
					break;
				case 2:
					printf( "\n %sは全力で逃げ出した。\n"
							"\n 今まで生きてきた中で一番の本気を出した。\n"
							,name
							);
					enterkey();
					printf( "\n しかし、何かが恐るべき速度で追ってきている。\n");
					enterkey();
					printf( "\n ついに、%sは振り返ってしまった。\n",name);
					enterkey();
					printf( "\n そこで見たのは、口から火を吹くドラゴンだった。\n");
					enterkey();
					printf( "\n %sは、その火に飲まれ死んでしまった・・・・・・\n",name
					);
					enterkey();
					flag_1_4 = 6;
					exit(0);
				default:
					exit(0);
			}
			break;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	enterkey();
	ste();
	enterkey();
	/* sele4(終) */
	
	return story;
}

/* 物語２（旅人） */
int story_2(void)
{
	int sele;
	int story;
	int ran_1, ran_2;
	
	save_write();
	
	printf( "\n 二章\n"
			"\n 旅人と旅人\n"
			);
	enterkey();
	
	/* sele1(始) */ 
	printf( "\n ごつい旅人とともに旅を続ける。\n"
			"\n 旅人は何十年も旅を続けているようで、\n"
			"\n 色々なことを知っていた。\n"
			);
	enterkey();
	printf( "\n ごつい旅人「この先、北へ向かえば深い谷がある」\n"
			"\n ごつい旅人「深い谷には恐ろしい魔物がいるらしい」\n"
			);
	enterkey();
	printf( "\n ごつい旅人「これを使って準備をしとけよ」\n");
	printf( "\n どっち？\n"
			"\n 1.薬草\n"
			"\n 2.パワー\n" 
			);
	printf("\n 入力：");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n 薬草を使った！！\n"
					"\n 体力が３０回復した！！\n"
					);
			hp += 30;
			enterkey();
			flag_2_1 = 1;
			break;
		case 2:
			printf( "\n パワーを使った！！\n"
					"\n 力が１０上がった！！\n"
					);
			power += 10;
			enterkey();
			flag_2_1 = 2;
			break;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele1(終) */
	
	/* sele2(始) */ 
	printf( "\n 深い谷への道を進む\n"
			"\n 木や草がまばらに生えている\n"
			);
	enterkey();
	printf( "\n ごつい旅人「あそこに生えているキノコがあるだろう？」\n"
			"\n ごつい旅人「あれを食べると体に何かが起こる」\n"
			);
	enterkey();
	printf( "\n 食べますか？ \n"
			"\n 1.食べる\n"
			"\n 2.食べない\n"
			);
	printf("\n 入力：");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			srand((unsigned)time(NULL));
			ran_1 = rand()%2 + 1;
			printf( "\n ”ナニカオコルダケ”を食べた\n"
					);
			enterkey();
			srand((unsigned)time(NULL));
			ran_2 = rand()%50 + 1;
			if(ran_1==1){
				printf("\n 体力が%d減った・・・・・・\n",ran_2);
				printf("\n 力が%d減った・・・・・・\n",ran_2);
				hp -= ran_2;
				power -= ran_2;
				if(hp<=0){
					printf("\n %sは死んでしまった・・・・・・\n",name);
					exit(0);
				} if(power<=0){
					power = 1;
				}
			} else if(ran_1==2){
				printf("\n 体力が%d増えた！！！\n",ran_2);
				printf("\n 力が%d増えた！！\n",ran_2);
				hp += ran_2;
				power += ran_2;
				hp_1 += ran_2;
				power_1 += ran_2;
			}
			enterkey();
			flag_2_2 = 1;
			break;
		case 2:
			printf( "\n ごつい旅人「そんなこと言わずに食べてみろよ」\n"
					);
			enterkey();
			printf( "\n 体力が１０上がった！！\n");
			printf( "\n 力が５上がった！！\n");
			hp += 10;
			power += 5;
			hp_1 += 10;
			power_1 += 5;
			flag_2_2 = 2;
			break;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele2(終) */
	
	/* sele3(始) */
	printf( "\n 深い谷へ向かう\n"
			);
	enterkey();
	printf( "\n ごつい旅人「もうすぐ着くはずだ」\n"
			"\n この道の遠くの方に谷が見えてきた。\n"
			);
	enterkey();
	printf( "\n ごつい旅人「まずい！ 何か来るぞ！」\n"
			);
	enterkey();
	printf( "\n 闘う？\n"
			"\n 1.闘う\n"
			"\n 2.逃げる\n"
			);
	printf("\n 入力：");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n 魔物が襲ってきた！！\n"
					);
			enterkey();
			battle(5);
			flag_2_3 = 1;
			break;
		case 2:
			printf( "\n 何とか逃げ切った・・・・・・\n"
					);
			enterkey();
			flag_2_3 = 2;
			break;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele3(終) */
	
	/* sele4(始) */
	printf( "\n 深い谷に着いた\n"
			);
	enterkey();
	printf( "\n ごつい旅人「この谷を渡らなければならない」\n"
			"\n ごつい旅人「橋が３本ある」\n"
			);
	enterkey();
	printf( "\n どの橋？\n"
			"\n 1.左の橋\n"
			"\n 2.真ん中の橋\n"
			"\n 3.右の橋\n"
			);
	printf("\n 入力：");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n 左の橋を渡る\n"
					);
			enterkey();
			printf( "\n 橋の真ん中へ来たところで\n"
					"\n 何かが近づいてくる気配を感じた\n"
					);
			enterkey();
			printf( "\n どうする？\n"
					"\n 1.ここで迎え撃つ\n"
					"\n 2.走って橋を渡り切る\n"
					"\n 3.橋から飛び降りる\n"
					);
			printf("\n 入力：");
			scanf("%d",&sele);
			switch(sele){
				case 1:
					printf( "\n ここで迎え撃つ！！！\n");
					enterkey();
					battle(6);
					flag_2_4 = 1;
					break;
				case 2:
					printf( "\n 橋を渡りきるため走った！！\n");
					enterkey();
					printf( "\n しかし、それよりも早く敵が迫ってきた！！\n");
					enterkey();
					battle(7);
					flag_2_4 = 2;
					break;
				case 3:
					printf( "\n 橋から飛び降りた！！\n");
					enterkey();
					printf( "\n 谷底へ落ちていく・・・・・・\n");
					enterkey();
					printf( "\n と、そのとき、何者かに受け止められた！\n");
					enterkey();
					printf( "\n なんとそれは ”大鳥” だった！！\n");
					enterkey();
					printf( "\n 大鳥は反対側へ送り届けてくれた\n");
					enterkey();
					printf( "\n 大鳥の上でちょっと休んだ！\n"
							"\n 体力が３０増えた！！\n"
							);
					hp += 30;
					flag_2_4 = 3;
					break;
				default:
					printf(" \n 終了・・・・・・\n");
					exit(0);
			}
			break;
		case 2:
			printf( "\n 真ん中の橋を渡る\n"
					);
			enterkey();
			printf( "\n 何かが近づいてくる気配を感じる！！\n"
					);
			enterkey();
			battle(7);
			flag_2_4 = 4;
			break;
		case 3:
			printf( "\n 右の橋を渡る\n");
			enterkey();
			printf( "\n 橋を渡り切ると、声をかけられた\n"
					);
			enterkey();
			printf( "\n 優しい泥棒「初めまして」\n"
					"\n 優しい泥棒「あなたたちが来るのを待ってました\n"
					);
			enterkey();
			printf( "\n 優しい泥棒が仲間になった\n"
					);
			nakama_2 = 1;
			flag_2_4 = 5;
			story = 5;
			return story;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele4(終) */
	
	printf( "\n 橋を渡り切るとその先は森だった\n"
			);
	
	story = 3;
	
	return story;
}

/* 物語３（森） */
int story_3(void)
{
	int ran_1,i;
	int sele;
	int story;
	
	save_write();
	
	printf( "\n 三章\n"
			"\n 森の抜け道\n"
			);
	enterkey();
	
	/* sele1(始) */
	printf( "\n 暗い森に着いた\n"
			"\n 恐ろしく静かだ\n"
			);
	enterkey();
	if(nakama_1==1){
		printf( "\n ごつい旅人「この森は危険が多い、きをつけろ」\n");
		enterkey();
	}
	printf( "\n 道というにはあんまりな道を進む\n"
			);
	enterkey();
	for(i=0; i<3;i++){
		printf( "\n 草むらが揺れた・・・・・・\n");
		srand((unsigned)time(NULL));
		ran_1 = rand()%2 + 1;
		if(ran_1==1){
			switch(i){
				case 0:
					battle(8);
					break;
				case 1:
					battle(9);
					break;
				case 2:
					battle(10);
					break;
				default:
					break;
			}
		}
		else
			printf( "\n 何も起こらなかった・・・・・・\n");
		enterkey();
	}
	ste();
	enterkey();
	/* sele1(終) */
	
	/* sele2(始) */
	printf( "\n 森の中を進む\n"
			);
	enterkey();
	printf( "\n 道が二つに分かれている\n"
			"\n 右の道はまっすぐな道\n"
			"\n 左の道は曲がりくねっている道\n"
			);
	enterkey();
	printf( "\n どっち？\n"
			"\n 1.右の道\n"
			"\n 2.左の道\n"
			);
	printf("\n 入力：");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n 右のまっすぐな道を進む\n"
					);
			enterkey();
			printf( "\n 薬草がたくさん生えていた！！\n"
					"\n 体力が３０増えた！！\n"
					);
			hp += 30;
			enterkey();
			flag_3_2 = 1;
			break;
		case 2:
			printf( "\n 左の曲がりくねった道を進む\n"
					);
			enterkey();
			printf( "\n 色とりどりな花が咲いていた\n"
					);
			enterkey();
			printf( "\n どれを食べる？\n"
					"\n 1.赤い花\n"
					"\n 2.青い花\n"
					"\n 3.白い花\n"
					);
			printf("\n 入力：");
			scanf("%d",&sele);
			switch(sele){
				case 1:
					printf( "\n 赤い花を食べた\n");
					enterkey(); 
					printf( "\n おいしい！！\n"
							"\n 体力が３０増えた！！\n");
					hp += 30;
					enterkey();
					break;
				case 2:
					printf( "\n 青い花を食べた\n");
					enterkey(); 
					printf( "\n 深みのあるいい味だ！！\n"
							"\n 体力が２０増えた！！\n"
							"\n 力が１０増えた！！\n");
					enterkey();
					hp += 20;
					power += 10;
					enterkey();
					break;
				case 3:
					printf( "\n 白い花を食べた\n");
					enterkey(); 
					printf( "\n いい歯ごたえだ！！\n"
							"\n 力が２０増えた！！\n");
					enterkey();
					power += 20;
					enterkey();
					break;
				default:
					break;
			}
			flag_3_2 = 2;
			break;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele2(終) */
	
	/* sele3(始) */
	printf( "\n さらに森の奥へ進む\n"
			);
	enterkey();
	if(flag_3_2==1){
		printf( "\n 光の届かない暗い森の中歩いていると\n"
				"\n 魔女と出会った\n"
				);
		enterkey();
		printf( "\n 紫の魔女「こんなところで人と会うなんて珍しいわね」\n"
				"\n 紫の魔女「この森を抜けたいんでしょ？」\n"
				"\n 紫の魔女「私が抜け道を教えてあげるわ」\n"
				);
		enterkey();
		printf( "\n 紫の魔女「この先の分かれ道を右に行きなさい」\n"
				"\n そういうと紫の魔女はどこかへ去っていった。\n"
				);
		enterkey();
		printf( "\n 道を進むと道が３本に分かれている\n"
				"\n 左の道は険しい\n"
				"\n 真ん中の道はやさしい\n"
				"\n 右の道は真っ暗で何も見えない\n"
				);
		enterkey();
		printf( "\n どの道を行く？\n"
				"\n 1.左の道\n"
				"\n 2.真ん中の道\n"
				"\n 3.右の道\n"
				);
		printf( "\n 入力：");
		scanf("%d",&sele);
	}
	if(flag_3_2==2){
		printf( "\n 道が３本に分かれている\n"
				"\n 左の道は荒れている道\n"
				"\n 真ん中の道はきれいな道\n"
				"\n 右の道は霧が深い\n"
				);
		enterkey();
		printf( "\n どの道？\n"
				"\n 1.左の道\n"
				"\n 2.真ん中の道\n"
				"\n 3.右の道\n"
				);
		printf("\n 入力：");
		scanf("%d",&sele);
		if(sele==1) sele = 4;
		else if(sele==2) sele = 5;
		else if(sele==3) sele = 6;
		enterkey();
	}
	switch(sele){
		case 1:
			printf( "\n 険しい道を進む\n"
					);
			enterkey();
			printf( "\n 通れる場所がないくらい、\n"
					"\n 木が折り重なって倒れている\n"
					);
			enterkey();
			printf( "\n 木が倒れてきた！！\n"
					);
			enterkey();
			printf( "\n どうする？\n"
					"\n 1.左にとんでよける\n"
					"\n 2.右にとんでよける\n"
					"\n 3.倒れてきた木を受け止める\n"
					);
			printf( "\n 入力：");
			scanf("%d",&sele);
			system("cls");
			switch(sele){
				case 1:
					printf("\n なんとかよけ切った！！\n");
					enterkey();
					flag_3_3 = 1;
					break;
				case 2:
					printf( "\n 足をつぶされた！！\n"
							"\n ２０のダメージ！！\n"
							);
					hp += 20;
					enterkey();
					flag_3_3 = 2;
					break;
				case 3:
					printf( "\n 受け止めてみせる！！\n");
					enterkey();
					if(power>=30){
						printf( "\n 何とか受け止めた！！\n"
								"\n 力が１０上がった！！\n");
						power += 10;
						enterkey();
					} else {
						printf( "\n 力が足りず受け止められなかった・・・・・・\n"
								"\n ２０のダメージ！！\n");
						enterkey();
					}
					flag_3_3 = 3;
					break;
				default:
					break;
			}
			break;
		case 2:
			printf( "\n 優しい道を進む\n"
					);
			enterkey();
			printf( "\n 太陽が差し込む花畑があった！！\n"
					"\n きれいな景色だ！！\n"
					);
			enterkey();
			printf( "\n 心が和んだ\n"
					"\n 体力が３０回復した！！\n"
					);
			hp += 30;
			enterkey();
			flag_3_3 = 4;
			break;
		case 3:
			enterkey();
			printf( "\n 真っ暗な道を進む\n"
					"\n 何も見えない・・・・・・\n"
					);
			enterkey();
			printf( "\n そのとき突然、周りが明るくなった！！\n"
					);
			enterkey();
			printf( "\n 何事かと思って振り返ると、\n"
					"\n そこには紫の魔女がいた\n"
					"\n 手には杖があり、それが明るく輝いている\n"
					);
			enterkey();
			printf( "\n 紫の魔女「本当にこの道に来たのね」\n"
					"\n 紫の魔女「この道を進めば森を抜けられるわ」\n"
					);
			enterkey();
			printf( "\n 紫の魔女が仲間になった！！！\n"
					);
			nakama_3 = 1;
			flag_3_3 = 5;
			story = 7;
			return story;
		case 4:
			printf( "\n 荒れた道を進む\n"
					);
			enterkey();
			printf( "\n 歩くのもままならない\n"
					"\n 疲れて頭も回らなくなってきた\n"
					);
			enterkey();
			printf( "\n 木が動いているようにみえる\n"
					);
			enterkey();
			printf( "\n 木が襲ってきた！！！\n"
					);
			enterkey();
			battle(11);
			flag_3_3 = 6;
			break;
		case 5:
			printf( "\n きれいな道を通る\n"
					"\n 人によって舗装されている\n"
					);
			enterkey();
			if(nakama_1==1)
				printf( "\n ごつい旅人「この道は街に続いているぜ」\n");
			printf( "\n 標識を見ると”この先、街”とある\n"
					);
			enterkey();
			flag_3_3 = 7;
			story = 6;
			return story;
		case 6:
			printf( "\n 霧が深い道を進む\n"
					);
			enterkey();
			printf( "\n ひたすら進むと開けた場所に出た\n"
					);
			enterkey();
			printf( "\n そこは湖だった・・・・・・\n"
					);
			flag_3_3 = 8;
			story = 11;
			return story;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele3(終) */
	
	/* sele4（始） */
	printf( "\n 森の奥深いところまで来た\n"
			"\n ただならぬ気配を感じる\n"
			);
	enterkey();
	printf( "\n 森の番人「ここは誰も立ち入ってはならぬ場所」\n"
			"\n 森の番人「今すぐ立ち去れ」\n"
			);
	enterkey();
	printf( "\n 闘う？\n"
			"\n 1.闘う\n"
			"\n 2.森を出る\n"
			);
	printf( "\n 入力：");
	scanf("%d",&sele);
	system("cls");
	switch(sele){
		case 1:
			battle(12);
			printf( "\n 森の中心に光り輝く宝石がある\n"
					);
			enterkey();
			printf( "\n 森の宝石を手に入れた！！\n"
					"\n 力が３０上がった！！\n"
					);
			power += 30;
			enterkey();
			printf( "\n 森を抜ける\n"
					);
			enterkey();
			flag_3_4 = 1;
			break;
		case 2:
			printf( "\n その場を去った\n"
					);
			enterkey();
			flag_3_4 = 2;
			break;
		default:
			break;
	}
	/* sele4（終） */
	printf("\n 森を抜けると、そこには洞窟があった\n"
			);
	enterkey();
	story = 4;
	return story;
}

/* 物語４（洞窟） */
int story_4(void)
{
	int sele;
	int ran_1;
	int sele_1,sele_2,sele_3;
	
	save_write();
	
	printf( "\n 四章\n"
			"\n 宝の在りか\n"
			);
	enterkey();
	
	/* sele1(始) */
	printf( "\n 洞窟に入った\n"
			);
	enterkey();
	if(nakama_1==1){
		printf( "\n ごつい旅人「どこに魔物が潜んでいるか分からない」\n"
				"\n ごつい旅人「気を付けろ」\n"
				);
		enterkey();
	}
	printf( "\n 洞窟の中は真っ暗で、\n"
			"\n 手に持っている松明だけが頼りだ\n"
			);
	enterkey();
	printf( "\n 甲高い鳴き声が聞こえる\n"
			);
	enterkey();
	printf( "\n 何かがぶつかってきた！！\n"
			);
	enterkey();
	printf( "\n ５のダメージ！！\n"
			);
	hp -= 5;
	if(hp<=0){
		printf( "\n %sは死んでしまった・・・・・・\n",name
				);
		exit(0);
	}
	battle(13);
	ste();
	enterkey();
	/* sele1(終) */
	
	/* sele2(始) */
	printf( "\n 洞窟を進んでいく\n"
			);
	enterkey();
	printf( "\n ”ナニカオコルダケ”を見つけた！！\n"
			);
	enterkey();
	printf( "\n どっちを食べる？\n"
			"\n 1.赤いキノコ\n"
			"\n 2.青いキノコ\n"
			"\n 3.食べない\n"
			);
	printf("\n 入力：");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			srand((unsigned)time(NULL));
			ran_1 = rand()%30 + 1;
			printf( "\n 力が%d上がった！！\n",ran_1
					);
			power += 30;
			enterkey();
			flag = 1;
			break;
		case 2:
			srand((unsigned)time(NULL));
			ran_1 = rand()%50 + 1;
			printf( "\n 体力が%d上がった！！\n",ran_1
					);
			hp += ran_1;
			enterkey();
			flag = 2;
			break;
		case 3:
			printf( "\n 食べずに終わった・・・・・・\n"
					);
			break;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele2(終) */
	
	/* sele3(始) */
	printf( "\n 洞窟をさらに進む\n"
			);
	enterkey();
	printf( "\n 開けた場所に出た\n"
			"\n 不気味な扉が４つある\n"
			);
	enterkey();
	printf( "\n レバーが２つあり、\n"
			"\n それぞれ左右どちらかに倒せる\n"
			);
	enterkey();
	printf( "\n １つ目のレバー\n"
			"\n 1.左\n"
			"\n 2.右\n"
			);
	printf("\n 入力：");
	scanf("%d",&sele_1);
	system("cls");
	printf( "\n ２つ目のレバー\n"
			"\n 1.左\n"
			"\n 2.右\n"
			);
	printf("\n 入力：");
	scanf("%d",&sele_2);
	system("cls");
	if(sele_1==0&&sele_2==0){
		printf( "\n １の扉が開いた・・・・・・\n"
				);
		enterkey();
		printf( "\n 薬草を見つけた！！\n"
				"\n 体力が６０増えた！！\n"
				);
		hp += 60;
		enterkey();
	} else if(sele_1==1&&sele_2==0){
		printf( "\n ２の扉が開いた・・・・・・\n"
				);
		enterkey();
		printf( "\n パワーを見つけた！！\n"
				"\n 力が２０上がった！！\n"
				);
		power += 20;
		enterkey();
	} else if(sele_1==0&&sele_2==1){
		printf( "\n ３の扉が開いた・・・・・・\n"
				);
		enterkey();
		battle(14);
	} else if(sele_1==1&&sele_2==1){
		printf( "\n ４の扉が開いた・・・・・・\n"
				);
		enterkey();
		printf( "\n まぶしい光に思わず目をつぶった！\n"
				);
		enterkey();
		printf( "\n そこは出口だった！！\n"
				);
		enterkey();
		return 5;
	} else {
		printf( "\n 終了・・・・・・\n"
				);
		exit(0);
	}
		ste();
	enterkey();
	/* sele3(終) */
	
	/* sele4(始) */
	printf( "\n 洞窟の中をさらに進んでいく\n"
			);
	enterkey();
	printf( "\n 大きく不気味な扉にぶつかった\n"
			"\n ただならぬ気配を感じる・・・・・・\n"
			);
	enterkey();
	printf( "\n 巨大な扉を押すとそれは簡単に開いた\n"
			);
	enterkey();
	printf( "\n 扉の中に入る\n"
			);
	enterkey();
	printf( "\n そこには何かがいた\n"
			);
	enterkey();
	battle(15);
	printf( "\n 洞窟を抜けた・・・・・・\n"
			);
	enterkey();
	ste();
	enterkey();
	/* sele4(終) */
	
	return 0;
}

/* 物語５（泥棒、盗賊、怪盗） */
int story_5(void)
{
	save_write();
	
	printf( "\n 五章\n"
			"\n 怪盗参上\n"
			);
	enterkey();
	
	return 0;
}

/* 物語６（街） */
int story_6(void)
{
	save_write();
	
	printf( "\n 六章\n"
			"\n 賑やかな街\n"
			);
	enterkey();
	
	return 0;
}

/* 物語７（魔法使い） */
int story_7(void)
{
	save_write();
	
	printf( "\n 七章\n"
			"\n 旅する魔女\n"
			);
	enterkey();
	
	return 0;
}

/* 物語８（雪国） */
int story_8(void)
{
	save_write();
	
	printf( "\n 八章\n"
			"\n 極寒の地にて\n"
			);
	enterkey();
	
	return 0;
}

/* 物語９（海） */
int story_9(void)
{
	save_write();
	
	printf( "\n 九章\n"
			"\n 船上の戦場 \n"
			);
	enterkey();
	
	return 0;
}

/* 物語１０（龍） */
int story_10(void)
{
	save_write();
	
	printf( "\n 十章\n"
			"\n 空の王者\n"
			);
	enterkey();
	
	return 0;
}

/* 物語１１（湖） */
int story_11(void)
{
	save_write();
	
	printf( "\n 十一章\n"
			"\n 湖の精霊\n"
			);
	enterkey();
	
	return 0;
}

/* 物語１２（魔王城） */
int story_12(void)
{
	save_write();
	
	printf( "\n 十二章\n"
			"\n 終わりの闘い\n"
			);
	enterkey();
	
	return 0;
}

/* 終わり */
int end(int flag_end)
{
	switch(flag_end){
		case 13:
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		default:
			printf("\n end_default\n");
			break;
	}
	printf("\n 終わります・・・・・・\n\n");
	
	return 0;
}

/* 戦闘 */
int battle(int ene)
{
	int power_save;
	int ene_power_save;
	
	/* 敵選択 */
	switch(ene){
		case 0:
			if(flag==1){
				strncpy(ene_name,"初心者",sizeof(ene_name));
				ene_hp = 20;
				ene_power = 2;
				ene_money = 20;
			} else if(flag==6){
				strncpy(ene_name,"中堅",sizeof(ene_name));
				ene_hp = 200;
				ene_power = 20;
				ene_money = 100;
			}
		case 1:
			strncpy(ene_name,"こげたもの",sizeof(ene_name));
			ene_hp = 30;
			ene_power = 3;
			ene_money = 100;
			break;
		case 2:
			strncpy(ene_name,"とうもろこしおばけ",sizeof(ene_name));
			ene_hp = 20;
			ene_power = 5;
			ene_money = 100;
			break;
		case 3:
			strncpy(ene_name,"トマトマト",sizeof(ene_name));
			ene_hp = 20;
			ene_power = 10;
			ene_money = 100;
			break;
		case 4:
			strncpy(ene_name,"赤い龍",sizeof(ene_name));
			ene_hp = 70;
			ene_power = 15;
			ene_money = 500;
			break;
		case 5:
			strncpy(ene_name,"小鳥",sizeof(ene_name));
			ene_hp = 120;
			ene_power = 10;
			ene_money = 700;
			break;
		case 6:
			strncpy(ene_name,"中鳥",sizeof(ene_name));
			ene_hp = 150;
			ene_power = 15;
			ene_money = 900;
			break;
		case 7:
			strncpy(ene_name,"大鳥",sizeof(ene_name));
			ene_hp = 200;
			ene_power = 20;
			ene_money = 1500;
			break;
		case 8:
			strncpy(ene_name,"つのうさぎ",sizeof(ene_name));
			ene_hp = 100;
			ene_power = 15;
			ene_money = 300;
			break;
		case 9:
			strncpy(ene_name,"爆弾魔",sizeof(ene_name));
			ene_hp = 50;
			ene_power = 40;
			ene_money = 500;
			break;
		case 10:
			strncpy(ene_name,"森のあくま",sizeof(ene_name));
			ene_hp = 300;
			ene_power = 10;
			ene_money = 1000;
			break;
		case 11:
			strncpy(ene_name,"動く木",sizeof(ene_name));
			ene_hp = 200;
			ene_power = 20;
			ene_money = 1200;
			break;
		case 12:
			strncpy(ene_name,"森の番人",sizeof(ene_name));
			ene_hp = 300;
			ene_power = 20;
			ene_money = 1500;
			break;
		case 13:
			strncpy(ene_name,"こう もりお",sizeof(ene_name));
			ene_hp = 200;
			ene_power = 10;
			ene_money = 200;
			break;
		case 14:
			strncpy(ene_name,"黄の龍",sizeof(ene_name));
			ene_hp = 300;
			ene_power = 20;
			ene_money = 2000;
			break;
		case 15:
			strncpy(ene_name,"何か",sizeof(ene_name));
			ene_hp = 300;
			ene_power = 20;
			ene_money = 3000;
			break;
		default:
			exit(0);
	}
	power_save = power;//主人公の力を保存、最後に戻す
	ene_power_save = ene_power;//敵の力の保存、最後に必要
	printf("\n %sがあらわれた！！\n",ene_name);
	enterkey();
	for(;;){
		printf("\n %sの攻撃！！\n\n %dのダメージ！！\n",name ,power);
		enterkey();
		ene_hp -= power;
		if(nakama_1==1){
			printf("\n %sの攻撃！！\n\n %dのダメージ！！\n",name_1 ,power_1);
			enterkey();
			ene_hp -= power_1;
		} if(nakama_2==1){
			printf("\n %sは%sの力を下げた！！\n",name_2 ,ene_name);
			enterkey();
			ene_power -= power_2;
		} if(nakama_3==1){
			printf("\n %sは%sの力を上げた！！\n",name_3 ,name);
			enterkey();
			power += power_3;
		} if(nakama_4==1){
			printf("\n %sの攻撃！！\n\n %dのダメージ！！\n",name_4 ,power_4);
			enterkey();
			ene_hp -= power_4;
		} if(nakama_5==1){
			printf("\n %sは%sを回復させた！！\n",name_5 ,name);
			enterkey();
			hp += power_5;
		}
		if(ene_hp<=0){
			printf( "\n %sを倒した！！\n"
					"\n 力が%d上がった！！\n"
					"\n %d円もらった！！\n"
					,ene_name ,ene_power,ene_money
					);
			power = power_save;
			power += ene_power_save;
			money += ene_money;
			if(nakama_1==1)
				power_1 += ene_power_save;
			if(nakama_2==1)
				power_2 += ene_power_save;
			if(nakama_3==1)
				power_3 += ene_power_save;
			if(nakama_4==1)
				power_4 += ene_power_save;
			if(nakama_5==1)
				power_5 += ene_power_save;
			enterkey();
			break;
		}
		printf( "\n %sの攻撃！！\n"
				"\n %dのダメージを受けた！！\n"
				,ene_name ,ene_power
				);
		hp -= ene_power;
		enterkey();
		ikikaeru();
		if(hp<=0){
			printf("\n %sは死んでしまった・・・・・・\n",name);
			exit(0);
		}	
	}
	ste();
	enterkey();
	return 0;
}

/* キャラクター作成 */
void make_char(void)
{
	int m_c;
	
	save_read();
	
	printf( "\n 新しく作る？\n"
			"\n 1.作る\n"
			"\n 2.このままでいく\n");
	printf("\n 入力：");
	scanf("%d",&m_c);
	switch(m_c){
		case 1:
			system("cls");
			printf( "\n 名前を決めて！！\n"
					"\n 入力："
					);
			scanf("%s",name);
			hp = HP;
			power = POWER;
			flag = 1;
			save_write();
			break;
		case 2:
			printf("\n このままでいくよ\n");
			enterkey();
			break;
		default:
			exit(0);
	}
}

/* エンターキー処理 */
void enterkey(void)
{
	key = getchar();
	system("cls");
}

void ste(void)
{
printf("\n %s 体力：%d  力：%d  生き返る草：%d\n",name ,hp ,power,kusa);
if(nakama_1==1)
	printf("\n %s 体力：%d  力：%d\n",name_1, hp_1, power_1);
if(nakama_2==1)
	printf("\n %s 体力：%d  力：%d\n",name_2, hp_2, power_2);
if(nakama_3==1)
	printf("\n %s 体力：%d  力：%d\n",name_3, hp_3, power_3);
if(nakama_4==1)
	printf("\n %s 体力：%d  力：%d\n",name_4, hp_4, power_4);
if(nakama_5==1)
	printf("\n %s 体力：%d  力：%d\n",name_5, hp_5, power_5);
}

void save_write(void)
{
	FILE *fp;
	fp = fopen("practice_data.txt","w");
	fprintf(fp,"%s\n",name);
	/*
	fprintf(fp,"%s %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",name,hp,power,money,flag,kusa,nakama_1,nakama_2,nakama_3,nakama_4,nakama_5,power_1,power_2,power_3,power_4,power_5);
	*/
	fclose(fp);
}

void save_read(void)
{
	FILE *fp;
	fp = fopen("practice_data.txt","r");
	fscanf(fp,"%s",name);
	printf( "\n 名前： %s\n"
				,name);
	fclose(fp);
}

void menu(void)
{
	int sele_menu;
	int loop = 1;
	
	while(loop!=0){
		printf( "\n==============================\n"
				" 選択してください\n"
				" 1.戦闘\n"
				" 2.ストーリー\n"
				" 3.お店\n"
				" 4.宿\n"
				" 5.終了\n"
				"==============================\n"
				);
		printf( "\n 入力：");
		scanf("%d",&sele_menu);
		system("cls");
		switch(sele_menu){
			case 1:
				printf( "\n 戦闘へむかう\n");
				enterkey();
				battle(0);
				break;
			case 2:
				printf( "\n ストーリーを進める\n");
				enterkey();
				loop = 0;
				break;
			case 3:
				printf( "\n 店に行く\n");
				enterkey();
				shop();
				break;
			case 4:
				printf( "\n 宿に泊まる\n");
				enterkey();
				inn();
				break;
			default:
				printf( "\n 終了・・・・・・\n");
				exit(0);
		}
	}
}

void shop(void)
{
	int sele_shop;
	int sele_shop_2;
	int loop = 1;
	
	while(loop!=0){
		printf( "\n ==============================\n"
				"\n 1.パワー（１０００円）（力＋１０）"
				"\n 2.生き返る草（５０００円）"
				"\n 3.終了\n"
				);
		printf( "\n 入力：");
		scanf( "%d",&sele_shop);
		printf( "\n いくつ？\n"
				"\n 入力："
						);
		scanf( "%d",&sele_shop_2);
		system("cls");
		if(sele_shop_2>0){
		} else {
			printf( "\n 入力エラー\n");
			sele_shop = 3;
			enterkey();
		}
		switch(sele_shop){
			case 1:
				if(money<1000*sele_shop_2){
					printf( "\n お金が足りません\n");
					enterkey();
					break;
				}
				printf( "\n パワーを%d個買った！！\n",sele_shop_2);
				printf( "\n 力が%d上がった！！\n",10*sele_shop_2);
				power += 10 * sele_shop_2;
				money -= 1000 * sele_shop_2;
				break;
			case 2:
				if(money<5000*sele_shop_2){
					printf( "\n お金が足りない\n");
					enterkey();
					break;
				}
				printf( "\n 生き返る草を%d個買った！！\n",sele_shop_2);
				kusa += sele_shop_2;
				money -= 5000 * sele_shop_2;
				break;
			case 3:
				loop = 0;
				break;
			default:
				break;
		}
	}	
}

void inn(void)
{
	printf( "\n ５００円かかります\n");
	enterkey();
	if(money<500){
		printf( "\n お金が足りない\n");
		enterkey();
	}else if(money>=500){
		printf( "\n 体力が２０回復した！！\n");
		hp += 20;
		money -= 500;
		enterkey();
	}
}

void ikikaeru(void)
{
	if(hp<=0){
		if(kusa>=1){
			kusa -= 1;
			printf( "\n 生き返る草を使って生き返った！！\n");
			hp = power;
			enterkey();
		}
	}
}
		

	/* sele1(始) */
	/*
	printf( 
			);
	enterkey();
	printf( 
			);
	printf("\n 入力：");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( 
					);
			enterkey();
			flag = 1;
			break;
		case 2:
			printf( 
					);
			enterkey();
			flag = 2;
			break;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	ste();
	enterkey();
	*/
	/* sele1(終) */