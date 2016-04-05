/* practice_1_12.c RPG */
/* YusukeKato */
/* 2016.3.18 */
/* 2016.4.5 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/* ��l�� */
enum hero{
	HP = 100,
	POWER = 10,
	MONEY = 1000,
	KUSA = 0
};

/* �h */
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

/* �v���g�^�C�v�錾 */
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

/* �G���^�[�L�[�̂��� */
static char key;
/* ��l�� */
static char name[100];
static int hp,power,money,kusa;
/* ���� */
static char name_1[100] = "�������l";
static int hp_1, power_1;
static char name_2[100] = "�D�����D�_";
static int hp_2, power_2;
static char name_3[100] = "���̖���";
static int hp_3, power_3;
static char name_4[100] = "��";
static int hp_4, power_4;
static char name_5[100] = "�΂̐���";
static int hp_5, power_5;
/* �G */
static char ene_name[100];
static int ene_hp = 0, ene_power = 0,ene_money = 0;
/* �t���O */
static int flag = 1, flag_end = 0;
/* ���Ԃ̃t���O */
static int nakama_1 = 0, nakama_2 = 0, nakama_3 = 0, nakama_4 = 0, nakama_5 = 0;
/* �I���̋L�^ */
static int flag_3_1 = 0, flag_3_2 = 0, flag_3_3 = 0, flag_3_4 = 0;
static int flag_6_2 = 0;
static int flag_7_1 = 0, flag_7_2 = 0, flag_7_3 = 0, flag_7_4 = 0;

/* ���C���֐� */
int main(void)
{
	start();
	make_char();
	pro();
	while(flag!=99){
		switch(flag){
			case 1:
				flag = story_1();//�n�߁A��
				break;
			case 2:
				flag = story_2();//���l
				break;
			case 3:
				flag = story_3();//�X
				break;
			case 4:
				flag = story_4();//���A
				break;
			case 5:
				flag = story_5();//�D�_
				break;
			case 6:
				flag = story_6();//�X
				break;
			case 7:
				flag = story_7();//���@�g��
				break;
			case 8:
				flag = story_8();//�ፑ
				break;
			case 9:
				flag = story_9();//�C
				break;
			case 10:
				flag = story_10();//��
				break;
			case 11:
				flag = story_11();//��
				break;
			case 12:
				flag = story_12();//������
				break;
			case 13:
				flag = story_12_1();//1�K
				break;
			case 14:
				flag = story_12_2();//2�K
				break;
			case 15:
				flag = story_12_3();//3�K
				break;
			case 16:
				flag = story_12_4();//4�K
				break;
			case 17:
				flag = story_12_5();//5�K
				break;
			case 18:
				flag = story_12_6();//6�K
				break;
			case 19:
				flag = story_12_7();//7�K
				break;
			case 20:
				flag = story_12_8();//8�K
				break;
			case 21:
				flag = story_12_9();//9�K
				break;
			case 22:
				flag = story_12_01();//�n��1�K
				break;
			case 23:
				flag = story_12_02();//�n��2�K
				break;
			case 24:
				flag = story_12_03();//�n��3�K
				break;
			case 25:
				flag = story_12_04();//�n��4�K
				break;
			case 26:
				flag = story_12_05();//�n��5�K
				break;
			case 27:
				flag = story_12_099();//�n��99�K
				break;
			case 28:
				flag = story_12_10();//�ŏ�K
			case 29:
				flag = end(1);
				break;
			default:
				printf("\n �I���E�E�E�E�E�E\n");
				exit(0);
		}
	}
	return 0;
}

/* �n�� */
void start(void)
{
	printf( "\n �n�܂�܂��E�E�E�E�E�E\n"
			"\n enterkey\n");
	enterkey();
}

/* �v�����[�O */
void pro(void)
{
	enterkey();
	printf( "\n �������N�O�A�`���̗E�҂�\n"
			"\n ���낵�������Ƃ��̎艺������łڂ��B\n"
			);
	enterkey();
	printf( "\n �����āA���E�ɕ��a���K��A\n"
			"\n �l�͎��R����ɓ���A�L���Ȑ����𑗂��Ă����B\n"
			);
	enterkey();
	printf( "\n �������A���A���̕��a�͕���悤�Ƃ��Ă���B\n"
			"\n �˔@���ꂽ�����͍Ăѐ��E�����̂��߂ɓ����o�����E�E�E�E�E�E\n"
			);
	enterkey();
}

/* ����P */
int story_1(void)
{
	int sele;
	int story;
	
	save_write();
	
	printf( "\n ���\n"
			"\n �`���̎n�܂�\n"
			);
	enterkey();
	
	/* sele1(�n) */ 
	printf( "\n ���A�ڂ��o�߂��B\n"
			"\n �����獷�����ތ����܂Ԃ����B\n"
			"\n �������ǂ�������n�܂�A\n"
			"\n ����ȋC�������B\n"
			);
	enterkey();
	printf( "\n �����т́H\n"
			"\n 1.�H�ׂ�\n"
			"\n 2.�H�ׂȂ�\n"
			);
	printf("\n ���́F");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n ���H�͏Ă����Ẵp���Ƌ������B\n"
					"\n ���邩��ɂ����������B\n"
					);
			enterkey();
			printf( "\n �������A�����͕����Ă����I�I\n"
					"\n %s�͂T�̃_���[�W���󂯂��I�I\n"
					,name
					);
			hp -= 5;
			break;
		case 2:
			printf( "\n ����ς�A�����т𔲂��Ɨ͂��o�Ȃ��Ȃ��B\n"
					"\n ���Ȃ��������E�E�E�E�E�E\n"
					);
			enterkey();
			printf("\n %s�̗͂��Q���������E�E�E�E�E�E\n",name);
			power -= 2;
			break;
		default:
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	enterkey();
	ste();
	enterkey();
	/* sele1(�I) */
	
	/* sele2(�n) */ 
	printf( "\n �Ƃ���o��ƁA�����ɂ͓c���������B\n"
			"\n �c���u%s�A���ɏo��񂾂��āH�v\n"
			"\n �c���u��ς��ȁA�������ɗ����̂���v\n"
			"\n �c���u�I��ł���v\n"
			,name
			);
	enterkey();
	printf( "\n �ǂ�����炤�H\n"
			"\n 1.��̌�\n"
			"\n 2.�S�̏�\n"
			"\n 3.�򑐂P�_�[�X\n"
			);
	printf("\n ���́F");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n ���P����̌��A\n"
					"\n �ǂ�Ȃ��̂ł��؂ꂻ�����B\n"
					);
			enterkey();
			printf( "\n �������A���̌��͎���Ă���\n"
					"\n �P�O�̃_���[�W�I�I\n"
					);
			hp -= 10;
			break;
		case 2:
			printf( "\n �ƂĂ���䂻���ȓS�̏��A\n"
					"\n ��ɂȂ��ޗǂ�����\n"
					);
			printf("\n %s�̗͂��R�オ�����I�I\n",name);
			power += 3;
			break;
		case 3:
			printf( "\n �򑐂͕K���i���B\n"
					"\n �������񎝂��Ă������I�I\n"
					);
			enterkey();
			printf("\n %s�̗̑͂��P�Q�������I�I\n",name);
			hp += 12;
			break;
		default:
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	enterkey();
	ste();
	enterkey();
	/* sele2(�I) */
	
	menu();//���j���[
	
	printf( "\n ��������ɗ��Ă��ꂽ\n"
			);
	enterkey();
	printf( "\n �Ⴂ�����u���̌��������Ă����ȁv\n"
			"\n �Ⴂ�����u���̌��͓|�����G�̗͂��z���ł���I�I�v\n"
			);
	enterkey();
	printf( "\n �h���������h����ɓ��ꂽ�I�I\n"
			);
	enterkey();
	
	/* sele3(�n) */ 
	printf( "\n ���܂��������ɕʂ�������A\n"
			"\n ���ɗ��ɏo���B\n"
			"\n �_��Ȃ����󂪂ǂ��܂ł��L�����Ă���B\n"
			"\n ����Ȃ��L���鑐��������B\n"
			);
	enterkey();
	printf( "\n �����̂ق����牽��������Ă���̂��������Ɍ������B\n"
			"\n ���炩�ɐl�̐��ł͂Ȃ���������������B\n"
			"\n �ǂ���疂���̂悤���E�E�E�E�E�E\n"
			);
	enterkey();
	printf( "\n �����͂ǂ�Ȃ�H\n"
			"\n 1.�����ۂ�\n"
			"\n 2.���F���ۂ�\n"
			"\n 3.�Ԃ��ۂ�\n"
			);
	printf("\n ���́F");
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
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	/* sele3(�I) */
	
	/* sele4(�n) */ 
	printf( "\n ��ڂ̑��ɒ������B\n"
			"\n �̂�т�Ƃ������₩�ȑ����B\n"
			"\n �������A�߂��ɂ������l�ɘb�𕷂��Ă݂�ƁA\n"
			"\n �߂��̐X�ɋ��\�Ȗ���������č����Ă���炵���B\n"
			);
	enterkey();
	printf( "\n �ǂ�����H\n"
			"\n 1.�h�ɔ����Ĕ������\n"
			"\n 2.�ꏏ�ɗ������钇�Ԃ�T��\n"
			"\n 3.�X�̋��\�Ȗ�����|���ɍs��\n"
			);
	printf("\n ���́F");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n ���̑��ɂ͏h���R�������B\n"
					"\n �R�̏h�ɂ͂��ꂼ�����������B\n"
					);
			enterkey();
			printf( "\n �ǂ��ɂ���H\n"
					"\n 1.���������������h\n"
					"\n 2.�ӂ��ӂ��x�b�g������h\n"
					"\n 3.�L���ȉ��򂪂���h\n"
					);
			printf("\n ���́F");
			scanf("%d",&sele);
			enterkey();
			switch(sele){
				case 1:
					printf( "\n ���������������h�ɔ��܂����B\n"
							"\n �����̗�����H�ׂ�΁A�͂��݂Ȃ����Ă���I�I\n"
							);
					enterkey();
					printf( "\n �͂��P�O�オ�����I�I\n");
					power += 10;
					story = 3;
					break;
				case 2:
					printf( "\n �ӂ��ӂ��x�b�g������h�ɔ��܂����B\n"
							"\n ���̃x�b�g�Ȃ�悢�������ꂻ�����B\n"
							);
					enterkey();
					printf( "\n ���̖����u���Ȃ����������Ă���́H�v\n"
							"\n �����h�ɔ��܂��Ă��錩�m��ʖ��@�g�����b�������Ă����B\n"
							);
					enterkey();
					printf( "\n ���̖����u�����������Ă���񂾂��ǁA��l���Ƃ��낢���ςłˁv\n"
							"\n ���̖����u�ǂ��A�ꏏ�ɗ������Ȃ��H�v\n"
							);
					enterkey();
					printf( "\n ���̖��������ԂɂȂ����B\n");
					nakama_3 = 1;
					story = 7;
					break;
				case 3:
					printf( "\n �L���ȉ��򂪂���h�ɔ��܂����B\n"
							"\n �����̉���ɓ���΁A���Ȃ񂩐�����ԁI�I\n"
							);
					enterkey();
					printf( "\n �̗͂��R�O�������I�I\n");
					hp += 30;
					story = 3;
					break;
				default:
					printf("\n �I���E�E�E�E�E�E\n");
					exit(0);
			}
			break;
		case 2:
			printf( "\n ���Ԃ�T�����Ƃɂ����B\n"
					"\n �����������Ă���ƁA��l�̗��l���������B\n"
					);
			enterkey();
			printf( "\n �������l�u���Ԃ�T���Ă���̂��H�v\n"
					"\n �������l�u���傤�ǉ�����l�ł͌������ƍl���Ă����Ƃ��낾�v\n"
					"\n �������l�u��낵���ȁv\n"
					);
			enterkey();
			printf("\n �������l�����ԂɂȂ����B\n");
			nakama_1 = 1;
			story = 2;
			break;
		case 3:
			printf( "\n �X�ւ���Ă���ƁA�d�ꂵ���C�z���������B\n"
					"\n ���̂ق�����X�萺����������B\n"
					);
			enterkey();
			printf( "\n �ǂ�����H\n"
					"\n 1.���֐i��\n"
					"\n 2.�S�͂œ�����\n"
					);
			printf("\n ���́F");
			scanf("%d",&sele);
			enterkey();
			switch(sele){
				case 1:
					printf("\n %s�͐X�̉��֐i�񂾁B\n",name);
					enterkey();
					printf("\n �Ȃ�Ƃ����ɂ����̂͗��������I�I�I\n");
					enterkey();
					battle(4);
					printf("\n �|�����Ԃ������N���オ���Ă����B\n");
					enterkey();
					printf("\n �Ԃ��������ԂɂȂ����B\n");
					nakama_4 = 1;
					story = 10;
					break;
				case 2:
					printf( "\n %s�͑S�͂œ����o�����B\n"
							"\n ���܂Ő����Ă������ň�Ԃ̖{�C���o�����B\n"
							,name
							);
					enterkey();
					printf( "\n �������A����������ׂ����x�Œǂ��Ă��Ă���B\n");
					enterkey();
					printf( "\n ���ɁA%s�͐U��Ԃ��Ă��܂����B\n",name);
					enterkey();
					printf( "\n �����Ō����̂́A������΂𐁂��h���S���������B\n");
					enterkey();
					printf( "\n %s�́A���̉΂Ɉ��܂ꎀ��ł��܂����E�E�E�E�E�E\n",name
					);
					enterkey();
					exit(0);
				default:
					exit(0);
			}
			break;
		default:
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	enterkey();
	ste();
	enterkey();
	/* sele4(�I) */
	
	return story;
}

/* ����Q�i���l�j */
int story_2(void)
{
	int sele;
	int story;
	int ran_1, ran_2;
	
	save_write();
	
	printf( "\n ���\n"
			"\n ���l�Ɨ��l\n"
			);
	enterkey();
	
	/* sele1(�n) */ 
	printf( "\n �������l�ƂƂ��ɗ��𑱂���B\n"
			"\n ���l�͉��\�N�����𑱂��Ă���悤�ŁA\n"
			"\n �F�X�Ȃ��Ƃ�m���Ă����B\n"
			);
	enterkey();
	printf( "\n �������l�u���̐�A�k�֌������ΐ[���J������v\n"
			"\n �������l�u�[���J�ɂ͋��낵������������炵���v\n"
			);
	enterkey();
	printf( "\n �������l�u������g���ď��������Ƃ���v\n");
	printf( "\n �ǂ����H\n"
			"\n 1.��\n"
			"\n 2.�p���[\n" 
			);
	printf("\n ���́F");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n �򑐂��g�����I�I\n"
					"\n �̗͂��R�O�񕜂����I�I\n"
					);
			hp += 30;
			enterkey();;
			break;
		case 2:
			printf( "\n �p���[���g�����I�I\n"
					"\n �͂��P�O�オ�����I�I\n"
					);
			power += 10;
			enterkey();
			break;
		default:
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele1(�I) */
	
	/* sele2(�n) */ 
	printf( "\n �[���J�ւ̓���i��\n"
			"\n �؂⑐���܂΂�ɐ����Ă���\n"
			);
	enterkey();
	printf( "\n �������l�u�������ɐ����Ă���L�m�R�����邾�낤�H�v\n"
			"\n �������l�u�����H�ׂ�Ƒ̂ɉ������N����v\n"
			);
	enterkey();
	printf( "\n �H�ׂ܂����H \n"
			"\n 1.�H�ׂ�\n"
			"\n 2.�H�ׂȂ�\n"
			);
	printf("\n ���́F");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			srand((unsigned)time(NULL));
			ran_1 = rand()%2 + 1;
			printf( "\n �h�i�j�J�I�R���_�P�h��H�ׂ�\n"
					);
			enterkey();
			srand((unsigned)time(NULL));
			ran_2 = rand()%50 + 1;
			if(ran_1==1){
				printf("\n �̗͂�%d�������E�E�E�E�E�E\n",ran_2);
				printf("\n �͂�%d�������E�E�E�E�E�E\n",ran_2);
				hp -= ran_2;
				power -= ran_2;
				if(hp<=0){
					printf("\n %s�͎���ł��܂����E�E�E�E�E�E\n",name);
					exit(0);
				} if(power<=0){
					power = 1;
				}
			} else if(ran_1==2){
				printf("\n �̗͂�%d�������I�I�I\n",ran_2);
				printf("\n �͂�%d�������I�I\n",ran_2);
				hp += ran_2;
				power += ran_2;
				hp_1 += ran_2;
				power_1 += ran_2;
			}
			enterkey();
			break;
		case 2:
			printf( "\n �������l�u����Ȃ��ƌ��킸�ɐH�ׂĂ݂��v\n"
					);
			enterkey();
			printf( "\n �̗͂��P�O�オ�����I�I\n");
			printf( "\n �͂��T�オ�����I�I\n");
			hp += 10;
			power += 5;
			hp_1 += 10;
			power_1 += 5;
			break;
		default:
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele2(�I) */
	
	/* sele3(�n) */
	printf( "\n �[���J�֌�����\n"
			);
	enterkey();
	printf( "\n �������l�u�������������͂����v\n"
			"\n ���̓��̉����̕��ɒJ�������Ă����B\n"
			);
	enterkey();
	printf( "\n �������l�u�܂����I �������邼�I�v\n"
			);
	enterkey();
	printf( "\n �����H\n"
			"\n 1.����\n"
			"\n 2.������\n"
			);
	printf("\n ���́F");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n �������P���Ă����I�I\n"
					);
			enterkey();
			battle(5);
			break;
		case 2:
			printf( "\n ���Ƃ������؂����E�E�E�E�E�E\n"
					);
			enterkey();
			break;
		default:
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele3(�I) */
	
	/* sele4(�n) */
	printf( "\n �[���J�ɒ�����\n"
			);
	enterkey();
	printf( "\n �������l�u���̒J��n��Ȃ���΂Ȃ�Ȃ��v\n"
			"\n �������l�u�����R�{����v\n"
			);
	enterkey();
	printf( "\n �ǂ̋��H\n"
			"\n 1.���̋�\n"
			"\n 2.�^�񒆂̋�\n"
			"\n 3.�E�̋�\n"
			);
	printf("\n ���́F");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n ���̋���n��\n"
					);
			enterkey();
			printf( "\n ���̐^�񒆂֗����Ƃ����\n"
					"\n �������߂Â��Ă���C�z��������\n"
					);
			enterkey();
			printf( "\n �ǂ�����H\n"
					"\n 1.�����Ō}������\n"
					"\n 2.�����ċ���n��؂�\n"
					"\n 3.�������э~���\n"
					);
			printf("\n ���́F");
			scanf("%d",&sele);
			switch(sele){
				case 1:
					printf( "\n �����Ō}�����I�I�I\n");
					enterkey();
					battle(6);
					break;
				case 2:
					printf( "\n ����n�肫�邽�ߑ������I�I\n");
					enterkey();
					printf( "\n �������A������������G�������Ă����I�I\n");
					enterkey();
					battle(7);
					break;
				case 3:
					printf( "\n �������э~�肽�I�I\n");
					enterkey();
					printf( "\n �J��֗����Ă����E�E�E�E�E�E\n");
					enterkey();
					printf( "\n �ƁA���̂Ƃ��A���҂��Ɏ󂯎~�߂�ꂽ�I\n");
					enterkey();
					printf( "\n �Ȃ�Ƃ���� �h�咹�h �������I�I\n");
					enterkey();
					printf( "\n �咹�͔��Α��֑���͂��Ă��ꂽ\n");
					enterkey();
					printf( "\n �咹�̏�ł�����Ƌx�񂾁I\n"
							"\n �̗͂��R�O�������I�I\n"
							);
					hp += 30;
					break;
				default:
					printf(" \n �I���E�E�E�E�E�E\n");
					exit(0);
			}
			break;
		case 2:
			printf( "\n �^�񒆂̋���n��\n"
					);
			enterkey();
			printf( "\n �������߂Â��Ă���C�z��������I�I\n"
					);
			enterkey();
			battle(7);
			break;
		case 3:
			printf( "\n �E�̋���n��\n"
					);
			enterkey();
			printf( "\n ����n��؂�\n"
					);
			enterkey();
			printf( "\n ���̓��͊X�ɑ����悤���E�E�E�E�E�E\n"
					);
			enterkey();
			return 5;
		default:
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele4(�I) */
	
	printf( "\n ����n��؂�Ƃ��̐�͐X������\n"
			);
	
	story = 3;
	
	return story;
}

/* ����R�i�X�j */
int story_3(void)
{
	int ran_1,i;
	int sele;
	int story;
	
	save_write();
	
	printf( "\n �O��\n"
			"\n �X�̔�����\n"
			);
	enterkey();
	
	/* sele1(�n) */
	printf( "\n �Â��X�ɒ�����\n"
			"\n ���낵���Â���\n"
			);
	enterkey();
	if(nakama_1==1){
		printf( "\n �������l�u���̐X�͊댯�������A��������v\n");
		enterkey();
	}
	printf( "\n ���Ƃ����ɂ͂���܂�ȓ���i��\n"
			);
	enterkey();
	for(i=0; i<3;i++){
		printf( "\n ���ނ炪�h�ꂽ�E�E�E�E�E�E\n");
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
			printf( "\n �����N����Ȃ������E�E�E�E�E�E\n");
		enterkey();
	}
	ste();
	enterkey();
	/* sele1(�I) */
	
	/* sele2(�n) */
	printf( "\n �X�̒���i��\n"
			);
	enterkey();
	printf( "\n ������ɕ�����Ă���\n"
			"\n �E�̓��͂܂������ȓ�\n"
			"\n ���̓��͋Ȃ��肭�˂��Ă��铹\n"
			);
	enterkey();
	printf( "\n �ǂ����H\n"
			"\n 1.�E�̓�\n"
			"\n 2.���̓�\n"
			);
	printf("\n ���́F");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n �E�̂܂������ȓ���i��\n"
					);
			enterkey();
			printf( "\n �򑐂��������񐶂��Ă����I�I\n"
					"\n �̗͂��R�O�������I�I\n"
					);
			hp += 30;
			flag_3_2 = 1;
			enterkey();
			break;
		case 2:
			printf( "\n ���̋Ȃ��肭�˂�������i��\n"
					);
			enterkey();
			printf( "\n �F�Ƃ�ǂ�ȉԂ��炢�Ă���\n"
					);
			enterkey();
			printf( "\n �ǂ��H�ׂ�H\n"
					"\n 1.�Ԃ���\n"
					"\n 2.����\n"
					"\n 3.������\n"
					);
			printf("\n ���́F");
			scanf("%d",&sele);
			switch(sele){
				case 1:
					printf( "\n �Ԃ��Ԃ�H�ׂ�\n");
					enterkey(); 
					printf( "\n ���������I�I\n"
							"\n �̗͂��R�O�������I�I\n");
					hp += 30;
					enterkey();
					break;
				case 2:
					printf( "\n ���Ԃ�H�ׂ�\n");
					enterkey(); 
					printf( "\n �[�݂̂��邢�������I�I\n"
							"\n �̗͂��Q�O�������I�I\n"
							"\n �͂��P�O�������I�I\n");
					enterkey();
					hp += 20;
					power += 10;
					enterkey();
					break;
				case 3:
					printf( "\n �����Ԃ�H�ׂ�\n");
					enterkey(); 
					printf( "\n ���������������I�I\n"
							"\n �͂��Q�O�������I�I\n");
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
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele2(�I) */
	
	/* sele3(�n) */
	printf( "\n ����ɐX�̉��֐i��\n"
			);
	enterkey();
	if(flag_3_2==1){
		printf( "\n ���̓͂��Ȃ��Â��X�̒������Ă����\n"
				"\n �����Əo�����\n"
				);
		enterkey();
		printf( "\n ���̖����u����ȂƂ���Ől�Ɖ�Ȃ�Ē�������ˁv\n"
				"\n ���̖����u���̐X�𔲂�������ł���H�v\n"
				"\n ���̖����u�����������������Ă������v\n"
				);
		enterkey();
		printf( "\n ���̖����u���̐�̕����ꓹ���E�ɍs���Ȃ����v\n"
				"\n ���������Ǝ��̖����͂ǂ����֋����Ă������B\n"
				);
		enterkey();
		printf( "\n ����i�ނƓ����R�{�ɕ�����Ă���\n"
				"\n ���̓��͌�����\n"
				"\n �^�񒆂̓��͂₳����\n"
				"\n �E�̓��͐^���Âŉ��������Ȃ�\n"
				);
		enterkey();
		printf( "\n �ǂ̓����s���H\n"
				"\n 1.���̓�\n"
				"\n 2.�^�񒆂̓�\n"
				"\n 3.�E�̓�\n"
				);
		printf( "\n ���́F");
		scanf("%d",&sele);
	}
	if(flag_3_2==2){
		printf( "\n �����R�{�ɕ�����Ă���\n"
				"\n ���̓��͍r��Ă��铹\n"
				"\n �^�񒆂̓��͂��ꂢ�ȓ�\n"
				"\n �E�̓��͖����[��\n"
				);
		enterkey();
		printf( "\n �ǂ̓��H\n"
				"\n 1.���̓�\n"
				"\n 2.�^�񒆂̓�\n"
				"\n 3.�E�̓�\n"
				);
		printf("\n ���́F");
		scanf("%d",&sele);
		if(sele==1) sele = 4;
		else if(sele==2) sele = 5;
		else if(sele==3) sele = 6;
		enterkey();
	}
	switch(sele){
		case 1:
			printf( "\n ����������i��\n"
					);
			enterkey();
			printf( "\n �ʂ��ꏊ���Ȃ����炢�A\n"
					"\n �؂��܂�d�Ȃ��ē|��Ă���\n"
					);
			enterkey();
			printf( "\n �؂��|��Ă����I�I\n"
					);
			enterkey();
			printf( "\n �ǂ�����H\n"
					"\n 1.���ɂƂ�ł悯��\n"
					"\n 2.�E�ɂƂ�ł悯��\n"
					"\n 3.�|��Ă����؂��󂯎~�߂�\n"
					);
			printf( "\n ���́F");
			scanf("%d",&sele);
			system("cls");
			switch(sele){
				case 1:
					printf("\n �Ȃ�Ƃ��悯�؂����I�I\n");
					enterkey();
					break;
				case 2:
					printf( "\n �����Ԃ��ꂽ�I�I\n"
							"\n �Q�O�̃_���[�W�I�I\n"
							);
					hp += 20;
					enterkey();
					break;
				case 3:
					printf( "\n �󂯎~�߂Ă݂���I�I\n");
					enterkey();
					if(power>=30){
						printf( "\n ���Ƃ��󂯎~�߂��I�I\n"
								"\n �͂��P�O�オ�����I�I\n");
						power += 10;
						enterkey();
					} else {
						printf( "\n �͂����肸�󂯎~�߂��Ȃ������E�E�E�E�E�E\n"
								"\n �Q�O�̃_���[�W�I�I\n");
						enterkey();
					}
					break;
				default:
					break;
			}
			break;
		case 2:
			printf( "\n �D��������i��\n"
					);
			enterkey();
			printf( "\n ���z���������މԔ����������I�I\n"
					"\n ���ꂢ�Ȍi�F���I�I\n"
					);
			enterkey();
			printf( "\n �S���a��\n"
					"\n �̗͂��R�O�񕜂����I�I\n"
					);
			hp += 30;
			enterkey();
			break;
		case 3:
			enterkey();
			printf( "\n �^���Âȓ���i��\n"
					"\n ���������Ȃ��E�E�E�E�E�E\n"
					);
			enterkey();
			printf( "\n ���̂Ƃ��ˑR�A���肪���邭�Ȃ����I�I\n"
					);
			enterkey();
			printf( "\n �������Ǝv���ĐU��Ԃ�ƁA\n"
					"\n �����ɂ͎��̖���������\n"
					"\n ��ɂ͏񂪂���A���ꂪ���邭�P���Ă���\n"
					);
			enterkey();
			printf( "\n ���̖����u�{���ɂ��̓��ɗ����̂ˁv\n"
					"\n ���̖����u���̓���i�߂ΐX�𔲂������v\n"
					);
			enterkey();
			printf( "\n ���̖��������ԂɂȂ����I�I�I\n"
					);
			nakama_3 = 1;
			story = 7;
			return story;
		case 4:
			printf( "\n �r�ꂽ����i��\n"
					);
			enterkey();
			printf( "\n �����̂��܂܂Ȃ�Ȃ�\n"
					"\n ���ē������Ȃ��Ȃ��Ă���\n"
					);
			enterkey();
			printf( "\n �؂������Ă���悤�ɂ݂���\n"
					);
			enterkey();
			printf( "\n �؂��P���Ă����I�I�I\n"
					);
			enterkey();
			battle(11);
			break;
		case 5:
			printf( "\n ���ꂢ�ȓ���ʂ�\n"
					"\n �l�ɂ���ĕܑ�����Ă���\n"
					);
			enterkey();
			if(nakama_1==1)
				printf( "\n �������l�u���̓��͊X�ɑ����Ă��邺�v\n");
			printf( "\n �W��������Ɓh���̐�A�X�h�Ƃ���\n"
					);
			enterkey();
			story = 6;
			return story;
		case 6:
			printf( "\n �����[������i��\n"
					);
			enterkey();
			printf( "\n �Ђ�����i�ނƊJ�����ꏊ�ɏo��\n"
					);
			enterkey();
			printf( "\n �����͌΂������E�E�E�E�E�E\n"
					);
			story = 11;
			return story;
		default:
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele3(�I) */
	
	/* sele4�i�n�j */
	printf( "\n �X�̉��[���Ƃ���܂ŗ���\n"
			"\n �����Ȃ�ʋC�z��������\n"
			);
	enterkey();
	printf( "\n �X�̔Ԑl�u�����͒N�����������Ă͂Ȃ�ʏꏊ�v\n"
			"\n �X�̔Ԑl�u��������������v\n"
			);
	enterkey();
	printf( "\n �����H\n"
			"\n 1.����\n"
			"\n 2.�X���o��\n"
			);
	printf( "\n ���́F");
	scanf("%d",&sele);
	system("cls");
	switch(sele){
		case 1:
			battle(12);
			printf( "\n �X�̒��S�Ɍ���P����΂�����\n"
					);
			enterkey();
			printf( "\n �X�̕�΂���ɓ��ꂽ�I�I\n"
					"\n �͂��R�O�オ�����I�I\n"
					);
			power += 30;
			enterkey();
			printf( "\n �X�𔲂���\n"
					);
			enterkey();
			break;
		case 2:
			printf( "\n ���̏��������\n"
					);
			enterkey();
			break;
		default:
			break;
	}
	/* sele4�i�I�j */
	printf("\n �X�𔲂���ƁA�����ɂ͓��A��������\n"
			);
	enterkey();
	story = 4;
	return story;
}

/* ����S�i���A�j */
int story_4(void)
{
	int sele;
	int ran_1;
	int sele_1,sele_2,sele_3;
	
	save_write();
	
	printf( "\n �l��\n"
			"\n ��݂̍肩\n"
			);
	enterkey();
	
	/* sele1(�n) */
	printf( "\n ���A�ɓ�����\n"
			);
	enterkey();
	if(nakama_1==1){
		printf( "\n �������l�u�ǂ��ɖ���������ł��邩������Ȃ��v\n"
				"\n �������l�u�C��t����v\n"
				);
		enterkey();
	}
	printf( "\n ���A�̒��͐^���ÂŁA\n"
			"\n ��Ɏ����Ă��鏼�����������肾\n"
			);
	enterkey();
	printf( "\n �b������������������\n"
			);
	enterkey();
	printf( "\n �������Ԃ����Ă����I�I\n"
			);
	enterkey();
	printf( "\n �T�̃_���[�W�I�I\n"
			);
	hp -= 5;
	if(hp<=0){
		printf( "\n %s�͎���ł��܂����E�E�E�E�E�E\n",name
				);
		exit(0);
	}
	battle(13);
	ste();
	enterkey();
	/* sele1(�I) */
	
	/* sele2(�n) */
	printf( "\n ���A��i��ł���\n"
			);
	enterkey();
	printf( "\n �h�i�j�J�I�R���_�P�h���������I�I\n"
			);
	enterkey();
	printf( "\n �ǂ�����H�ׂ�H\n"
			"\n 1.�Ԃ��L�m�R\n"
			"\n 2.���L�m�R\n"
			"\n 3.�H�ׂȂ�\n"
			);
	printf("\n ���́F");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			srand((unsigned)time(NULL));
			ran_1 = rand()%30 + 1;
			printf( "\n �͂�%d�オ�����I�I\n",ran_1
					);
			power += 30;
			enterkey();
			flag = 1;
			break;
		case 2:
			srand((unsigned)time(NULL));
			ran_1 = rand()%50 + 1;
			printf( "\n �̗͂�%d�オ�����I�I\n",ran_1
					);
			hp += ran_1;
			enterkey();
			flag = 2;
			break;
		case 3:
			printf( "\n �H�ׂ��ɏI������E�E�E�E�E�E\n"
					);
			break;
		default:
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele2(�I) */
	
	/* sele3(�n) */
	printf( "\n ���A������ɐi��\n"
			);
	enterkey();
	printf( "\n �J�����ꏊ�ɏo��\n"
			"\n �s�C���Ȕ����S����\n"
			);
	enterkey();
	printf( "\n ���o�[���Q����A\n"
			"\n ���ꂼ�ꍶ�E�ǂ��炩�ɓ|����\n"
			);
	enterkey();
	printf( "\n �P�ڂ̃��o�[\n"
			"\n 1.��\n"
			"\n 2.�E\n"
			);
	printf("\n ���́F");
	scanf("%d",&sele_1);
	system("cls");
	printf( "\n �Q�ڂ̃��o�[\n"
			"\n 1.��\n"
			"\n 2.�E\n"
			);
	printf("\n ���́F");
	scanf("%d",&sele_2);
	system("cls");
	if(sele_1==0&&sele_2==0){
		printf( "\n �P�̔����J�����E�E�E�E�E�E\n"
				);
		enterkey();
		printf( "\n �򑐂��������I�I\n"
				"\n �̗͂��U�O�������I�I\n"
				);
		hp += 60;
		enterkey();
	} else if(sele_1==1&&sele_2==0){
		printf( "\n �Q�̔����J�����E�E�E�E�E�E\n"
				);
		enterkey();
		printf( "\n �p���[���������I�I\n"
				"\n �͂��Q�O�オ�����I�I\n"
				);
		power += 20;
		enterkey();
	} else if(sele_1==0&&sele_2==1){
		printf( "\n �R�̔����J�����E�E�E�E�E�E\n"
				);
		enterkey();
		battle(14);
	} else if(sele_1==1&&sele_2==1){
		printf( "\n �S�̔����J�����E�E�E�E�E�E\n"
				);
		enterkey();
		printf( "\n �܂Ԃ������Ɏv�킸�ڂ��Ԃ����I\n"
				);
		enterkey();
		printf( "\n �����͏o���������I�I\n"
				);
		enterkey();
		return 5;
	} else {
		printf( "\n �I���E�E�E�E�E�E\n"
				);
		exit(0);
	}
		ste();
	enterkey();
	/* sele3(�I) */
	
	/* sele4(�n) */
	printf( "\n ���A�̒�������ɐi��ł���\n"
			);
	enterkey();
	printf( "\n �傫���s�C���Ȕ��ɂԂ�����\n"
			"\n �����Ȃ�ʋC�z��������E�E�E�E�E�E\n"
			);
	enterkey();
	printf( "\n ����Ȕ��������Ƃ���͊ȒP�ɊJ����\n"
			);
	enterkey();
	printf( "\n ���̒��ɓ���\n"
			);
	enterkey();
	printf( "\n �����ɂ͉���������\n"
			);
	enterkey();
	battle(15);
	printf( "\n ���A�𔲂����E�E�E�E�E�E\n"
			);
	enterkey();
	ste();
	enterkey();
	/* sele4(�I) */
	
	return 0;
}

/* ����T�i�D�_�A�����A�����j */
int story_5(void)
{
	int sele;
	int loop = 1;
	int t_1=0,t_2=0,t_4=0,t_5=0;
	
	save_write();
	
	printf( "\n �܏�\n"
			"\n �����Q��\n"
			);
	enterkey();
	
	/* sele1(�n) */
	printf( "\n �X�ɒ������B�����͊��C���ӂ��L���ȊX�I�I\n"
			);
	enterkey();
	menu();
	ste();
	enterkey();
	/* sele1(�I) */
	
	/* sele2(�n) */
	printf( "\n �X������Ă���ƁA�Ȃɂ�瑛������\n"
			);
	enterkey();
	printf( "\n �ǂ����M���̉ƂɓD�_���������悤��\n"
			);
	enterkey();
	menu();
	ste();
	enterkey();
	/* sele2(�I) */
	
	/* sele3(�n) */
	printf( "\n �H�n������������\n"
			);
	enterkey();
	printf( "\n ���Ă݂�ƁA�N�������m�Ɉ͂܂�Ă���E�E�E�E�E�E\n"
			);
	enterkey();
	printf( "\n ������H\n"
			"\n 1.������񏕂���\n"
			"\n 2.�ւ�肽���Ȃ�\n"
			);
	printf("\n ���́F");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			battle(16);
			printf( "\n �D�����D�_�u�����Ă����������肪�Ƃ��������܂��v\n"
					);
			enterkey();
			printf( "\n �D�����D�_�u���Ԃɂ��Ă��������v\n"
					);
			nakama_2 = 1;
			flag = 1;
			break;
		case 2:
			printf( "\n ���Ȃ��������Ƃɂ���\n"
					);
			enterkey();
			printf( "\n ���̊X��ڎw��\n"
					);
			enterkey();
			flag = 2;
			return 6;
		default:
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele3(�I) */
	
	/* sele4(�n) */
	printf( "\n �D�����D�_�u���̊X�Ɉ����M�������܂��v\n"
			"\n �D�����D�_�u���͂����𒦂炵�߂����v\n"
			"\n �D�����D�_�u�͂�݂��Ă��������v\n"
			);
	enterkey();
	printf( "\n %s��������\n",name
			);
	enterkey();
	menu();
	ste();
	enterkey();
	/* sele4(�I) */
	
	/* sele5(�n) */
	printf( "\n �����M���̉��~�ւ��̂т���\n"
			"\n �ړI�͈����̏؋���\n"
			);
	enterkey();
	while(loop!=0){
		printf( "\n �����T����E�E�E�E�E�E\n"
				"\n �ǂ�H\n"
				"\n 1.�Ԃ���\n"
				"\n 2.������\n"
				"\n 3.������\n"
				"\n 4.����\n"
				"\n 5.��������\n"
				);
		printf( "\n ���́F"
				);
		scanf("%d",&sele);
		switch(sele){
			case 1:
				t_1 += 1;
				if(t_1==1){
					printf( "\n �Ԃ������J����E�E�E�E�E�E\n"
							);
					enterkey();
					battle(16);
					printf( "\n ���̕����ɂ͉����Ȃ��E�E�E�E�E�E\n"
							);
					enterkey();
				} else {
					printf( "\n ���̔��͂����J����\n"
							);
					enterkey();
				}
				break;
			case 2:
				t_2 += 1;
				if(t_2==1){
					printf( "\n ���������J����E�E�E�E�E�E\n"
							);
					enterkey();
					printf( "\n �򑐂��������I�I\n"
							"\n �̗͂��T�O�񕜂����I�I\n"
							);
					hp += 50;
					enterkey();
				} else {
					printf( "\n ���̔��͂����J����\n"
							);
					enterkey();
				}
				break;
			case 3:
				printf( "\n ���������J�����E�E�E�E�E�E\n"
						);
				enterkey();
				battle(17);
				printf( "\n �����̒���T���E�E�E�E�E�E\n"
						"\n �����̏؋����������I�I\n"
						);
				enterkey();
				printf( "\n �D�����D�_�u����ł��̊X�͋~����I�I�v\n"
						"\n �D�����D�_�u���肪�Ƃ��������܂����I�I�v\n"
						);
				enterkey();
				loop = 0;
				break;
			case 4:
				t_4 += 1;
				if(t_4==1){
					printf( "\n �������J�����E�E�E�E�E�E\n"
							);
					enterkey();
					battle(16);
					printf( "\n ���̕����ɂ͉����Ȃ��E�E�E�E�E�E\n"
							);
					enterkey();
				} else {
					printf( "\n ���̔��͂����J����\n"
							);
					enterkey();
				}
				break;
			case 5:
				t_5 += 1;
				if(t_5==1){
					printf( "\n �������J�����E�E�E�E�E�E\n"
							);
					enterkey();
					printf( "\n �򑐂��������I�I\n"
							"\n �̗͂��T�O�񕜂����I�I\n"
							);
					hp += 50;
					enterkey();
				} else {
					printf( "\n ���̔��͂����J����\n"
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
	/* sele5(�I) */
	
	printf( "\n ���͉�������\n"
			);
	enterkey();
	printf( "\n ���̊X�֌�����\n"
			);
	enterkey();
	
	return 6;
}

/* ����U�i�X�j */
int story_6(void)
{
	int sele;
	
	save_write();
	
	printf( "\n �Z��\n"
			"\n ���₩�ȊX\n"
			);
	enterkey();
	
	/* sele1(�n) */
	printf( "\n �傫�ȊX�ɒ�����\n"
			"\n ���S�ɂ͉��l���Z�ޏ邪����\n"
			);
	enterkey();
	printf( "\n �ЂƂ܂�����������ߏh�ɔ��܂���\n"
			);
	enterkey();
	printf( "\n �̗͂��T�O�񕜂����I�I\n"
			);
	enterkey();
	menu();
	ste();
	enterkey();
	/* sele1(�I) */
	
	/* sele2(�n) */
	printf( "\n �X�̒����U������\n"
			);
	enterkey();
	printf( "\n �ˑR�A��ǂ��������\n"
			"\n ����ɉ΂̎肪������n�߂�\n"
			);
	enterkey();
	printf( "\n �����R���U�ߍ���ł����I�I\n"
			"\n �X�ɂ��镺�m��킦����̂��X����邽��\n"
			"\n �����R�Ɍ������ē˂�����ł���\n"
			);
	enterkey();
	printf( "\n �X�̂��߂ɓ����H\n"
			"\n 1.������O���I�I\n"
			"\n 2.����A��߂Ă�����\n"
			);
	enterkey();
	printf( "\n ���́F");
	scanf("%d",&sele);
	switch(sele){
		case 1:
			printf( "\n �����R�ɍU�ߍ���\n"
					);
			enterkey();
			battle(18);
			flag_6_2 = 1;
			break;
		case 2:
			printf( "\n ���̊X���o�悤�Əo���֌�����\n"
					);
			enterkey();
			printf( "\n ���̖����u�ǂ��֍s���́H�v\n"
					"\n �˔@���ꂽ�A���̖����������ӂ�����\n"
					);
			enterkey();
			printf( "\n ���̖����u�݂�Ȃœ������I�I�v\n"
					);
			enterkey();
			printf( "\n ���̖��������ԂɂȂ����I�I\n"
					);
			nakama_3 = 1;
			enterkey();
			flag_6_2 = 2;
			break;
		default:
			printf( "\n �I���E�E�E�E�E�E\n"
					);
			exit(0);
	}
	ste();
	enterkey();
	/* sele2(�I) */
	
	/* sele3(�n) */
	printf( "\n �߂��ɂ����l���򑐂����ꂽ�I�I\n"
			"\n �̗͂��P�O�O�񕜂����I�I\n"
			);
	hp += 100;
	enterkey();
	printf( "\n ����ɖ����R�ɓ˂�����\n"
			);
	enterkey();
	battle(19);
	enterkey();
	/* sele3(�I) */
	
	/* sele4(�n) */
	printf( "\n �߂��ɂ����R�b�N����\n"
			"\n �������������������������Ă��ꂽ�I�I\n"
			);
	enterkey();
	printf( "\n �̗͂��R�O�O�񕜂����I�I\n"
			);
	hp += 300;
	enterkey();
	printf( "\n �����R�ɓ˂����ށI�I\n"
			);
	enterkey();
	battle(20);
	enterkey();
	/* sele4(�I) */
	
	/* sele5(�n) */
	printf( "\n �قƂ�ǂ̖����R���R�U�炵���I�I\n"
			);
	enterkey();
	if(nakama_3 == 1){
		printf( "\n ���̖����u���\�|������ˁv\n"
				"\n ���̖����u�����ꑧ��v\n"
				);
		enterkey();
	}
		printf( "\n �����R�̊����u�����܂ł���Ă��܂��Ƃ͂ȁv\n"
				"\n �����R�̊����u�Ō�͎����������v\n"
				);
		enterkey();
		battle(21);
		enterkey();
	/* sele5(�I) */
	
	printf( "\n �����R�Ƃ̐킢�͏I������E�E�E�E�E�E\n"
			);
	enterkey();
	printf( "\n ��V�Ƃ��ĂP�O�O�O�O�~��������I�I\n"
			);
	money += 10000;
	enterkey();
	
	menu();
	
	if(nakama_3==1){
		printf( "\n ���̖����u���̊X�ł̗p�����ς񂾂��s���܂��傤�v\n"
				);
		enterkey();
		return 7;
	}
	
	printf( "\n ���̊X���o��\n"
			);
	enterkey();
	printf( "\n �Ɋ��̒n�֌������E�E�E�E�E�E\n"
			);
	enterkey();
	ste();
	enterkey();
	return 8;
}

/* ����V�i���@�g���j */
int story_7(void)
{
	int sele;
	
	save_write();
	
	printf( "\n ����\n"
			"\n �����閂��\n"
			);
	enterkey();
	
	/* sele1(�n) */
	printf( "\n ���̖����Ƌ��ɗ�������\n"
			);
	enterkey();
	printf( "\n ���̖����u���͂��閂����T���Ă���́v\n"
			);
	enterkey();
	printf( "\n ���̖����u�����������Ȃ��Ⴂ���Ȃ��v\n"
			);
	enterkey();
	printf( "\n �Ƃ��鑺�ō��������ɂ��ĕ������ނ��Ƃɂ���\n"
			);
	enterkey();
	printf( "\n ���lA�u���������H��������k�ɂ��鑺�Ō����������v\n"
			"\n ���lB�u����A����Ȃ͂��͂Ȃ��B��̑��ɂ���͂����v\n"
			"\n ���lC�u���̑��ɂ���B����ȋC������񂾁E�E�E�E�E�E�v\n"
			"\n ���lD�u���̖_���|�ꂽ�����ɂ���E�E�E�E�E�E�����I�I�v\n"
			);
	printf( "\n ���̑��̐l�X�͉R�����Ȃ��E�E�E�E�E�E\n"
			);
	enterkey();
	while(1){
		printf( "\n �ǂ��ɍs���H\n"
				"\n 1.�k�̑�\n"
				"\n 2.��̑�\n"
				"\n 3.���̑�\n"
				"\n 4.���̑�\n"
				);
		printf("\n ���́F");
		scanf("%d",&sele);
		enterkey();
		switch(sele){
			case 1:
				printf( "\n �k�̑��ɒ�����\n"
						);
				enterkey();
				printf( "\n ���lE�u���������H�������܂ł������ǁv\n"
						"\n ���lF�u���̑��ɂ������͂����v\n"
						"\n ���lG�u���͓��ɕ����Ă����̂�������v\n"
						"\n ���lH�u�v\n"
						);
				menu();
				flag_7_1 = 1;
				break;
			case 2:
				printf( "\n ��̑��ɒ�����\n"
						);
				enterkey();
				flag_7_2 = 1;
				break;
			case 3:
				printf( "\n ���̑��ɒ�����\n"
						);
				enterkey();
				flag_7_3 = 1;
				break;
			case 4:
				printf( "\n ���̑��ɒ�����\n"
						);
				enterkey();
				flag_7_4 = 1;
				break;
			default:
				printf("\n �I���E�E�E�E�E�E\n");
				exit(0);
		}
	}
	ste();
	enterkey();
	/* sele1(�I) */
	
	return 0;
}

/* ����W�i�ፑ�j */
int story_8(void)
{
	int sele;
	int i,j = -1;
	
	save_write();
	
	printf( "\n ����\n"
			"\n �Ɋ��̒n�ɂ�\n"
			);
	enterkey();
	
	/* sele1(�n) */
	printf( "\n �[���Ⴊ�ς����̍��ɒ�����\n"
			"\n �ǂ������Ă��^������\n"
			);
	enterkey();
	menu();
	/* sele1(�I) */
	
	/* sele2(�n) */
	printf( "\n ��̍����炳��ɖk�ɍs����\n"
			"\n ��������R������\n"
			);
	enterkey();
	printf( "\n ���̐�R�ɂ͋��낵�������������Ⴄ���Ⴂ��\n"
			);
	enterkey();
	printf( "\n ���̖������R����~��Ă��Ă��܂��Ă���炵��\n"
			);
	enterkey();
	printf( "\n ��������R�֌�����\n"
			);
	enterkey();
	ste();
	enterkey();
	/* sele2(�I) */
	
	/* sele3(�n) */
	for(i=22; i<=26; i++){
		j += 2;
		printf( "\n %d����\n",j
				);
		battle(i);
	}
	/* sele3(�I) */
	
	/* sele4(�n) */
	printf( "\n �R���ɒ�����\n"
			"\n ���傤�Ǔ�������\n"
			"\n �܂Ԃ���\n"
			);
	enterkey();
	printf( "\n ���̌��ƂƂ��ɉ����������\n"
			"\n ����͗�������\n"
			"\n �̂𕢂��؂��P��\n"
			);
	enterkey();
	battle(27);
	/* sele4(�I) */
	
	printf( "\n ���F�̗��𒇊Ԃɂ��܂����H\n"
			"\n 1.���ԂɂȂ�\n"
			"\n 2.�ق��Ƃ�\n"
			);
	printf( "\n ���́F");
	scanf("%d",&sele);
	
	switch(sele){
		case 1:
			printf( "\n ���F�̗������ԂɂȂ����I�I\n"
					);
			enterkey();
			ste();
			enterkey();
			return 10;
		case 2:
			printf( "\n ��R�ɒ�������\n"
					);
			enterkey();
			printf( "\n �p���͍ς�\n"
					);
			enterkey();
			printf( "\n ���͑���\n"
					);
			enterkey();
			break;
		default:
			exit(0);
	}
	return 9;
}

/* ����X�i�C�j */
int story_9(void)
{
	int sele;
	
	save_write();
	
	printf( "\n ���\n"
			"\n �D��̐�� \n"
			);
	enterkey();
	
	/* sele1(�n) */
	printf( "\n �L���C��i��\n"
			);
	enterkey();
	printf( "\n �����̂ق��ɍ�����������������������\n"
			"\n �����邾�E�E�E�E�E�E\n"
			);
	enterkey();
	printf( "\n �������A�O���ɋ���ȃC�J�����ꂽ�I�I\n"
			);
	enterkey();
	battle(28);
	/* sele1(�I) */
	
	/* sele2(�n) */
	printf( "\n �L���C��i��\n"
			);
	enterkey();
	printf( "\n ������֌����Đi��ł���ƁA\n"
			"\n ���F�̗������ꂽ\n"
			);
	enterkey();
	printf( "\n ���̔w�ɏ��܂����H\n"
			"\n 1.���\n"
			"\n 2.���Ȃ�\n"
			);
	printf("\n ���́F");
	scanf("%d",&sele);
	enterkey();
	switch(sele){
		case 1:
			printf( "\n ���F�̗��̔w�ɏ����\n"
					);
			enterkey();
			return 10;
		case 2:
			printf( "\n ���ɂ͈�����������֌�����\n"
					);
			enterkey();
		default:
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	ste();
	enterkey();
	/* sele2(�I) */
	
	return 0;
}

/* ����P�O�i���j */
int story_10(void)
{
	int sele;
	int story;
	
	save_write();
	
	printf( "\n �\��\n"
			"\n ��̉���\n"
			);
	enterkey();
	
	/* sele1(�n) */
	printf( "\n ���̔w�ɏ���ċ����\n"
			);
	enterkey();
	printf( "\n ���͖�����|�����͂����Ă����炵��\n"
			"\n ��̗��͉��K��\n"
			);
	enterkey();
	printf( "\n �������A�����邩�牽�������ł���\n"
			"\n �������̂悤��\n"
			);
	enterkey();
	story = battle(29);
	if(story==11){
		return 11;
	}
	ste();
	enterkey();
	/* sele1(�I) */
	
	return 12;
}

/* ����P�P�i�΁j */
int story_11(void)
{
	save_write();
	
	printf( "\n �\���\n"
			"\n �΂̐���\n"
			);
	enterkey();
	
	/* sele1(�n) */
	printf( "\n �����͐X�̌΂�����\n"
			);
	enterkey();
	printf( "\n �΂̐���u�����ɉ����p�ł����v\n"
			"\n �΂��琸�삪�o�ł���\n"
			);
	enterkey();
	printf( "\n %s�͖�����|���������|��`����\n"
			);
	enterkey();
	printf( "\n �΂̐���u������܂����B�����s���܂��傤�v\n"
			);
	enterkey();
	nakama_5 = 1;
	ste();
	enterkey();
	/* sele1(�I) */
	
	return 12;
}

/* ����P�Q�i������j */
int story_12(void)
{	
	save_write();
	
	printf( "\n �\���\n"
			"\n �I���̓���\n"
			);
	enterkey();
	
	printf( "\n ������ɒ�����\n"
			);
	enterkey();
	printf( "\n ��S�̂��������ɕ�܂�Ă���\n"
			"\n ��C�͏d���A����Ă���\n"
			);
	enterkey();
	printf( "\n ����Ȗ���J����\n"
			);
	enterkey();
	
	return Story_12_1;
}
	
int story_12_1(void)
{
	int sele;
	
	/* �P�K�i�n�j */
	printf( "\n �P�K\n"
			);
	enterkey();
	printf( "\n �ǂɂ�����������������������\n"
			"\n �Èł̒������������Ă���E�E�E�E�E�E\n"
			);
	enterkey();
	printf( "\n �����ցu�����͖����邾���A������O��������������v\n"
			);
	enterkey();
	printf( "\n �����ցu�����Ɠ����ɗ����̂��v\n"
			);
	enterkey();
	printf( "\n �����ցu��߂Ƃ��A��߂Ƃ��A�Ӗ����Ȃ��v\n"
			);
	enterkey();
	printf( "\n �����ցu�����~�߂Ă���v\n"
			);
	enterkey();
	battle(30);//�o�g���R�O
	printf( "\n �K�i�������\n"
			);
	printf( "\n �ǂ����H\n"
			"\n 1.���؂ȊK�i\n"
			"\n 2.���ꂽ�K�i\n"
			);
	scanf("%d",&sele);
	switch(sele){
		case 1:
			printf( "\n ���؂ȊK�i��i��\n"
					"\n ���Ȃ肨�����������Ă���\n"
					);
			enterkey();
			ste();
			enterkey();
			return Story_12_5;
		case 2:
			printf( "\n ���ꂽ�K�i��i��\n"
					"\n ���������E�E�E�E�E�E�������E�E�E�E�E�E\n"
					);
			enterkey();
			ste();
			enterkey();
			return Story_12_6;
	}
	/* �P�K�i�I�j*/
}
	
int story_12_2(void)
{
	int sele;
	
	/* �Q�K�i�n�j */
	printf( "\n �Q�K\n"
			);
	enterkey();
	printf( "\n �ƂĂ��Ȃ������A�f�����͔���\n"
			"\n �������󒆂����܂悤�E�E�E�E�E�E\n"
			);
	enterkey();
	printf( "\n �P���H��u�l�Ԃ������܂ł���Ȃ�āv\n"
			);
	enterkey();
	printf( "\n �P���H��u�����͈Â��ł���v\n"
			);
	enterkey();
	printf( "\n �P���H��u���Ă̒ʂ�A���͋P���Ă�v\n"
			);
	enterkey();
	printf( "\n �P���H��u���Ȃ�100,000�~�œ����Ƃ炵�Ă������v\n"
			);
	enterkey();
	printf( "\n �����𗊂ށH\n"
			"\n 1.����\n"
			"\n 2.����Ȃ�\n"
			);
	enterkey();
	printf( "\n ���́F");
	scanf("%d",&sele);
	switch(sele){
		case 1:
			if(money<100000){
				printf( "\n ����������Ȃ�\n"
						"\n �P���H��u�c�O�ˁv\n"
						);
				enterkey();
			} else if(money>=100000){
				money -= 100000;
				printf( "\n ���x����I�I\n"
						"\n �Ƃ��Ă����̓����Ƃ炷��I�I\n"
						);
				enterkey();
				return Story_12_099;
			}
			break;
		case 2:
			printf( "\n �P���H��u�������v\n"
					);
			enterkey();
			battle(31);
			ste();
			enterkey();
			break;
		default:
			return Story_12_1;
	}
	printf( "\n ���֐i�����Ƃ���ƁA\n"
			"\n �O����傫�ȓS�����]�����Ă����I�I\n"
			);
	enterkey();
	printf( "\n �ǂ���ւ悯��H\n"
			"\n 1.���ւƂԁI�I\n"
			"\n 2.�E�ւƂԁI�I�I\n"
			);
	printf( "\n ���́F");
	scanf("%d",&sele);
	switch(sele){
		case 1:
			printf( "\n ���ւƂ�ł悯���I�I\n"
					);
			enterkey();
			printf( "\n �������A�����͗��Ƃ������I�I\n"
					);
			enterkey();
			return Story_12_04;
		case 2:
			printf( "\n �E�ւƂ�ł悯���I�I�I\n"
					);
			enterkey();
			printf( "\n �Ȃ�Ƃ��悯������\n"
					);
			enterkey();
			printf( "\n �K�i��������\n"
					"\n 1.�̂ڂ�\n"
					"\n 2.�����\n"
					);
			enterkey();
			printf( "\n ���́F");
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
	/* �Q�K�i�I�j*/
}
	
int story_12_3(void)
{
	int sele;
	
	/* �R�K�i�n�j */
	printf( "\n �R�K\n"
			);
	enterkey();
	printf( "\n �����S�̂��Ԃ�\n"
			"\n �������󒆂����܂悤�E�E�E�E�E�E\n"
			);
	enterkey();
	printf( "\n �������K�X�u���������Ďd�����Ȃ��v\n"
			"\n �������K�X�u�������悤�I�I�v\n"
			);
	enterkey();
	printf( "\n �������K�X���N�C�Y�o�g�����d�|���Ă����I�I\n"
			);
	enterkey();
	printf( "\n ���̐��E�̖����͉���ށH\n"
			"\n 1.�P�O��\n"
			"\n 2.�Q�O��\n"
			"\n 3.�R�O��\n"
			"\n 4.�S�O��\n"
			"\n 5.�T�O��\n"
			,name
			);
	printf( "\n ���́F");
	scanf("%d",&sele);
	switch(sele){
		case 1:
			printf( "\n �������K�X�u�c�O�v\n"
					);
			enterkey();
			printf( "\n ���Ƃ����ɗ��Ƃ��ꂽ\n"
					);
			enterkey();
			return Story_12_5;
		case 2:
			printf( "\n �������K�X�u�c�O���v\n"
					);
			enterkey();
			printf( "\n ���Ƃ����ɗ��Ƃ��ꂽ\n"
					);
			enterkey();
			return Story_12_8;
		case 3:
			printf( "\n �������K�X�u�Ⴄ��v\n"
					);
			enterkey();
			printf( "\n ���Ƃ����ɗ��Ƃ��ꂽ\n"
					);
			enterkey();
			return Story_12_05;
		case 4:
			printf( "\n �������K�X�u�����I�I���΂��I�I�I�v\n"
					);
			enterkey();
			printf( "\n �������K�X�u���̊K�i���̂ڂ��Ă�����v\n"
					);
			enterkey();
			return Story_12_9;
		case 5:
			printf( "\n �������K�X�u�c�O�v\n"
					);
			enterkey();
			printf( "\n ���Ƃ����ɗ��Ƃ��ꂽ\n"
					);
			enterkey();
			return Story_12_04;
		default:
			return Story_12_1;
	}
	/* �R�K�i�I�j*/
}

int story_12_4(void)
{
	int sele;
	
	printf( "\n �S�K\n"
			);
	enterkey();
	
	printf( "\n �ƂĂ��Ȃ��M���I�I\n"
			);
	enterkey();
	printf( "\n �R����n�u�n�n�n�b�I�I �M������I�I�v\n"
			"\n �R����n�u���̂܂ܔR���ėn���Ă��܂��I�I�I�v\n"
			);
	enterkey();
	battle(32);
	
	printf( "\n �R����n�u������낤�v\n"
			);
	enterkey();
	printf( "\n �R����n�u����������ŏ�K�ւ́v\n"
			"\n �R����n�u�N�C�Y�������Ȃ��Ⴝ�ǂ蒅���Ȃ��v\n"
			);
	enterkey();
	printf( "\n �R����n�u����΂��v\n"
			);
	enterkey();
	
	printf( "\n �K�i���R����\n"
			);
	enterkey();
	printf( "\n �ǂ�H\n"
			"\n 1.��\n"
			"\n 2.�^��\n"
			"\n 3.�E\n"
			);
	printf( "\n ���́F");
	scanf("%d",&sele);
	switch(sele){
		case 1:
			printf( "\n ");
	}
}

int story_12_5(void)
{
	int sele;
	
	printf( "\n �T�K\n"
			);
	enterkey();
	
	printf( "\n ���@�̖{�������Ă���\n"
			"\n ���@�ɂ��ď����Ă���\n"
			);
	enterkey();
	printf( "\n ������ɂ��Ă̏��������Ă���\n"
			"\n �u�����͍ŏ�K�ŗE�҂�҂�\n"
			"\n �����͒n���[���ŉ�����҂v\n"
			);
	enterkey();
	printf( "\n �ǂ̖��@���g���H\n"
			"\n 1.���̖��@\n"
			"\n 2.���̖��@\n"
			"\n 3.�΂̖��@\n"
			);
	printf( "\n ���́F");
	scanf("%d",&sele);
	switch(sele){
		case 1:
			printf( "\n ���̖��@���g�����I�I\n");
			enterkey();
			printf( "\n �n�ʂ����ʂ̐������ӂꂾ���Ă���\n"
					"\n �^���ƂȂ��ĉ����񂹂�I�I\n"
					);
			enterkey();
			printf( "\n ���̊K�܂ŗ����ꂽ�E�E�E�E�E�E\n");
			enterkey();
			return Story_12_3;
		case 2:
			printf( "\n ���̖��@���g�����I�I\n");
			enterkey();
			printf( "\n �\���������r���I�I\n");
			enterkey();
			printf( "\n ���̊K�܂Ő�����΂��ꂽ�I�I\n");
			enterkey();
			return Story_12_7;
		case 3:
			printf( "\n �΂̖��@���g�����I�I\n");
			enterkey();
			printf( "\n ���������I�I\n"
					"\n ����������񂾁I�I\n");
			enterkey();
			printf( "\n ���̊K�֗������I�I\n");
			enterkey();
			return Story_12_03;
		default:
			return story_12_1;
	}
}

int story_12_6(void)
{
	int sele_1,sele_2;
	
	printf( "\n �U�K\n"
			);
	enterkey();
	
	printf( "\n �����͖��H�ɂȂ��Ă���悤��\n"
			);
	enterkey();
	printf( "\n �Ŕ�����\n"
			);
	enterkey();
	printf( "\n �u���̊K���炢����K��\n"
			"\n �S�K�A�W�K�A�n���Q�K�̂R�v\n"
			);
	enterkey();
	printf( "\n �ǂ̓��H\n"
			"\n 1.��\n"
			"\n 2.�E\n"
			);
	printf( "\n ���́F\n");
	scanf("%d",&sele_1);
	printf( "\n ���́H\n"
			"\n 1.��\n"
			"\n 2.�^��\n"
			"\n 3.�E\n"
			);
	printf( "\n ���́F");
	scanf("%d",&sele_2);
	system("cls");
	if(sele_1==1&&sele_2==1){
		printf( "\n ���Ƃ������I�I\n"
				);
		enterkey();
		return Story_12_02;
	} else if(sele_1==1&&sele_2==2){
		printf( "\n �K�i��������\n"
				);
		enterkey();
		return Story_12_8;
	} else if(sele_1==1&&sele_2==3){
		printf( "\n �K�i��������\n"
				);
		enterkey();
		return Story_12_4;
	} else if(sele_1==2&&sele_2==1){
		printf( "\n �K�i��������\n"
				);
		enterkey();
		return Story_12_8;
	} else if(sele_1==2&&sele_2==2){
		printf( "\n �K�i��������\n"
				);
		enterkey();
		return Story_12_4;
	} else if(sele_1==2&&sele_2==3){
		printf( "\n ���Ƃ������I�I\n"
				);
		enterkey();
		return Story_12_02;
	} else {
		return Story_12_1;
	}
}

int story_12_7(void)
{
	printf( "\n �V�K\n");
	enterkey();
	
	printf( "\n �����̓J�W�m\n"
			"\n �D���Ȃ����������҂���Ƃ���\n"
			);
	enterkey();
	miniGame_1();
	
	return Story_12_1;
}

int story_12_8(void)
{
	printf( "\n �W�K\n");
	enterkey();
	
}

int story_12_9(void)
{
	printf( "\n �X�K\n");
	enterkey();
	
	printf( "\n ��������Ȃ��E�E�E�E�E�E\n"
			"\n �Â����������Y���E�E�E�E�E�E\n"
			);
	enterkey();
	printf( "\n �����ɂ͔�����������\n");
	enterkey();
	printf( "\n �������u������ʂ��킯�ɂ͂����Ȃ��v\n"
			"\n �������u�����̖��߂��v\n"
			);
	enterkey();
	battle(33);
	printf( "\n �������u���̕������A�ʂ�v\n");
	enterkey();
	printf( "\n ���̐�ɂ͑傫�ȊK�i��������\n");
	enterkey();
	
	return story_12_10;
}

int story_12_10(void)
{
	int story;
	
	printf( "\n �ŏ�K�E�����̊�\n");
	enterkey();
	
	printf( "\n �����u�悭���A�����܂ŗ����I�I�v\n"
			"\n �����u�����������I�I�I�v\n"
			);
	enterkey();
	printf( "\n �����u�������������ΐ��E�͋~����v\n"
			"\n �����u���O�����˂ΐ��E�͉��̂��̂��I�I�v\n"
			);
	enterkey();
	story = battle(34);
	if(story==29){
		return 29;
	}
	
}

int story_12_01(void)
{
	printf( "\n �n���P�K\n");
	enterkey();
	
}

int story_12_02(void)
{
	printf( "\n �n���Q�K\n");
	enterkey();
	
}

int story_12_03(void)
{
	printf( "\n �n���R�K\n");
	enterkey();
	
}

int story_12_04(void)
{
	printf( "\n �n���S�K\n");
	enterkey();
	
}

int story_12_05(void)
{
	printf( "\n �n���T�K\n");
	enterkey();
	
}

int story_12_099(void)
{
	printf( "\n �n���X�X�K\n");
	enterkey();
	
}


/* �I��� */
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
	printf("\n �I���܂��E�E�E�E�E�E\n\n");
	
	return 99;
}

/* �퓬 */
int battle(int ene)
{
	int power_save;
	int ene_power_save;
	
	/* �G�I�� */
	switch(ene){
		case 0:
			switch(flag){
			case 1:
				strncpy(ene_name,"���S��",sizeof(ene_name));
				ene_hp = 20;
				ene_power = 2;
				ene_money = 20;
				break;
			case 2:
				strncpy(ene_name,"���S��",sizeof(ene_name));
				ene_hp = 20;
				ene_power = 2;
				ene_money = 20;
				break;
			case 3:
				strncpy(ene_name,"���S��",sizeof(ene_name));
				ene_hp = 20;
				ene_power = 2;
				ene_money = 20;
				break;
			case 4:
				strncpy(ene_name,"���S��",sizeof(ene_name));
				ene_hp = 20;
				ene_power = 2;
				ene_money = 20;
				break;
			case 5:
				strncpy(ene_name,"���S��",sizeof(ene_name));
				ene_hp = 20;
				ene_power = 2;
				ene_money = 20;
				break;
			case 6:
				strncpy(ene_name,"����",sizeof(ene_name));
				ene_hp = 200;
				ene_power = 20;
				ene_money = 100;
				break;
			default:
				break;
			}
		case 1:
			strncpy(ene_name,"����������",sizeof(ene_name));
			ene_hp = 30;
			ene_power = 3;
			ene_money = 100;
			break;
		case 2:
			strncpy(ene_name,"�Ƃ����낱�����΂�",sizeof(ene_name));
			ene_hp = 20;
			ene_power = 5;
			ene_money = 100;
			break;
		case 3:
			strncpy(ene_name,"�g�}�g�}�g",sizeof(ene_name));
			ene_hp = 20;
			ene_power = 10;
			ene_money = 100;
			break;
		case 4:
			strncpy(ene_name,"�Ԃ���",sizeof(ene_name));
			ene_hp = 70;
			ene_power = 15;
			ene_money = 500;
			break;
		case 5:
			strncpy(ene_name,"����",sizeof(ene_name));
			ene_hp = 120;
			ene_power = 10;
			ene_money = 700;
			break;
		case 6:
			strncpy(ene_name,"����",sizeof(ene_name));
			ene_hp = 150;
			ene_power = 15;
			ene_money = 900;
			break;
		case 7:
			strncpy(ene_name,"�咹",sizeof(ene_name));
			ene_hp = 200;
			ene_power = 20;
			ene_money = 1500;
			break;
		case 8:
			strncpy(ene_name,"�̂�����",sizeof(ene_name));
			ene_hp = 100;
			ene_power = 15;
			ene_money = 300;
			break;
		case 9:
			strncpy(ene_name,"���e��",sizeof(ene_name));
			ene_hp = 50;
			ene_power = 40;
			ene_money = 500;
			break;
		case 10:
			strncpy(ene_name,"�X�̂�����",sizeof(ene_name));
			ene_hp = 300;
			ene_power = 10;
			ene_money = 1000;
			break;
		case 11:
			strncpy(ene_name,"������",sizeof(ene_name));
			ene_hp = 200;
			ene_power = 20;
			ene_money = 1200;
			break;
		case 12:
			strncpy(ene_name,"�X�̔Ԑl",sizeof(ene_name));
			ene_hp = 300;
			ene_power = 20;
			ene_money = 1500;
			break;
		case 13:
			strncpy(ene_name,"���� ���肨",sizeof(ene_name));
			ene_hp = 200;
			ene_power = 10;
			ene_money = 200;
			break;
		case 14:
			strncpy(ene_name,"���̗�",sizeof(ene_name));
			ene_hp = 300;
			ene_power = 20;
			ene_money = 2000;
			break;
		case 15:
			strncpy(ene_name,"����",sizeof(ene_name));
			ene_hp = 300;
			ene_power = 20;
			ene_money = 3000;
			break;
		case 16:
			strncpy(ene_name,"���m",sizeof(ene_name));
			ene_hp = 200;
			ene_power = 30;
			ene_money = 2000;
			break;
		case 17:
			strncpy(ene_name,"���~�̔Ԑl",sizeof(ene_name));
			ene_hp = 500;
			ene_power = 50;
			ene_money = 3000;
			break;
		case 18:
			strncpy(ene_name,"�����R�̉����[",sizeof(ene_name));
			ene_hp = 600;
			ene_power = 30;
			ene_money = 2000;
			break;
		case 19:
			strncpy(ene_name,"�����R�̑|���W",sizeof(ene_name));
			ene_hp = 600;
			ene_power = 50;
			ene_money = 3000;
			break;
		case 20:
			strncpy(ene_name,"�����R�̎��",sizeof(ene_name));
			ene_hp = 600;
			ene_power = 60;
			ene_money = 3000;
			break;
		case 21:
			strncpy(ene_name,"�����R�̂܂Ƃߖ�",sizeof(ene_name));
			ene_hp = 600;
			ene_power = 60;
			ene_money = 5000;
			break;
		case 22:
			strncpy(ene_name,"�Ⴄ����",sizeof(ene_name));
			ene_hp = 400;
			ene_power = 40;
			ene_money = 1000;
			break;
		case 23:
			strncpy(ene_name,"�Ⴈ������",sizeof(ene_name));
			ene_hp = 500;
			ene_power = 70;
			ene_money = 2000;
			break;
		case 24:
			strncpy(ene_name,"����",sizeof(ene_name));
			ene_hp = 800;
			ene_power = 100;
			ene_money = 3000;
			break;
		case 25:
			strncpy(ene_name,"��S",sizeof(ene_name));
			ene_hp = 1000;
			ene_power = 150;
			ene_money = 5000;
			break;
		case 26:
			strncpy(ene_name,"������",sizeof(ene_name));
			ene_hp = 1500;
			ene_power = 100;
			ene_money = 10000;
			break;
		case 27:
			strncpy(ene_name,"���F�̗�",sizeof(ene_name));
			ene_hp = 2000;
			ene_power = 200;
			ene_money = 20000;
			break;
		case 28:
			strncpy(ene_name,"����ȃC�J",sizeof(ene_name));
			ene_hp = 2000;
			ene_power = 100;
			ene_money = 15000;
			break;
		case 29:
			strncpy(ene_name,"������",sizeof(ene_name));
			ene_hp = 3000;
			ene_power = 300;
			ene_money = 30000;
			break;
		default:
			exit(0);
	}
	power_save = power;//��l���̗͂�ۑ��A�Ō�ɖ߂�
	ene_power_save = ene_power;//�G�̗͂̕ۑ��A�Ō�ɕK�v
	printf("\n %s�������ꂽ�I�I\n",ene_name);
	enterkey();
	for(;;){
		printf("\n %s�̍U���I�I\n\n %d�̃_���[�W�I�I\n",name ,power);
		enterkey();
		ene_hp -= power;
		if(nakama_1==1){
			printf("\n %s�̍U���I�I\n\n %d�̃_���[�W�I�I\n",name_1 ,power_1);
			enterkey();
			ene_hp -= power_1;
		} if(nakama_2==1){
			printf("\n %s��%s�̗͂��������I�I\n",name_2 ,ene_name);
			enterkey();
			ene_power -= power_2;
		} if(nakama_3==1){
			printf("\n %s��%s�̗͂��グ���I�I\n",name_3 ,name);
			enterkey();
			power += power_3;
		} if(nakama_4==1){
			printf("\n %s�̍U���I�I\n\n %d�̃_���[�W�I�I\n",name_4 ,power_4);
			enterkey();
			ene_hp -= power_4;
		} if(nakama_5==1){
			printf("\n %s��%s���񕜂������I�I\n",name_5 ,name);
			enterkey();
			hp += power_5;
		}
		if(ene_hp<=0){
			printf( "\n %s��|�����I�I\n"
					"\n �͂�%d�オ�����I�I\n"
					"\n %d�~��������I�I\n"
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
		printf( "\n %s�̍U���I�I\n"
				"\n %d�̃_���[�W���󂯂��I�I\n"
				,ene_name ,ene_power
				);
		hp -= ene_power;
		enterkey();
		ikikaeru();//�����Ԃ鑐���g��
		if(hp<=0){
			if(ene==29){
				printf( "\n ���ƂƂ��ɗ����Ă���\n"
						);
				enterkey();
				printf( "\n �X�̌΂ɗ������E�E�E�E�E�E\n"
						);
				enterkey();
				return 11;
			} if(ene==34){
				return 29;
			}
			printf("\n %s�͎���ł��܂����E�E�E�E�E�E\n",name);
			exit(0);
		}	
	}
	ste();
	enterkey();
	return 0;
}

/* �L�����N�^�[�쐬 */
void make_char(void)
{
	int m_c;
	
	save_read();
	
	printf( "\n �V�������H\n"
			"\n 1.���\n"
			"\n 2.���̂܂܂ł���\n");
	printf("\n ���́F");
	scanf("%d",&m_c);
	switch(m_c){
		case 1:
			system("cls");
			printf( "\n ���O�����߂āI�I\n"
					"\n ���́F"
					);
			scanf("%s",name);
			hp = HP;
			power = POWER;
			money = MONEY;
			kusa = KUSA;
			flag = 1;
			save_write();
			printf( "\n �L�����N�^�[�쐬�I��\n");
			enterkey();
			break;
		case 2:
			printf("\n ���̂܂܂ł�����\n");
			enterkey();
			break;
		default:
			exit(0);
	}
}

/* �G���^�[�L�[���� */
void enterkey(void)
{
	key = getchar();
	system("cls");
}

/* �X�e�[�^�X */
void ste(void)
{
	printf("\n %s �̗́F%d  �́F%d  �����F %d �����Ԃ鑐�F%d\n",name ,hp ,power,money,kusa);
	if(nakama_1==1)
		printf("\n %s �̗́F%d  �́F%d\n",name_1, hp_1, power_1);
	if(nakama_2==1)
		printf("\n %s �̗́F%d  �́F%d\n",name_2, hp_2, power_2);
	if(nakama_3==1)
		printf("\n %s �̗́F%d  �́F%d\n",name_3, hp_3, power_3);
	if(nakama_4==1)
		printf("\n %s �̗́F%d  �́F%d\n",name_4, hp_4, power_4);
	if(nakama_5==1)
		printf("\n %s �̗́F%d  �́F%d\n",name_5, hp_5, power_5);
}

/* �������� */
void save_write(void)
{
	FILE *fp;
	fp = fopen("practice_data.txt","w");
	fprintf(fp,"%s\n",name);
	fclose(fp);
}

/* �ǂݎ�� */
void save_read(void)
{
	FILE *fp;
	fp = fopen("practice_data.txt","r");
	fscanf(fp,"%s",name);
	printf( "\n ���O�F %s\n"
				,name);
	fclose(fp);
}

/* �I�� */
void menu(void)
{
	int sele_menu;
	int loop = 1;
	int sele;
	
	while(loop!=0){
		ste();
		enterkey();
		printf( "\n==============================\n"
				" �I�����Ă�������\n"
				" 1.�퓬\n"
				" 2.�X�g�[���[��\n"
				" 3.�l�Ƙb��\n"
				" 4.���X\n"
				" 5.�h\n"
				" 6.�Q�[���I���i���ӁF�Z�[�u�Ȃ��j\n"
				"==============================\n"
				);
		printf( "\n ���́F");
		scanf("%d",&sele_menu);
		system("cls");
		switch(sele_menu){
			case 1:
				printf( "\n �퓬�ւނ���\n");
				enterkey();
				battle(0);
				break;
			case 2:
				printf( "\n �X�g�[���[��i�߂�\n");
				enterkey();
				loop = 0;
				break;
			case 3:
				printf( "\n ���̕ӂ̐l�Ƙb��\n");
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
					printf( "\n �܂��b���H\n"
							"\n 1.�b��\n"
							"\n 2.��������\n"
							);
					printf( "\n ���́F"
							);
					scanf("%d",&sele);
				}while(sele==1);
				break;
			case 4:
				printf( "\n �X�ɍs��\n");
				enterkey();
				shop();
				break;
			case 5:
				printf( "\n �h�ɔ��܂�\n");
				enterkey();
				inn();
				break;
			default:
				printf( "\n �I���E�E�E�E�E�E\n");
				exit(0);
		}
	}
}

/* �X */
void shop(void)
{
	int sele_shop;
	int loop = 1;
	
	while(loop!=0){
		printf( "\n ==============================\n"
				"\n 1.�p���[�i1000�~�j"
				"\n 2.�p�p���[�i5000�~�j"
				"\n 3.�p�p�p���[(10000�~)"
				"\n 4.�����Ԃ鑐�i10000�~�j"
				"\n 5.�I��\n"
				);
		printf( "\n ���́F");
		scanf( "%d",&sele_shop);
		system("cls");
		switch(sele_shop){
			case 1:
				if(money<1000){
					printf( "\n ����������܂���\n");
					enterkey();
				} else if(money>=1000){
					printf( "\n �p���[�𔃂����I�I\n");
					printf( "\n �͂��P�O�オ�����I�I\n");
					power += 10;
					money -= 1000;
				} else {
				}
				break;
			case 2:
				if(money<5000){
					printf( "\n ����������Ȃ�\n");
					enterkey();
				} else if(money>=5000){
					printf( "\n �p�p���[�𔃂����I�I\n");
					printf( "\n �͂��T�O�オ�����I�I\n");
					power += 50;
					money -= 5000;
				} else {
				}
				break;
			case 3:
				if(money<10000){
					printf( "\n ����������Ȃ�\n");
					enterkey();
				} else if(money>=10000){
					printf( "\n 1�p�p�p���[�𔃂����I�I\n");
					printf( "\n �͂��P�O�O�オ�����I�I\n");
					power += 100;
					money -= 10000;
				} else {
				}
				break;
			case 4:
				if(money<10000){
					printf( "\n ����������Ȃ�\n");
					enterkey();
				} else if(money>=10000){
					printf( "\n �����Ԃ鑐�𔃂����I�I\n");
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

/* �h */
void inn(void)
{
	int sele;
	
	printf( "\n �����F%d\n\n",money);
	
	printf( "\n �ǂ̏h�H\n"
			"\n 1.�����h�i500�~�j"
			"\n 2.���ʂ̏h�i2000�~�j"
			"\n 3.�����ȏh�i5000�~�j"
			"\n 4.�䂪�Ɓi20000�~�j\n"
			);
	printf( "\n ���́F"
			);
	scanf( "%d",&sele);
	switch(sele){
		case 1:
			if(money<500){
				printf( "\n ����������Ȃ�\n");
				enterkey();
			}else if(money>=500){
				printf( "\n �̗͂��Q�O�񕜂����I�I\n");
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
				printf( "\n ����������Ȃ�\n");
				enterkey();
			}else if(money>=2000){
				printf( "\n �̗͂��P�O�O�񕜂����I�I\n");
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
				printf( "\n ����������Ȃ�\n");
				enterkey();
			}else if(money>=5000){
				printf( "\n �̗͂��R�O�O�񕜂����I�I\n");
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
				printf( "\n ����������Ȃ�\n");
				enterkey();
			}else if(money>=2000){
				printf( "\n �̗͂��Q�O�O�O�񕜂����I�I\n");
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

/* �����Ԃ鑐 */
void ikikaeru(void)
{
	if(hp<=0){
		if(kusa>=1){
			kusa -= 1;
			printf( "\n �����Ԃ鑐���g���Đ����Ԃ����I�I\n");
			hp = power;
			enterkey();
		}
	}
}

/* �u���b�N�W���b�N */
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
	
	printf( "\n �u���b�N�W���b�N\n"
			"\n ���v�Q�P���߂����I�I\n"
			);
	enterkey();
	
	printf( "\n �Q�[���ŗV�т܂����H\n"
			"\n 1.�V��\n"
			"\n 2.�V�΂Ȃ�\n"
			);
	printf( "\n ���́F");
	scanf( "%d",&sele);
	switch(sele){
		case 1:
			for(i=0; q!=0; i++){
				srand((unsigned)time(NULL));
				pRand[i] = rand()%10 + 1;
				printf( "\n %d�ڂ̒l�F%d \n",i+1 ,pRand[i]);
				for(j=0; j<100; j++){
					sum += pRand[j];
				}
				printf( "\n ���v�F%d \n",sum);
				printf( "\n ���̒l�ŏ������܂����H\n"
						"\n 1.��������\n"
						"\n 2.�܂�����Ȃ�\n"
						);
				printf( "\n ���́F");
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
