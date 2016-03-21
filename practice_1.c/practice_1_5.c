/* practice_1_5.c */
/* YusukeKato */
/* 2016.3.21 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void enterkey(void);
void ste(void);
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
int end(int flag_end);

static char key;
/*  */
static char name[100];
static int hp = 50, power = 10;
/*  */
static char name_1[100];
static int hp_1 = 80, power_1 = 5;
static char name_2[100];
static int hp_2 = 50, power_2 = 3;
static char name_3[100];
static int hp_3 = 40, power_3 = 5;
static char name_4[100];
static int hp_4 = 150, power_4 = 20;
static char name_5[100];
static int hp_5 = 120, power_5 = 50;
/*  */
static char ene_name[100];
/*  */
static int ene_hp = 50, ene_power = 5;
static int flag = 1, flag_end = 0;
static int nakama_1 = 0, nakama_2 = 0, nakama_3 = 0, nakama_4 = 0, nakama_5 = 0;
/* 選択の記録 */
static int flag_1_1 = 0, flag_1_2 = 0, flag_1_3 = 0, flag_1_4 = 0;
static int flag_2_1 = 0, flag_2_2 = 0, flag_2_3 = 0, flag_2_4 = 0, flag_2_5 = 0;

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
			"\n ごつい旅人「東へ向かえば暗い森がある」\n"
			);
	enterkey();
	printf( "\n どちらへ向かう？\n"
			"\n 1.深い谷\n"
			"\n 2.暗い森\n" 
			);
	printf("\n 入力：");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n 深い谷へ向かった\n"
					);
			enterkey();
			flag_2_1 = 1;
			break;
		case 2:
			printf( "\n 暗い森へ向かった\n"
					);
			enterkey();
			flag_2_1 = 2;
			story = 3;
			return story;
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
			printf( "\n ナニカオコルダケを食べた\n"
					);
			enterkey();
			srand((unsigned)time(NULL));
			ran_2 = rand()%20 + 1;
			if(ran_1==1){
				printf("\n 体力が%d減った・・・・・・\n",ran_2);
				hp -= ran_2;
				if(hp<=0){
					printf("\n %sは死んでしまった・・・・・・\n",name);
					exit(0);
				}
			} else if(ran_1==2){
				printf("\n 体力が%d増えた！！！\n",ran_2);
				hp += ran_2;
			}
			enterkey();
			flag_2_2 = 1;
			break;
		case 2:
			printf( "\n ごつい旅人「そんなこと言わずに食べてみろよ」\n"
					);
			enterkey();
			printf( "\n 力が３上がった！！\n");
			power += 3;
			flag_2_2 = 2;
			break;
		default:
			printf("\n 終了・・・・・・\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele2(終) */
	
	return 0;
}

/* 物語３（森） */
int story_3(void)
{
	printf( "\n 三章\n"
			"\n 森の抜け道\n"
			);
	enterkey();
	
	return 0;
}

/* 物語４（洞窟） */
int story_4(void)
{
	printf( "\n 四章\n"
			"\n 宝の在りか\n"
			);
	enterkey();
	
	return 0;
}

/* 物語５（泥棒、盗賊、怪盗） */
int story_5(void)
{
	printf( "\n 五章\n"
			"\n 怪盗参上\n"
			);
	enterkey();
	
	return 0;
}

/* 物語６（街） */
int story_6(void)
{
	printf( "\n 六章\n"
			"\n 賑やかな街\n"
			);
	enterkey();
	
	return 0;
}

/* 物語７（魔法使い） */
int story_7(void)
{
	printf( "\n 七章\n"
			"\n 旅する魔女\n"
			);
	enterkey();
	
	return 0;
}

/* 物語８（雪国） */
int story_8(void)
{
	printf( "\n 八章\n"
			"\n 極寒の地にて\n"
			);
	enterkey();
	
	return 0;
}

/* 物語９（海） */
int story_9(void)
{
	printf( "\n 九章\n"
			"\n 船上の戦場 \n"
			);
	enterkey();
	
	return 0;
}

/* 物語１０（龍） */
int story_10(void)
{
	printf( "\n 十章\n"
			"\n 空の王者\n"
			);
	enterkey();
	
	return 0;
}

/* 物語１１（湖） */
int story_11(void)
{
	printf( "\n 十一章\n"
			"\n 湖の精霊\n"
			);
	enterkey();
	
	return 0;
}

/* 物語１２（魔王城） */
int story_12(void)
{
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
		case 1:
			strncpy(ene_name,"こげたもの",sizeof(ene_name));
			ene_hp = 30;
			ene_power = 3;
			break;
		case 2:
			strncpy(ene_name,"とうもろこしおばけ",sizeof(ene_name));
			ene_hp = 20;
			ene_power = 5;
			break;
		case 3:
			strncpy(ene_name,"トマトマト",sizeof(ene_name));
			ene_hp = 20;
			ene_power = 10;
			break;
		case 4:
			strncpy(ene_name,"赤い龍",sizeof(ene_name));
			ene_hp = 70;
			ene_power = 15;
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
					,ene_name ,ene_power
					);
			power = power_save;
			power += ene_power_save;
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
	FILE *fp;
	int m_c;
	fp = fopen("practice_data.txt","r");
	while(fscanf(fp,"%s",name)!=EOF)
		printf("\n 名前： %s\n",name);
	fclose(fp);
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
			fp = fopen("practice_data.txt","w");
			fprintf(fp,"%s \n",name);
			fclose(fp);
			enterkey();
			break;
		case 2:
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
printf("\n %s 体力：%d  力：%d\n",name ,hp ,power);
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
	enterkey();
	ste();
	enterkey();
	*/
	/* sele1(終) */