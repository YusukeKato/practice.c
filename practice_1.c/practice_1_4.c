/* practice_1_4.c */
/* YusukeKato */
/* 2016.3.19 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void enterkey(void);
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
static char name[100];
static int hp = 50, power = 10;
static char name_1[100];
static int hp_1 = 50, power_1 = 5;
static char ene_name[100];
static int ene_hp = 50, ene_power = 5;
static int flag = 1, flag_end = 0, nakama = 0;
static int flag_1_1 = 0, flag_1_2 = 0, flag_1_3 = 0, flag_1_4 = 0;

int main(void)
{
	start();
	make_char();
	pro();
	for(;;){
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
	int sele1, sele2, sele3;
	int sele4, sele_4_1, sele_4_2;
	
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
	scanf("%d",&sele1);
	enterkey();
	switch(sele1){
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
	printf("\n %s 体力：%d  力：%d\n",name ,hp ,power);
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
	scanf("%d",&sele2);
	enterkey();
	switch(sele2){
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
	printf("\n %s 体力：%d  力：%d\n",name ,hp ,power);
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
	scanf("%d",&sele3);
	enterkey();
	switch(sele3){
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
	enterkey();
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
	scanf("%d",&sele4);
	enterkey();
	switch(sele4){
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
			scanf("%d",&sele_4_1);
			enterkey();
			switch(sele_4_1){
				case 1:
					printf( "\n 料理がおいしい宿に泊まった。\n"
							"\n ここの料理を食べれば、力がみなぎってくる！！\n"
							);
					enterkey();
					printf( "\n 力が１０上がった！！\n");
					power += 10;
					flag_1_4 = 2;
					break;
				case 2:
					printf( "\n ふかふかベットがある宿に泊まった。\n"
							"\n このベットならよい夢が見れそうだ。\n"
							);
					enterkey();
					printf( "\n 魔法使い「あなたも旅をしているの？」\n"
							"\n 同じ宿に泊まっている見知らぬ魔法使いが話しかけてきた。\n"
							);
					enterkey();
					printf( "\n 魔法使い「私も旅をしているんだけど、一人だといろいろ大変でね」\n"
							"\n 魔法使い「どう、一緒に旅をしない？」\n"
							);
					enterkey();
					printf( "\n 魔法使いが仲間になった。\n");
					strncpy(name_1,"魔法使い",sizeof(name_1));
					hp_1 = 40;
					power_1 = 20;
					flag_1_4 = 3;
					nakama = 1;
					break;
				case 3:
					printf( "\n 有名な温泉がある宿に泊まった。\n"
							"\n ここの温泉に入れば、疲れなんか吹き飛ぶ！！\n"
							);
					enterkey();
					printf( "\n 体力が３０増えた！！\n");
					hp += 30;
					flag_1_4 = 2;
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
			printf( "\n 旅人「仲間を探しているのか？」\n"
					"\n 旅人「ちょうど俺も一人では厳しいと考えていたところだ」\n"
					"\n 旅人「よろしくな」\n"
					);
			enterkey();
			printf("\n 旅人が仲間になった。\n");
			strncpy(name_1,"旅人",sizeof(name_1));
			hp_1 = 50;
			power_1 = 8;
			flag_1_4 = 4;
			nakama = 1;
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
			scanf("%d",&sele_4_2);
			enterkey();
			switch(sele_4_2){
				case 1:
					printf("\n %sは森の奥へ進んだ。\n",name);
					enterkey();
					printf("\n なんとそこにいたのはドラゴンだった！！！\n");
					enterkey();
					battle(4);
					printf("\n 倒したドラゴンが起き上がってきた。\n");
					enterkey();
					printf("\n ドラゴンが仲間になった。\n");
					strncpy(name_1,"ドラゴン",sizeof(name_1));
					hp_1 = 80;
					power_1 = 15;
					nakama = 1;
					flag_1_4 = 5;
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
					flag_1_4 = 2;
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
	printf("\n %s 体力：%d  力：%d\n",name ,hp ,power);
	if(nakama==1)
		printf("\n %s 体力：%d  力：%d\n",name_1, hp_1, power_1);
	enterkey();
	/* sele4(終) */
	
	return flag_1_4;
}

/* 物語２（旅人） */
int story_2(void)
{
	printf( "\n 二章\n"
			"\n 旅人と旅人\n"
			);
	enterkey();
}

/* 物語３（森） */
int story_3(void)
{
	printf( "\n 三章\n"
			"\n 森の抜け道\n"
			);
	enterkey();
}

/* 物語４（洞窟） */
int story_4(void)
{
	printf( "\n 四章\n"
			"\n 宝の在りか\n"
			);
	enterkey();
}

/* 物語５（泥棒） */
int story_5(void)
{
	printf( "\n 五章\n"
			"\n 怪盗参上\n"
			);
	enterkey();
}

/* 物語６（街） */
int story_6(void)
{
	printf( "\n 六章\n"
			"\n \n"
			);
	enterkey();
}

/* 物語７（魔法使い） */
int story_7(void)
{
	printf( "\n 七章\n"
			"\n 旅する魔女\n"
			);
	enterkey();
}

/* 物語８（雪国） */
int story_8(void)
{
	printf( "\n 八章\n"
			"\n 極寒の地にて\n"
			);
	enterkey();
}

/* 物語９（海） */
int story_9(void)
{
	printf( "\n 九章\n"
			"\n 船上の戦場（←天才）\n"
			);
	enterkey();
}

/* 物語１０（龍） */
int story_10(void)
{
	printf( "\n 十章\n"
			"\n 空の王者\n"
			);
	enterkey();
}

/* 物語１１（湖） */
int story_11(void)
{
	printf( "\n 十一章\n"
			"\n 湖の精霊\n"
			);
	enterkey();
}

/* 物語１２（魔王城） */
int story_12(void)
{
	printf( "\n 十二章\n"
			"\n 終わりの闘い\n"
			);
	enterkey();
}

/* 終わり */
int end(int flag_end)
{
	switch(flag_end){
		case -1:
			enterkey();
			printf("\n 終わります・・・・・・\n");
			exit(0);
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
			strncpy(ene_name,"ドラゴン",sizeof(ene_name));
			ene_hp = 70;
			ene_power = 15;
			break;
		default:
			exit(0);
	}
	printf("\n %sがあらわれた！！\n",ene_name);
	enterkey();
	for(;;){
		printf( "\n %sの攻撃！！\n"
				"\n %dのダメージ！！\n"
				,name ,power
				);
		ene_hp -= power;
		enterkey();
		if(ene_hp<=0){
			printf( "\n %sを倒した！！\n"
					"\n 力が%d上がった！！\n"
					,ene_name ,ene_power
					);
			power += ene_power;
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
	printf("\n %s 体力：%d  力：%d\n",name ,hp ,power);
	if(nakama==1){
		printf("\n %s 体力：%d  力：%d\n",name_1, hp_1 ,power_1);
	}
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
		printf("\n %s\n",name);
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
