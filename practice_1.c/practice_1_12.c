/* practice_1_12.c RPG */
/* YusukeKato */
/* 2016.3.18 */
/* 2016.4.5 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/* 主人公 */
enum hero{
	HP = 100,
	POWER = 10,
	MONEY = 1000,
	KUSA = 0
};

/* 宿 */
enum yado{
	YADO_1 = 20,
	YADO_2 = 100,
	YADO_3 = 300,
	YADO_4 = 2000
};

enum Story12{
	Story_12_1 = 13,
	Story_12_2 = 14,
	Story_12_3 = 15,
	Story_12_4 = 16,
	Story_12_5 = 17,
	Story_12_6 = 18,
	Story_12_7 = 19,
	Story_12_8 = 20,
	Story_12_9 = 21,
	Story_12_01 = 22,
	Story_12_02 = 23,
	Story_12_03 = 24,
	Story_12_04 = 25,
	Story_12_05 = 26,
	Story_12_099 = 27,
	Story_12_10 = 28
};

/* プロトタイプ宣言 */
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
int story_12_1(void);
int story_12_2(void);
int story_12_3(void);
int story_12_4(void);
int story_12_5(void);
int story_12_6(void);
int story_12_7(void);
int story_12_8(void);
int story_12_9(void);
int story_12_01(void);
int story_12_02(void);
int story_12_03(void);
int story_12_04(void);
int story_12_05(void);
int story_12_099(void);
int story_12_10(void);
int battle(int ene);
void menu(void);
void shop(void);
void inn(void);
void ikikaeru(void);
int end(int flag_end);
void miniGame_1(void);

/* エンターキーのため */
static char key;
/* 主人公 */
static char name[100];
static int hp,power,money,kusa;
/* 仲間 */
static char name_1[100] = "ごつい旅人";
static int hp_1, power_1;
static char name_2[100] = "優しい泥棒";
static int hp_2, power_2;
static char name_3[100] = "紫の魔女";
static int hp_3, power_3;
static char name_4[100] = "龍";
static int hp_4, power_4;
static char name_5[100] = "湖の精霊";
static int hp_5, power_5;
/* 敵 */
static char ene_name[100];
static int ene_hp = 0, ene_power = 0,ene_money = 0;
/* フラグ */
static int flag = 1, flag_end = 0;
/* 仲間のフラグ */
static int nakama_1 = 0, nakama_2 = 0, nakama_3 = 0, nakama_4 = 0, nakama_5 = 0;
/* 選択の記録 */
static int flag_3_1 = 0, flag_3_2 = 0, flag_3_3 = 0, flag_3_4 = 0;
static int flag_6_2 = 0;
static int flag_7_1 = 0, flag_7_2 = 0, flag_7_3 = 0, flag_7_4 = 0;

/* メイン関数 */
int main(void)
{
	start();
	make_char();
	pro();
	while(flag!=99){
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
			case 13:
				flag = story_12_1();//1階
				break;
			case 14:
				flag = story_12_2();//2階
				break;
			case 15:
				flag = story_12_3();//3階
				break;
			case 16:
				flag = story_12_4();//4階
				break;
			case 17:
				flag = story_12_5();//5階
				break;
			case 18:
				flag = story_12_6();//6階
				break;
			case 19:
				flag = story_12_7();//7階
				break;
			case 20:
				flag = story_12_8();//8階
				break;
			case 21:
				flag = story_12_9();//9階
				break;
			case 22:
				flag = story_12_01();//地下1階
				break;
			case 23:
				flag = story_12_02();//地下2階
				break;
			case 24:
				flag = story_12_03();//地下3階
				break;
			case 25:
				flag = story_12_04();//地下4階
				break;
			case 26:
				flag = story_12_05();//地下5階
				break;
			case 27:
				flag = story_12_099();//地下99階
				break;
			case 28:
				flag = story_12_10();//最上階
			case 29:
				flag = end(1);
				break;
			default:
				printf("\n 終了・・・・・・\n");
				exit(0);
		}
	}
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
	enterkey();
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
			break;
		case 2:
			printf( "\n やっぱり、朝ご飯を抜くと力が出ないなぁ。\n"
					"\n おなかすいた・・・・・・\n"
					);
			enterkey();
			printf("\n %sの力が２下がった・・・・・・\n",name);
			power -= 2;
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
			break;
		case 2:
			printf( "\n とても頑丈そうな鉄の盾、\n"
					"\n 手になじむ良い盾だ\n"
					);
			printf("\n %sの力が３上がった！！\n",name);
			power += 3;
			break;
		case 3:
			printf( "\n 薬草は必需品だ。\n"
					"\n たくさん持っていこう！！\n"
					);
			enterkey();
			printf("\n %sの体力が１２増えた！！\n",name);
			hp += 12;
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
	
	printf( "\n 村長が会いに来てくれた\n"
			);
	enterkey();
	printf( "\n 若い村長「この剣を持っていきな」\n"
			"\n 若い村長「この剣は倒した敵の力を吸収できる！！」\n"
			);
	enterkey();
	printf( "\n ”すごい剣”を手に入れた！！\n"
			);
	enterkey();
	
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
			break;
		case 2:
			battle(2);
			break;
		case 3:
			battle(3);
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
					nakama_4 = 1;
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
			enterkey();;
			break;
		case 2:
			printf( "\n パワーを使った！！\n"
					"\n 力が１０上がった！！\n"
					);
			power += 10;
			enterkey();
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
			break;
		case 2:
			printf( "\n 何とか逃げ切った・・・・・・\n"
					);
			enterkey();
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
					break;
				case 2:
					printf( "\n 橋を渡りきるため走った！！\n");
					enterkey();
					printf( "\n しかし、それよりも早く敵が迫ってきた！！\n");
					enterkey();
					battle(7);
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
			break;
		case 3:
			printf( "\n 右の橋を渡る\n"
					);
			enterkey();
			printf( "\n 橋を渡り切る\n"
					);
			enterkey();
			printf( "\n その道は街に続くようだ・・・・・・\n"
					);
			enterkey();
			return 5;
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
			flag_3_2 = 1;
			enterkey();
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
					break;
				case 2:
					printf( "\n 足をつぶされた！！\n"
							"\n ２０のダメージ！！\n"
							);
					hp += 20;
					enterkey();
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
			break;
		case 2:
			printf( "\n その場を去った\n"
					);
			enterkey();
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
	int sele;
	int loop = 1;
	int t_1=0,t_2=0,t_4=0,t_5=0;
	
	save_write();
	
	printf( "\n 五章\n"
			"\n 怪盗参上\n"
			);
	enterkey();
	
	/* sele1(始) */
	printf( "\n 街に着いた。そこは活気あふれる豊かな街！！\n"
			);
	enterkey();
	menu();
	ste();
	enterkey();
	/* sele1(終) */
	
	/* sele2(始) */
	printf( "\n 街を歩いていると、なにやら騒がしい\n"
			);
	enterkey();
	printf( "\n どうやら貴族の家に泥棒が入ったようだ\n"
			);
	enterkey();
	menu();
	ste();
	enterkey();
	/* sele2(終) */
	
	/* sele3(始) */
	printf( "\n 路地裏が騒がしい\n"
			);
	enterkey();
	printf( "\n 見てみると、誰かが兵士に囲まれている・・・・・・\n"
			);
	enterkey();
	printf( "\n 助ける？\n"
			"\n 1.もちろん助ける\n"
			"\n 2.関わりたくない\n"
			);
	printf("\n 入力：");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			battle(16);
			printf( "\n 優しい泥棒「助けていただきありがとうございます」\n"
					);
			enterkey();
			printf( "\n 優しい泥棒「仲間にしてください」\n"
					);
			nakama_2 = 1;
			flag = 1;
			break;
		case 2:
			printf( "\n 見なかったことにした\n"
					);
			enterkey();
			printf( "\n 次の街を目指す\n"
					);
			enterkey();
			flag = 2;
			return 6;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele3(終) */
	
	/* sele4(始) */
	printf( "\n 優しい泥棒「この街に悪い貴族がいます」\n"
			"\n 優しい泥棒「私はそいつを懲らしめたい」\n"
			"\n 優しい泥棒「力を貸してください」\n"
			);
	enterkey();
	printf( "\n %sは頷いた\n",name
			);
	enterkey();
	menu();
	ste();
	enterkey();
	/* sele4(終) */
	
	/* sele5(始) */
	printf( "\n 悪い貴族の屋敷へしのびこむ\n"
			"\n 目的は悪事の証拠だ\n"
			);
	enterkey();
	while(loop!=0){
		printf( "\n 扉が５つある・・・・・・\n"
				"\n どれ？\n"
				"\n 1.赤い扉\n"
				"\n 2.白い扉\n"
				"\n 3.黒い扉\n"
				"\n 4.青い扉\n"
				"\n 5.湿った扉\n"
				);
		printf( "\n 入力："
				);
		scanf("%d",&sele);
		switch(sele){
			case 1:
				t_1 += 1;
				if(t_1==1){
					printf( "\n 赤い扉を開ける・・・・・・\n"
							);
					enterkey();
					battle(16);
					printf( "\n この部屋には何もない・・・・・・\n"
							);
					enterkey();
				} else {
					printf( "\n その扉はもう開けた\n"
							);
					enterkey();
				}
				break;
			case 2:
				t_2 += 1;
				if(t_2==1){
					printf( "\n 白い扉を開ける・・・・・・\n"
							);
					enterkey();
					printf( "\n 薬草を見つけた！！\n"
							"\n 体力が５０回復した！！\n"
							);
					hp += 50;
					enterkey();
				} else {
					printf( "\n その扉はもう開けた\n"
							);
					enterkey();
				}
				break;
			case 3:
				printf( "\n 黒い扉を開けた・・・・・・\n"
						);
				enterkey();
				battle(17);
				printf( "\n 部屋の中を探す・・・・・・\n"
						"\n 悪事の証拠を見つけた！！\n"
						);
				enterkey();
				printf( "\n 優しい泥棒「これでこの街は救われる！！」\n"
						"\n 優しい泥棒「ありがとうございました！！」\n"
						);
				enterkey();
				loop = 0;
				break;
			case 4:
				t_4 += 1;
				if(t_4==1){
					printf( "\n 青い扉を開けた・・・・・・\n"
							);
					enterkey();
					battle(16);
					printf( "\n この部屋には何もない・・・・・・\n"
							);
					enterkey();
				} else {
					printf( "\n その扉はもう開けた\n"
							);
					enterkey();
				}
				break;
			case 5:
				t_5 += 1;
				if(t_5==1){
					printf( "\n 青い扉を開けた・・・・・・\n"
							);
					enterkey();
					printf( "\n 薬草を見つけた！！\n"
							"\n 体力が５０回復した！！\n"
							);
					hp += 50;
					enterkey();
				} else {
					printf( "\n その扉はもう開けた\n"
							);
					enterkey();
				}
				break;
			default:
				exit(0);
		}
	}
	ste();
	enterkey();
	/* sele5(終) */
	
	printf( "\n 問題は解決した\n"
			);
	enterkey();
	printf( "\n 次の街へ向かう\n"
			);
	enterkey();
	
	return 6;
}

/* 物語６（街） */
int story_6(void)
{
	int sele;
	
	save_write();
	
	printf( "\n 六章\n"
			"\n 賑やかな街\n"
			);
	enterkey();
	
	/* sele1(始) */
	printf( "\n 大きな街に着いた\n"
			"\n 中心には王様が住む城がある\n"
			);
	enterkey();
	printf( "\n ひとまず疲れを癒すため宿に泊まった\n"
			);
	enterkey();
	printf( "\n 体力が５０回復した！！\n"
			);
	enterkey();
	menu();
	ste();
	enterkey();
	/* sele1(終) */
	
	/* sele2(始) */
	printf( "\n 街の中を散歩する\n"
			);
	enterkey();
	printf( "\n 突然、城壁が吹っ飛んだ\n"
			"\n さらに火の手があがり始める\n"
			);
	enterkey();
	printf( "\n 魔王軍が攻め込んできた！！\n"
			"\n 街にいる兵士や戦えるものが街を守るため\n"
			"\n 魔王軍に向かって突っ込んでいく\n"
			);
	enterkey();
	printf( "\n 街のために闘う？\n"
			"\n 1.当たり前だ！！\n"
			"\n 2.いや、やめておこう\n"
			);
	enterkey();
	printf( "\n 入力：");
	scanf("%d",&sele);
	switch(sele){
		case 1:
			printf( "\n 魔王軍に攻め込む\n"
					);
			enterkey();
			battle(18);
			flag_6_2 = 1;
			break;
		case 2:
			printf( "\n この街を出ようと出口へ向かう\n"
					);
			enterkey();
			printf( "\n 紫の魔女「どこへ行くの？」\n"
					"\n 突如現れた、紫の魔女が道をふさいだ\n"
					);
			enterkey();
			printf( "\n 紫の魔女「みんなで闘うわよ！！」\n"
					);
			enterkey();
			printf( "\n 紫の魔女が仲間になった！！\n"
					);
			nakama_3 = 1;
			enterkey();
			flag_6_2 = 2;
			break;
		default:
			printf( "\n 終了・・・・・・\n"
					);
			exit(0);
	}
	ste();
	enterkey();
	/* sele2(終) */
	
	/* sele3(始) */
	printf( "\n 近くにいた人が薬草をくれた！！\n"
			"\n 体力が１００回復した！！\n"
			);
	hp += 100;
	enterkey();
	printf( "\n さらに魔王軍に突っ込む\n"
			);
	enterkey();
	battle(19);
	enterkey();
	/* sele3(終) */
	
	/* sele4(始) */
	printf( "\n 近くにいたコックさんが\n"
			"\n おいしい料理をごちそうしてくれた！！\n"
			);
	enterkey();
	printf( "\n 体力が３００回復した！！\n"
			);
	hp += 300;
	enterkey();
	printf( "\n 魔王軍に突っ込む！！\n"
			);
	enterkey();
	battle(20);
	enterkey();
	/* sele4(終) */
	
	/* sele5(始) */
	printf( "\n ほとんどの魔王軍を蹴散らした！！\n"
			);
	enterkey();
	if(nakama_3 == 1){
		printf( "\n 紫の魔女「結構倒したわね」\n"
				"\n 紫の魔女「もう一息よ」\n"
				);
		enterkey();
	}
		printf( "\n 魔王軍の幹部「ここまでやられてしまうとはな」\n"
				"\n 魔王軍の幹部「最後は私が闘おう」\n"
				);
		enterkey();
		battle(21);
		enterkey();
	/* sele5(終) */
	
	printf( "\n 魔王軍との戦いは終わった・・・・・・\n"
			);
	enterkey();
	printf( "\n 報酬として１００００円もらった！！\n"
			);
	money += 10000;
	enterkey();
	
	menu();
	
	if(nakama_3==1){
		printf( "\n 紫の魔女「この街での用事も済んだし行きましょう」\n"
				);
		enterkey();
		return 7;
	}
	
	printf( "\n この街を出た\n"
			);
	enterkey();
	printf( "\n 極寒の地へ向かう・・・・・・\n"
			);
	enterkey();
	ste();
	enterkey();
	return 8;
}

/* 物語７（魔法使い） */
int story_7(void)
{
	int sele;
	
	save_write();
	
	printf( "\n 七章\n"
			"\n 旅する魔女\n"
			);
	enterkey();
	
	/* sele1(始) */
	printf( "\n 紫の魔女と共に旅をする\n"
			);
	enterkey();
	printf( "\n 紫の魔女「私はある魔女を探しているの」\n"
			);
	enterkey();
	printf( "\n 紫の魔女「あいつを見つけなきゃいけない」\n"
			);
	enterkey();
	printf( "\n とある村で黒い魔女について聞きこむことにした\n"
			);
	enterkey();
	printf( "\n 村人A「黒い魔女？ここから北にある村で見かけたぞ」\n"
			"\n 村人B「いや、そんなはずはない。南の村にいるはずだ」\n"
			"\n 村人C「東の村にいる。そんな気がするんだ・・・・・・」\n"
			"\n 村人D「この棒が倒れた方向にいる・・・・・・西だ！！」\n"
			);
	printf( "\n この村の人々は嘘をつかない・・・・・・\n"
			);
	enterkey();
	while(1){
		printf( "\n どこに行く？\n"
				"\n 1.北の村\n"
				"\n 2.南の村\n"
				"\n 3.東の村\n"
				"\n 4.西の村\n"
				);
		printf("\n 入力：");
		scanf("%d",&sele);
		enterkey();
		switch(sele){
			case 1:
				printf( "\n 北の村に着いた\n"
						);
				enterkey();
				printf( "\n 村人E「黒い魔女？さっきまでいたけど」\n"
						"\n 村人F「西の村にいったはずだ」\n"
						"\n 村人G「俺は東に歩いていくのを見たよ」\n"
						"\n 村人H「」\n"
						);
				menu();
				flag_7_1 = 1;
				break;
			case 2:
				printf( "\n 南の村に着いた\n"
						);
				enterkey();
				flag_7_2 = 1;
				break;
			case 3:
				printf( "\n 東の村に着いた\n"
						);
				enterkey();
				flag_7_3 = 1;
				break;
			case 4:
				printf( "\n 西の村に着いた\n"
						);
				enterkey();
				flag_7_4 = 1;
				break;
			default:
				printf("\n 終了・・・・・・\n");
				exit(0);
		}
	}
	ste();
	enterkey();
	/* sele1(終) */
	
	return 0;
}

/* 物語８（雪国） */
int story_8(void)
{
	int sele;
	int i,j = -1;
	
	save_write();
	
	printf( "\n 八章\n"
			"\n 極寒の地にて\n"
			);
	enterkey();
	
	/* sele1(始) */
	printf( "\n 深く雪が積もる雪の国に着いた\n"
			"\n どこを見ても真っ白だ\n"
			);
	enterkey();
	menu();
	/* sele1(終) */
	
	/* sele2(始) */
	printf( "\n 雪の国からさらに北に行くと\n"
			"\n 険しい雪山がある\n"
			);
	enterkey();
	printf( "\n その雪山には恐ろしい魔物がうじゃうじゃいる\n"
			);
	enterkey();
	printf( "\n その魔物が山から降りてきてこまっているらしい\n"
			);
	enterkey();
	printf( "\n 険しい雪山へ向かう\n"
			);
	enterkey();
	ste();
	enterkey();
	/* sele2(終) */
	
	/* sele3(始) */
	for(i=22; i<=26; i++){
		j += 2;
		printf( "\n %d合目\n",j
				);
		battle(i);
	}
	/* sele3(終) */
	
	/* sele4(始) */
	printf( "\n 山頂に着いた\n"
			"\n ちょうど日が昇る\n"
			"\n まぶしい\n"
			);
	enterkey();
	printf( "\n その光とともに何かが現れる\n"
			"\n それは龍だった\n"
			"\n 体を覆う鱗が輝く\n"
			);
	enterkey();
	battle(27);
	/* sele4(終) */
	
	printf( "\n 金色の龍を仲間にしますか？\n"
			"\n 1.仲間になる\n"
			"\n 2.ほっとく\n"
			);
	printf( "\n 入力：");
	scanf("%d",&sele);
	
	switch(sele){
		case 1:
			printf( "\n 金色の龍が仲間になった！！\n"
					);
			enterkey();
			ste();
			enterkey();
			return 10;
		case 2:
			printf( "\n 雪山に朝がきた\n"
					);
			enterkey();
			printf( "\n 用事は済んだ\n"
					);
			enterkey();
			printf( "\n 旅は続く\n"
					);
			enterkey();
			break;
		default:
			exit(0);
	}
	return 9;
}

/* 物語９（海） */
int story_9(void)
{
	int sele;
	
	save_write();
	
	printf( "\n 九章\n"
			"\n 船上の戦場 \n"
			);
	enterkey();
	
	/* sele1(始) */
	printf( "\n 広い海を進む\n"
			);
	enterkey();
	printf( "\n 遠くのほうに黒い霧がかかった島がある\n"
			"\n 魔王城だ・・・・・・\n"
			);
	enterkey();
	printf( "\n しかし、前方に巨大なイカが現れた！！\n"
			);
	enterkey();
	battle(28);
	/* sele1(終) */
	
	/* sele2(始) */
	printf( "\n 広い海を進む\n"
			);
	enterkey();
	printf( "\n 魔王城へ向けて進んでいると、\n"
			"\n 金色の龍が現れた\n"
			);
	enterkey();
	printf( "\n 龍の背に乗りますか？\n"
			"\n 1.乗る\n"
			"\n 2.乗らない\n"
			);
	printf("\n 入力：");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n 金色の龍の背に乗った\n"
					);
			enterkey();
			return 10;
		case 2:
			printf( "\n 龍には悪いが魔王城へ向かう\n"
					);
			enterkey();
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele2(終) */
	
	return 0;
}

/* 物語１０（龍） */
int story_10(void)
{
	int sele;
	int story;
	
	save_write();
	
	printf( "\n 十章\n"
			"\n 空の王者\n"
			);
	enterkey();
	
	/* sele1(始) */
	printf( "\n 龍の背に乗って空を飛ぶ\n"
			);
	enterkey();
	printf( "\n 龍は魔王を倒す協力をしてくれるらしい\n"
			"\n 空の旅は快適だ\n"
			);
	enterkey();
	printf( "\n しかし、魔王城から何かが飛んできた\n"
			"\n 白い龍のようだ\n"
			);
	enterkey();
	story = battle(29);
	if(story==11){
		return 11;
	}
	ste();
	enterkey();
	/* sele1(終) */
	
	return 12;
}

/* 物語１１（湖） */
int story_11(void)
{
	save_write();
	
	printf( "\n 十一章\n"
			"\n 湖の精霊\n"
			);
	enterkey();
	
	/* sele1(始) */
	printf( "\n そこは森の湖だった\n"
			);
	enterkey();
	printf( "\n 湖の精霊「ここに何か用ですか」\n"
			"\n 湖から精霊が出できた\n"
			);
	enterkey();
	printf( "\n %sは魔王を倒すしたい旨を伝えた\n"
			);
	enterkey();
	printf( "\n 湖の精霊「分かりました。私も行きましょう」\n"
			);
	enterkey();
	nakama_5 = 1;
	ste();
	enterkey();
	/* sele1(終) */
	
	return 12;
}

/* 物語１２（魔王城） */
int story_12(void)
{	
	save_write();
	
	printf( "\n 十二章\n"
			"\n 終わりの闘い\n"
			);
	enterkey();
	
	printf( "\n 魔王城に着いた\n"
			);
	enterkey();
	printf( "\n 城全体が黒い霧に包まれている\n"
			"\n 空気は重く、汚れていた\n"
			);
	enterkey();
	printf( "\n 巨大な門を開いた\n"
			);
	enterkey();
	
	return Story_12_1;
}
	
int story_12_1(void)
{
	int sele;
	
	/* １階（始） */
	printf( "\n １階\n"
			);
	enterkey();
	printf( "\n 壁にかかった松明だけが光源だ\n"
			"\n 暗闇の中何かが動いている・・・・・・\n"
			);
	enterkey();
	printf( "\n 白い蛇「ここは魔王城だぞ、当たり前だが魔王がいる」\n"
			);
	enterkey();
	printf( "\n 白い蛇「魔王と闘いに来たのか」\n"
			);
	enterkey();
	printf( "\n 白い蛇「やめとけ、やめとけ、意味がない」\n"
			);
	enterkey();
	printf( "\n 白い蛇「俺が止めてやるよ」\n"
			);
	enterkey();
	battle(30);//バトル３０
	printf( "\n 階段が二つある\n"
			);
	printf( "\n どっち？\n"
			"\n 1.豪華な階段\n"
			"\n 2.汚れた階段\n"
			);
	scanf("%d",&sele);
	switch(sele){
		case 1:
			printf( "\n 豪華な階段を進む\n"
					"\n かなりお金がかかっている\n"
					);
			enterkey();
			ste();
			enterkey();
			return Story_12_5;
		case 2:
			printf( "\n 汚れた階段を進む\n"
					"\n 何か匂う・・・・・・くさい・・・・・・\n"
					);
			enterkey();
			ste();
			enterkey();
			return Story_12_6;
	}
	/* １階（終）*/
}
	
int story_12_2(void)
{
	int sele;
	
	/* ２階（始） */
	printf( "\n ２階\n"
			);
	enterkey();
	printf( "\n とてつもなく寒く、吐く息は白い\n"
			"\n 何かが空中をさまよう・・・・・・\n"
			);
	enterkey();
	printf( "\n 輝く幽霊「人間がここまでくるなんて」\n"
			);
	enterkey();
	printf( "\n 輝く幽霊「ここは暗いでしょ」\n"
			);
	enterkey();
	printf( "\n 輝く幽霊「見ての通り、私は輝いてる」\n"
			);
	enterkey();
	printf( "\n 輝く幽霊「今なら100,000円で道を照らしてあげるわ」\n"
			);
	enterkey();
	printf( "\n 光源を頼む？\n"
			"\n 1.頼む\n"
			"\n 2.いらない\n"
			);
	enterkey();
	printf( "\n 入力：");
	scanf("%d",&sele);
	switch(sele){
		case 1:
			if(money<100000){
				printf( "\n お金がたりない\n"
						"\n 輝く幽霊「残念ね」\n"
						);
				enterkey();
			} else if(money>=100000){
				money -= 100000;
				printf( "\n 毎度あり！！\n"
						"\n とっておきの道を照らすわ！！\n"
						);
				enterkey();
				return Story_12_099;
			}
			break;
		case 2:
			printf( "\n 輝く幽霊「あっそ」\n"
					);
			enterkey();
			battle(31);
			ste();
			enterkey();
			break;
		default:
			return Story_12_1;
	}
	printf( "\n 次へ進もうとすると、\n"
			"\n 前から大きな鉄球が転がってきた！！\n"
			);
	enterkey();
	printf( "\n どちらへよける？\n"
			"\n 1.左へとぶ！！\n"
			"\n 2.右へとぶ！！！\n"
			);
	printf( "\n 入力：");
	scanf("%d",&sele);
	switch(sele){
		case 1:
			printf( "\n 左へとんでよけた！！\n"
					);
			enterkey();
			printf( "\n しかし、そこは落とし穴だ！！\n"
					);
			enterkey();
			return Story_12_04;
		case 2:
			printf( "\n 右へとんでよけた！！！\n"
					);
			enterkey();
			printf( "\n なんとかよけきった\n"
					);
			enterkey();
			printf( "\n 階段を見つけた\n"
					"\n 1.のぼる\n"
					"\n 2.おりる\n"
					);
			enterkey();
			printf( "\n 入力：");
			scanf("%d",&sele);
			switch(sele){
				case 1:
					return Story_12_8;
				case 2:
					return Story_12_01;
				default:
					return Story_12_1;
			}
		default:
			return Story_12_1;
	}
	/* ２階（終）*/
}
	
int story_12_3(void)
{
	int sele;
	
	/* ３階（始） */
	printf( "\n ３階\n"
			);
	enterkey();
	printf( "\n 部屋全体が赤い\n"
			"\n 何かが空中をさまよう・・・・・・\n"
			);
	enterkey();
	printf( "\n くさいガス「闘いたくて仕方がない」\n"
			"\n くさいガス「勝負しよう！！」\n"
			);
	enterkey();
	printf( "\n くさいガスがクイズバトルを仕掛けてきた！！\n"
			);
	enterkey();
	printf( "\n この世界の魔物は何種類？\n"
			"\n 1.１０種\n"
			"\n 2.２０種\n"
			"\n 3.３０種\n"
			"\n 4.４０種\n"
			"\n 5.５０種\n"
			,name
			);
	printf( "\n 入力：");
	scanf("%d",&sele);
	switch(sele){
		case 1:
			printf( "\n くさいガス「残念」\n"
					);
			enterkey();
			printf( "\n 落とし穴に落とされた\n"
					);
			enterkey();
			return Story_12_5;
		case 2:
			printf( "\n くさいガス「残念だ」\n"
					);
			enterkey();
			printf( "\n 落とし穴に落とされた\n"
					);
			enterkey();
			return Story_12_8;
		case 3:
			printf( "\n くさいガス「違うよ」\n"
					);
			enterkey();
			printf( "\n 落とし穴に落とされた\n"
					);
			enterkey();
			return Story_12_05;
		case 4:
			printf( "\n くさいガス「正解！！流石だ！！！」\n"
					);
			enterkey();
			printf( "\n くさいガス「この階段をのぼっていいよ」\n"
					);
			enterkey();
			return Story_12_9;
		case 5:
			printf( "\n くさいガス「残念」\n"
					);
			enterkey();
			printf( "\n 落とし穴に落とされた\n"
					);
			enterkey();
			return Story_12_04;
		default:
			return Story_12_1;
	}
	/* ３階（終）*/
}

int story_12_4(void)
{
	int sele;
	
	printf( "\n ４階\n"
			);
	enterkey();
	
	printf( "\n とてつもなく熱い！！\n"
			);
	enterkey();
	printf( "\n 燃える馬「ハハハッ！！ 熱いだろ！！」\n"
			"\n 燃える馬「そのまま燃えて溶けてしまえ！！！」\n"
			);
	enterkey();
	battle(32);
	
	printf( "\n 燃える馬「情報をやろう」\n"
			);
	enterkey();
	printf( "\n 燃える馬「魔王がいる最上階へは」\n"
			"\n 燃える馬「クイズを解かなきゃたどり着けない」\n"
			);
	enterkey();
	printf( "\n 燃える馬「がんばれよ」\n"
			);
	enterkey();
	
	printf( "\n 階段が３つある\n"
			);
	enterkey();
	printf( "\n どれ？\n"
			"\n 1.左\n"
			"\n 2.真ん中\n"
			"\n 3.右\n"
			);
	printf( "\n 入力：");
	scanf("%d",&sele);
	switch(sele){
		case 1:
			printf( "\n ");
	}
}

int story_12_5(void)
{
	int sele;
	
	printf( "\n ５階\n"
			);
	enterkey();
	
	printf( "\n 魔法の本が落ちている\n"
			"\n 魔法について書いてある\n"
			);
	enterkey();
	printf( "\n 魔王城についての情報も書いてある\n"
			"\n 「魔王は最上階で勇者を待つ\n"
			"\n ＊＊は地下深くで何かを待つ」\n"
			);
	enterkey();
	printf( "\n どの魔法を使う？\n"
			"\n 1.水の魔法\n"
			"\n 2.風の魔法\n"
			"\n 3.火の魔法\n"
			);
	printf( "\n 入力：");
	scanf("%d",&sele);
	switch(sele){
		case 1:
			printf( "\n 水の魔法を使った！！\n");
			enterkey();
			printf( "\n 地面から大量の水があふれだしてくる\n"
					"\n 洪水となって押し寄せる！！\n"
					);
			enterkey();
			printf( "\n 他の階まで流された・・・・・・\n");
			enterkey();
			return Story_12_3;
		case 2:
			printf( "\n 風の魔法を使った！！\n");
			enterkey();
			printf( "\n 暴風が吹き荒れる！！\n");
			enterkey();
			printf( "\n 他の階まで吹き飛ばされた！！\n");
			enterkey();
			return Story_12_7;
		case 3:
			printf( "\n 火の魔法を使った！！\n");
			enterkey();
			printf( "\n 爆発した！！\n"
					"\n 床が吹き飛んだ！！\n");
			enterkey();
			printf( "\n 下の階へ落ちた！！\n");
			enterkey();
			return Story_12_03;
		default:
			return story_12_1;
	}
}

int story_12_6(void)
{
	int sele_1,sele_2;
	
	printf( "\n ６階\n"
			);
	enterkey();
	
	printf( "\n ここは迷路になっているようだ\n"
			);
	enterkey();
	printf( "\n 看板がある\n"
			);
	enterkey();
	printf( "\n 「この階からいける階は\n"
			"\n ４階、８階、地下２階の３つ」\n"
			);
	enterkey();
	printf( "\n どの道？\n"
			"\n 1.左\n"
			"\n 2.右\n"
			);
	printf( "\n 入力：\n");
	scanf("%d",&sele_1);
	printf( "\n 次は？\n"
			"\n 1.左\n"
			"\n 2.真ん中\n"
			"\n 3.右\n"
			);
	printf( "\n 入力：");
	scanf("%d",&sele_2);
	system("cls");
	if(sele_1==1&&sele_2==1){
		printf( "\n 落とし穴だ！！\n"
				);
		enterkey();
		return Story_12_02;
	} else if(sele_1==1&&sele_2==2){
		printf( "\n 階段を見つけた\n"
				);
		enterkey();
		return Story_12_8;
	} else if(sele_1==1&&sele_2==3){
		printf( "\n 階段を見つけた\n"
				);
		enterkey();
		return Story_12_4;
	} else if(sele_1==2&&sele_2==1){
		printf( "\n 階段を見つけた\n"
				);
		enterkey();
		return Story_12_8;
	} else if(sele_1==2&&sele_2==2){
		printf( "\n 階段を見つけた\n"
				);
		enterkey();
		return Story_12_4;
	} else if(sele_1==2&&sele_2==3){
		printf( "\n 落とし穴だ！！\n"
				);
		enterkey();
		return Story_12_02;
	} else {
		return Story_12_1;
	}
}

int story_12_7(void)
{
	printf( "\n ７階\n");
	enterkey();
	
	printf( "\n ここはカジノ\n"
			"\n 好きなだけお金が稼げるところ\n"
			);
	enterkey();
	miniGame_1();
	
	return Story_12_1;
}

int story_12_8(void)
{
	printf( "\n ８階\n");
	enterkey();
	
}

int story_12_9(void)
{
	printf( "\n ９階\n");
	enterkey();
	
	printf( "\n 物音一つしない・・・・・・\n"
			"\n 静けさだけが漂う・・・・・・\n"
			);
	enterkey();
	printf( "\n そこには白い龍がいた\n");
	enterkey();
	printf( "\n 白い龍「ここを通すわけにはいかない」\n"
			"\n 白い龍「魔王の命令だ」\n"
			);
	enterkey();
	battle(33);
	printf( "\n 白い龍「私の負けだ、通れ」\n");
	enterkey();
	printf( "\n その先には大きな階段があった\n");
	enterkey();
	
	return story_12_10;
}

int story_12_10(void)
{
	int story;
	
	printf( "\n 最上階・魔王の間\n");
	enterkey();
	
	printf( "\n 魔王「よくぞ、ここまで来た！！」\n"
			"\n 魔王「俺が魔王だ！！！」\n"
			);
	enterkey();
	printf( "\n 魔王「お俺をたおせば世界は救われる」\n"
			"\n 魔王「お前が死ねば世界は俺のものだ！！」\n"
			);
	enterkey();
	story = battle(34);
	if(story==29){
		return 29;
	}
	
}

int story_12_01(void)
{
	printf( "\n 地下１階\n");
	enterkey();
	
}

int story_12_02(void)
{
	printf( "\n 地下２階\n");
	enterkey();
	
}

int story_12_03(void)
{
	printf( "\n 地下３階\n");
	enterkey();
	
}

int story_12_04(void)
{
	printf( "\n 地下４階\n");
	enterkey();
	
}

int story_12_05(void)
{
	printf( "\n 地下５階\n");
	enterkey();
	
}

int story_12_099(void)
{
	printf( "\n 地下９９階\n");
	enterkey();
	
}


/* 終わり */
int end(int flag_end)
{
	switch(flag_end){
		case 1:
			printf( "\n end1\n");
			break;
		default:
			printf("\n end_default\n");
			break;
	}
	printf("\n 終わります・・・・・・\n\n");
	
	return 99;
}

/* 戦闘 */
int battle(int ene)
{
	int power_save;
	int ene_power_save;
	
	/* 敵選択 */
	switch(ene){
		case 0:
			switch(flag){
			case 1:
				strncpy(ene_name,"初心者",sizeof(ene_name));
				ene_hp = 20;
				ene_power = 2;
				ene_money = 20;
				break;
			case 2:
				strncpy(ene_name,"初心者",sizeof(ene_name));
				ene_hp = 20;
				ene_power = 2;
				ene_money = 20;
				break;
			case 3:
				strncpy(ene_name,"初心者",sizeof(ene_name));
				ene_hp = 20;
				ene_power = 2;
				ene_money = 20;
				break;
			case 4:
				strncpy(ene_name,"初心者",sizeof(ene_name));
				ene_hp = 20;
				ene_power = 2;
				ene_money = 20;
				break;
			case 5:
				strncpy(ene_name,"初心者",sizeof(ene_name));
				ene_hp = 20;
				ene_power = 2;
				ene_money = 20;
				break;
			case 6:
				strncpy(ene_name,"中堅",sizeof(ene_name));
				ene_hp = 200;
				ene_power = 20;
				ene_money = 100;
				break;
			default:
				break;
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
		case 16:
			strncpy(ene_name,"兵士",sizeof(ene_name));
			ene_hp = 200;
			ene_power = 30;
			ene_money = 2000;
			break;
		case 17:
			strncpy(ene_name,"屋敷の番人",sizeof(ene_name));
			ene_hp = 500;
			ene_power = 50;
			ene_money = 3000;
			break;
		case 18:
			strncpy(ene_name,"魔王軍の下っ端",sizeof(ene_name));
			ene_hp = 600;
			ene_power = 30;
			ene_money = 2000;
			break;
		case 19:
			strncpy(ene_name,"魔王軍の掃除係",sizeof(ene_name));
			ene_hp = 600;
			ene_power = 50;
			ene_money = 3000;
			break;
		case 20:
			strncpy(ene_name,"魔王軍の若手",sizeof(ene_name));
			ene_hp = 600;
			ene_power = 60;
			ene_money = 3000;
			break;
		case 21:
			strncpy(ene_name,"魔王軍のまとめ役",sizeof(ene_name));
			ene_hp = 600;
			ene_power = 60;
			ene_money = 5000;
			break;
		case 22:
			strncpy(ene_name,"雪うさぎ",sizeof(ene_name));
			ene_hp = 400;
			ene_power = 40;
			ene_money = 1000;
			break;
		case 23:
			strncpy(ene_name,"雪おおかみ",sizeof(ene_name));
			ene_hp = 500;
			ene_power = 70;
			ene_money = 2000;
			break;
		case 24:
			strncpy(ene_name,"雪わに",sizeof(ene_name));
			ene_hp = 800;
			ene_power = 100;
			ene_money = 3000;
			break;
		case 25:
			strncpy(ene_name,"雪鬼",sizeof(ene_name));
			ene_hp = 1000;
			ene_power = 150;
			ene_money = 5000;
			break;
		case 26:
			strncpy(ene_name,"雪雪雪雪雪",sizeof(ene_name));
			ene_hp = 1500;
			ene_power = 100;
			ene_money = 10000;
			break;
		case 27:
			strncpy(ene_name,"金色の龍",sizeof(ene_name));
			ene_hp = 2000;
			ene_power = 200;
			ene_money = 20000;
			break;
		case 28:
			strncpy(ene_name,"巨大なイカ",sizeof(ene_name));
			ene_hp = 2000;
			ene_power = 100;
			ene_money = 15000;
			break;
		case 29:
			strncpy(ene_name,"白い龍",sizeof(ene_name));
			ene_hp = 3000;
			ene_power = 300;
			ene_money = 30000;
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
		ikikaeru();//生き返る草を使う
		if(hp<=0){
			if(ene==29){
				printf( "\n 龍とともに落ちていく\n"
						);
				enterkey();
				printf( "\n 森の湖に落ちた・・・・・・\n"
						);
				enterkey();
				return 11;
			} if(ene==34){
				return 29;
			}
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
			money = MONEY;
			kusa = KUSA;
			flag = 1;
			save_write();
			printf( "\n キャラクター作成終了\n");
			enterkey();
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

/* ステータス */
void ste(void)
{
	printf("\n %s 体力：%d  力：%d  お金： %d 生き返る草：%d\n",name ,hp ,power,money,kusa);
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

/* 書き込み */
void save_write(void)
{
	FILE *fp;
	fp = fopen("practice_data.txt","w");
	fprintf(fp,"%s\n",name);
	fclose(fp);
}

/* 読み取り */
void save_read(void)
{
	FILE *fp;
	fp = fopen("practice_data.txt","r");
	fscanf(fp,"%s",name);
	printf( "\n 名前： %s\n"
				,name);
	fclose(fp);
}

/* 選択 */
void menu(void)
{
	int sele_menu;
	int loop = 1;
	int sele;
	
	while(loop!=0){
		ste();
		enterkey();
		printf( "\n==============================\n"
				" 選択してください\n"
				" 1.戦闘\n"
				" 2.ストーリーへ\n"
				" 3.人と話す\n"
				" 4.お店\n"
				" 5.宿\n"
				" 6.ゲーム終了（注意：セーブなし）\n"
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
				printf( "\n その辺の人と話す\n");
				enterkey();
				do{
					switch(flag){
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
						case 6:
							break;
						case 7:
							break;
						case 8:
							break;
						case 9:
							break;
						case 10:
							break;
						case 11:
							break;
						default:
							break;
					}
					printf( "\n まだ話す？\n"
							"\n 1.話す\n"
							"\n 2.もういい\n"
							);
					printf( "\n 入力："
							);
					scanf("%d",&sele);
				}while(sele==1);
				break;
			case 4:
				printf( "\n 店に行く\n");
				enterkey();
				shop();
				break;
			case 5:
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

/* 店 */
void shop(void)
{
	int sele_shop;
	int loop = 1;
	
	while(loop!=0){
		printf( "\n ==============================\n"
				"\n 1.パワー（1000円）"
				"\n 2.パパワー（5000円）"
				"\n 3.パパパワー(10000円)"
				"\n 4.生き返る草（10000円）"
				"\n 5.終了\n"
				);
		printf( "\n 入力：");
		scanf( "%d",&sele_shop);
		system("cls");
		switch(sele_shop){
			case 1:
				if(money<1000){
					printf( "\n お金が足りません\n");
					enterkey();
				} else if(money>=1000){
					printf( "\n パワーを買った！！\n");
					printf( "\n 力が１０上がった！！\n");
					power += 10;
					money -= 1000;
				} else {
				}
				break;
			case 2:
				if(money<5000){
					printf( "\n お金が足りない\n");
					enterkey();
				} else if(money>=5000){
					printf( "\n パパワーを買った！！\n");
					printf( "\n 力が５０上がった！！\n");
					power += 50;
					money -= 5000;
				} else {
				}
				break;
			case 3:
				if(money<10000){
					printf( "\n お金が足りない\n");
					enterkey();
				} else if(money>=10000){
					printf( "\n 1パパパワーを買った！！\n");
					printf( "\n 力が１００上がった！！\n");
					power += 100;
					money -= 10000;
				} else {
				}
				break;
			case 4:
				if(money<10000){
					printf( "\n お金が足りない\n");
					enterkey();
				} else if(money>=10000){
					printf( "\n 生き返る草を買った！！\n");
					kusa += 1;
					money -= 10000;
				} else {
				}
				break;
			case 5:
				loop = 0;
				break;
			default:
				break;
		}
	}	
}

/* 宿 */
void inn(void)
{
	int sele;
	
	printf( "\n お金：%d\n\n",money);
	
	printf( "\n どの宿？\n"
			"\n 1.安い宿（500円）"
			"\n 2.普通の宿（2000円）"
			"\n 3.高級な宿（5000円）"
			"\n 4.我が家（20000円）\n"
			);
	printf( "\n 入力："
			);
	scanf( "%d",&sele);
	switch(sele){
		case 1:
			if(money<500){
				printf( "\n お金が足りない\n");
				enterkey();
			}else if(money>=500){
				printf( "\n 体力が２０回復した！！\n");
				hp += YADO_1;
				money -= 500;
			if(nakama_1==1)
				hp_1 += YADO_1;
			if(nakama_2==1)
				hp_2 += YADO_1;
			if(nakama_3==1)
				hp_3 += YADO_1;
			if(nakama_4==1)
				hp_4 += YADO_1;
			if(nakama_5==1)
				hp_5 += YADO_1;
				enterkey();
			} else {
			}
			break;
		case 2:
			if(money<2000){
				printf( "\n お金が足りない\n");
				enterkey();
			}else if(money>=2000){
				printf( "\n 体力が１００回復した！！\n");
				hp += YADO_2;
				money -= 2000;
				if(nakama_1==1)
					hp_1 += YADO_2;
				if(nakama_2==1)
					hp_2 += YADO_2;
				if(nakama_3==1)
					hp_3 += YADO_2;
				if(nakama_4==1)
					hp_4 += YADO_2;
				if(nakama_5==1)
					hp_5 += YADO_2;
				enterkey();
			} else {
			}
			break;
		case 3:
			if(money<5000){
				printf( "\n お金が足りない\n");
				enterkey();
			}else if(money>=5000){
				printf( "\n 体力が３００回復した！！\n");
				hp += YADO_3;
				money -= 5000;
				if(nakama_1==1)
					hp_1 += YADO_3;
				if(nakama_2==1)
					hp_2 += YADO_3;
				if(nakama_3==1)
					hp_3 += YADO_3;
				if(nakama_4==1)
					hp_4 += YADO_3;
				if(nakama_5==1)
					hp_5 += YADO_3;
				enterkey();
			} else {
			}
			break;
		case 4:
			if(money<20000){
				printf( "\n お金が足りない\n");
				enterkey();
			}else if(money>=2000){
				printf( "\n 体力が２０００回復した！！\n");
				hp += YADO_4;
				money -= 20000;
				if(nakama_1==1)
					hp_1 += YADO_4;
				if(nakama_2==1)
					hp_2 += YADO_4;
				if(nakama_3==1)
					hp_3 += YADO_4;
				if(nakama_4==1)
					hp_4 += YADO_4;
				if(nakama_5==1)
					hp_5 += YADO_4;
				enterkey();
			} else {
			}
			break;
	}
}

/* 生き返る草 */
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

/* ブラックジャック */
void miniGame_1(void)
{
	int pRand[100];
	int eRand[100];
	int i,j,q,qq;
	int sum;
	int sele;
	
	for(i=0; i<100; i++){
		pRand[i] = 0;
		eRand[i] = 0;
	}
	
	printf( "\n ブラックジャック\n"
			"\n 合計２１をめざせ！！\n"
			);
	enterkey();
	
	printf( "\n ゲームで遊びますか？\n"
			"\n 1.遊ぶ\n"
			"\n 2.遊ばない\n"
			);
	printf( "\n 入力：");
	scanf( "%d",&sele);
	switch(sele){
		case 1:
			for(i=0; q!=0; i++){
				srand((unsigned)time(NULL));
				pRand[i] = rand()%10 + 1;
				printf( "\n %dつ目の値：%d \n",i+1 ,pRand[i]);
				for(j=0; j<100; j++){
					sum += pRand[j];
				}
				printf( "\n 合計：%d \n",sum);
				printf( "\n この値で勝負しますか？\n"
						"\n 1.勝負する\n"
						"\n 2.まだ足りない\n"
						);
				printf( "\n 入力：");
				scanf("%d",&sele);
				switch(sele){
					case 1:
						q = 0;
						break;
					case 2:
						break;
					default:
					exit(0);
				}
			}
			break;
		case 2:
			qq = 0;
			break;
		default:
			exit(0);
	}
	
}
