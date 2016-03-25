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
/* �I���̋L�^ */
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
			default:
				printf("\n �I���E�E�E�E�E�E\n");
				exit(0);
		}
	}
	end(flag);
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
			flag_1_1 = 1;
			break;
		case 2:
			printf( "\n ����ς�A�����т𔲂��Ɨ͂��o�Ȃ��Ȃ��B\n"
					"\n ���Ȃ��������E�E�E�E�E�E\n"
					);
			enterkey();
			printf("\n %s�̗͂��Q���������E�E�E�E�E�E\n",name);
			power -= 2;
			flag_1_1 = 2;
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
			flag_1_2 = 1;
			break;
		case 2:
			printf( "\n �ƂĂ���䂻���ȓS�̏��A\n"
					"\n ��ɂȂ��ޗǂ�����\n"
					);
			printf("\n %s�̗͂��R�オ�����I�I\n",name);
			power += 3;
			flag_1_2 = 2;
			break;
		case 3:
			printf( "\n �򑐂͕K���i���B\n"
					"\n �������񎝂��Ă������I�I\n"
					);
			enterkey();
			printf("\n %s�̗̑͂��P�Q�������I�I\n",name);
			hp += 12;
			flag_1_2 = 3;
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
					flag_1_4 = 1;
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
					strncpy(name_3,"���̖���",sizeof(name_3));
					flag_1_4 = 2;
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
					flag_1_4 = 3;
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
			strncpy(name_1,"�������l",sizeof(name_1));
			flag_1_4 = 4;
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
					strncpy(name_4,"�Ԃ���",sizeof(name_4));
					nakama_4 = 1;
					flag_1_4 = 5;
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
					flag_1_4 = 6;
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
			enterkey();
			flag_2_1 = 1;
			break;
		case 2:
			printf( "\n �p���[���g�����I�I\n"
					"\n �͂��P�O�オ�����I�I\n"
					);
			power += 10;
			enterkey();
			flag_2_1 = 2;
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
			flag_2_2 = 1;
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
			flag_2_2 = 2;
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
			flag_2_3 = 1;
			break;
		case 2:
			printf( "\n ���Ƃ������؂����E�E�E�E�E�E\n"
					);
			enterkey();
			flag_2_3 = 2;
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
					flag_2_4 = 1;
					break;
				case 2:
					printf( "\n ����n�肫�邽�ߑ������I�I\n");
					enterkey();
					printf( "\n �������A������������G�������Ă����I�I\n");
					enterkey();
					battle(7);
					flag_2_4 = 2;
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
					flag_2_4 = 3;
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
			flag_2_4 = 4;
			break;
		case 3:
			printf( "\n �E�̋���n��\n");
			enterkey();
			printf( "\n ����n��؂�ƁA����������ꂽ\n"
					);
			enterkey();
			printf( "\n �D�����D�_�u���߂܂��āv\n"
					"\n �D�����D�_�u���Ȃ�����������̂�҂��Ă܂���\n"
					);
			enterkey();
			printf( "\n �D�����D�_�����ԂɂȂ���\n"
					);
			nakama_2 = 1;
			flag_2_4 = 5;
			story = 5;
			return story;
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
			enterkey();
			flag_3_2 = 1;
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
					flag_3_3 = 1;
					break;
				case 2:
					printf( "\n �����Ԃ��ꂽ�I�I\n"
							"\n �Q�O�̃_���[�W�I�I\n"
							);
					hp += 20;
					enterkey();
					flag_3_3 = 2;
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
					flag_3_3 = 3;
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
			flag_3_3 = 4;
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
			flag_3_3 = 5;
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
			flag_3_3 = 6;
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
			flag_3_3 = 7;
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
			flag_3_3 = 8;
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
			flag_3_4 = 1;
			break;
		case 2:
			printf( "\n ���̏��������\n"
					);
			enterkey();
			flag_3_4 = 2;
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
	save_write();
	
	printf( "\n �܏�\n"
			"\n �����Q��\n"
			);
	enterkey();
	
	return 0;
}

/* ����U�i�X�j */
int story_6(void)
{
	save_write();
	
	printf( "\n �Z��\n"
			"\n ���₩�ȊX\n"
			);
	enterkey();
	
	return 0;
}

/* ����V�i���@�g���j */
int story_7(void)
{
	save_write();
	
	printf( "\n ����\n"
			"\n �����閂��\n"
			);
	enterkey();
	
	return 0;
}

/* ����W�i�ፑ�j */
int story_8(void)
{
	save_write();
	
	printf( "\n ����\n"
			"\n �Ɋ��̒n�ɂ�\n"
			);
	enterkey();
	
	return 0;
}

/* ����X�i�C�j */
int story_9(void)
{
	save_write();
	
	printf( "\n ���\n"
			"\n �D��̐�� \n"
			);
	enterkey();
	
	return 0;
}

/* ����P�O�i���j */
int story_10(void)
{
	save_write();
	
	printf( "\n �\��\n"
			"\n ��̉���\n"
			);
	enterkey();
	
	return 0;
}

/* ����P�P�i�΁j */
int story_11(void)
{
	save_write();
	
	printf( "\n �\���\n"
			"\n �΂̐���\n"
			);
	enterkey();
	
	return 0;
}

/* ����P�Q�i������j */
int story_12(void)
{
	save_write();
	
	printf( "\n �\���\n"
			"\n �I���̓���\n"
			);
	enterkey();
	
	return 0;
}

/* �I��� */
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
	printf("\n �I���܂��E�E�E�E�E�E\n\n");
	
	return 0;
}

/* �퓬 */
int battle(int ene)
{
	int power_save;
	int ene_power_save;
	
	/* �G�I�� */
	switch(ene){
		case 0:
			if(flag==1){
				strncpy(ene_name,"���S��",sizeof(ene_name));
				ene_hp = 20;
				ene_power = 2;
				ene_money = 20;
			} else if(flag==6){
				strncpy(ene_name,"����",sizeof(ene_name));
				ene_hp = 200;
				ene_power = 20;
				ene_money = 100;
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
		ikikaeru();
		if(hp<=0){
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
			flag = 1;
			save_write();
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

void ste(void)
{
printf("\n %s �̗́F%d  �́F%d  �����Ԃ鑐�F%d\n",name ,hp ,power,kusa);
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
	printf( "\n ���O�F %s\n"
				,name);
	fclose(fp);
}

void menu(void)
{
	int sele_menu;
	int loop = 1;
	
	while(loop!=0){
		printf( "\n==============================\n"
				" �I�����Ă�������\n"
				" 1.�퓬\n"
				" 2.�X�g�[���[\n"
				" 3.���X\n"
				" 4.�h\n"
				" 5.�I��\n"
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
				printf( "\n �X�ɍs��\n");
				enterkey();
				shop();
				break;
			case 4:
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

void shop(void)
{
	int sele_shop;
	int sele_shop_2;
	int loop = 1;
	
	while(loop!=0){
		printf( "\n ==============================\n"
				"\n 1.�p���[�i�P�O�O�O�~�j�i�́{�P�O�j"
				"\n 2.�����Ԃ鑐�i�T�O�O�O�~�j"
				"\n 3.�I��\n"
				);
		printf( "\n ���́F");
		scanf( "%d",&sele_shop);
		printf( "\n �����H\n"
				"\n ���́F"
						);
		scanf( "%d",&sele_shop_2);
		system("cls");
		if(sele_shop_2>0){
		} else {
			printf( "\n ���̓G���[\n");
			sele_shop = 3;
			enterkey();
		}
		switch(sele_shop){
			case 1:
				if(money<1000*sele_shop_2){
					printf( "\n ����������܂���\n");
					enterkey();
					break;
				}
				printf( "\n �p���[��%d�������I�I\n",sele_shop_2);
				printf( "\n �͂�%d�オ�����I�I\n",10*sele_shop_2);
				power += 10 * sele_shop_2;
				money -= 1000 * sele_shop_2;
				break;
			case 2:
				if(money<5000*sele_shop_2){
					printf( "\n ����������Ȃ�\n");
					enterkey();
					break;
				}
				printf( "\n �����Ԃ鑐��%d�������I�I\n",sele_shop_2);
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
	printf( "\n �T�O�O�~������܂�\n");
	enterkey();
	if(money<500){
		printf( "\n ����������Ȃ�\n");
		enterkey();
	}else if(money>=500){
		printf( "\n �̗͂��Q�O�񕜂����I�I\n");
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
			printf( "\n �����Ԃ鑐���g���Đ����Ԃ����I�I\n");
			hp = power;
			enterkey();
		}
	}
}
		

	/* sele1(�n) */
	/*
	printf( 
			);
	enterkey();
	printf( 
			);
	printf("\n ���́F");
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
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	ste();
	enterkey();
	*/
	/* sele1(�I) */