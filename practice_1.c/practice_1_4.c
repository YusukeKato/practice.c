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
	int sele1, sele2, sele3;
	int sele4, sele_4_1, sele_4_2;
	
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
	scanf("%d",&sele1);
	enterkey();
	switch(sele1){
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
	printf("\n %s �̗́F%d  �́F%d\n",name ,hp ,power);
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
	scanf("%d",&sele2);
	enterkey();
	switch(sele2){
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
	printf("\n %s �̗́F%d  �́F%d\n",name ,hp ,power);
	enterkey();
	/* sele2(�I) */
	
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
			printf("\n �I���E�E�E�E�E�E\n");
			exit(0);
	}
	enterkey();
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
	scanf("%d",&sele4);
	enterkey();
	switch(sele4){
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
			scanf("%d",&sele_4_1);
			enterkey();
			switch(sele_4_1){
				case 1:
					printf( "\n ���������������h�ɔ��܂����B\n"
							"\n �����̗�����H�ׂ�΁A�͂��݂Ȃ����Ă���I�I\n"
							);
					enterkey();
					printf( "\n �͂��P�O�オ�����I�I\n");
					power += 10;
					flag_1_4 = 2;
					break;
				case 2:
					printf( "\n �ӂ��ӂ��x�b�g������h�ɔ��܂����B\n"
							"\n ���̃x�b�g�Ȃ�悢�������ꂻ�����B\n"
							);
					enterkey();
					printf( "\n ���@�g���u���Ȃ����������Ă���́H�v\n"
							"\n �����h�ɔ��܂��Ă��錩�m��ʖ��@�g�����b�������Ă����B\n"
							);
					enterkey();
					printf( "\n ���@�g���u�����������Ă���񂾂��ǁA��l���Ƃ��낢���ςłˁv\n"
							"\n ���@�g���u�ǂ��A�ꏏ�ɗ������Ȃ��H�v\n"
							);
					enterkey();
					printf( "\n ���@�g�������ԂɂȂ����B\n");
					strncpy(name_1,"���@�g��",sizeof(name_1));
					hp_1 = 40;
					power_1 = 20;
					flag_1_4 = 3;
					nakama = 1;
					break;
				case 3:
					printf( "\n �L���ȉ��򂪂���h�ɔ��܂����B\n"
							"\n �����̉���ɓ���΁A���Ȃ񂩐�����ԁI�I\n"
							);
					enterkey();
					printf( "\n �̗͂��R�O�������I�I\n");
					hp += 30;
					flag_1_4 = 2;
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
			printf( "\n ���l�u���Ԃ�T���Ă���̂��H�v\n"
					"\n ���l�u���傤�ǉ�����l�ł͌������ƍl���Ă����Ƃ��낾�v\n"
					"\n ���l�u��낵���ȁv\n"
					);
			enterkey();
			printf("\n ���l�����ԂɂȂ����B\n");
			strncpy(name_1,"���l",sizeof(name_1));
			hp_1 = 50;
			power_1 = 8;
			flag_1_4 = 4;
			nakama = 1;
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
			scanf("%d",&sele_4_2);
			enterkey();
			switch(sele_4_2){
				case 1:
					printf("\n %s�͐X�̉��֐i�񂾁B\n",name);
					enterkey();
					printf("\n �Ȃ�Ƃ����ɂ����̂̓h���S���������I�I�I\n");
					enterkey();
					battle(4);
					printf("\n �|�����h���S�����N���オ���Ă����B\n");
					enterkey();
					printf("\n �h���S�������ԂɂȂ����B\n");
					strncpy(name_1,"�h���S��",sizeof(name_1));
					hp_1 = 80;
					power_1 = 15;
					nakama = 1;
					flag_1_4 = 5;
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
					flag_1_4 = 2;
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
	printf("\n %s �̗́F%d  �́F%d\n",name ,hp ,power);
	if(nakama==1)
		printf("\n %s �̗́F%d  �́F%d\n",name_1, hp_1, power_1);
	enterkey();
	/* sele4(�I) */
	
	return flag_1_4;
}

/* ����Q�i���l�j */
int story_2(void)
{
	printf( "\n ���\n"
			"\n ���l�Ɨ��l\n"
			);
	enterkey();
}

/* ����R�i�X�j */
int story_3(void)
{
	printf( "\n �O��\n"
			"\n �X�̔�����\n"
			);
	enterkey();
}

/* ����S�i���A�j */
int story_4(void)
{
	printf( "\n �l��\n"
			"\n ��݂̍肩\n"
			);
	enterkey();
}

/* ����T�i�D�_�j */
int story_5(void)
{
	printf( "\n �܏�\n"
			"\n �����Q��\n"
			);
	enterkey();
}

/* ����U�i�X�j */
int story_6(void)
{
	printf( "\n �Z��\n"
			"\n \n"
			);
	enterkey();
}

/* ����V�i���@�g���j */
int story_7(void)
{
	printf( "\n ����\n"
			"\n �����閂��\n"
			);
	enterkey();
}

/* ����W�i�ፑ�j */
int story_8(void)
{
	printf( "\n ����\n"
			"\n �Ɋ��̒n�ɂ�\n"
			);
	enterkey();
}

/* ����X�i�C�j */
int story_9(void)
{
	printf( "\n ���\n"
			"\n �D��̐��i���V�ˁj\n"
			);
	enterkey();
}

/* ����P�O�i���j */
int story_10(void)
{
	printf( "\n �\��\n"
			"\n ��̉���\n"
			);
	enterkey();
}

/* ����P�P�i�΁j */
int story_11(void)
{
	printf( "\n �\���\n"
			"\n �΂̐���\n"
			);
	enterkey();
}

/* ����P�Q�i������j */
int story_12(void)
{
	printf( "\n �\���\n"
			"\n �I���̓���\n"
			);
	enterkey();
}

/* �I��� */
int end(int flag_end)
{
	switch(flag_end){
		case -1:
			enterkey();
			printf("\n �I���܂��E�E�E�E�E�E\n");
			exit(0);
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
	/* �G�I�� */
	switch(ene){
		case 1:
			strncpy(ene_name,"����������",sizeof(ene_name));
			ene_hp = 30;
			ene_power = 3;
			break;
		case 2:
			strncpy(ene_name,"�Ƃ����낱�����΂�",sizeof(ene_name));
			ene_hp = 20;
			ene_power = 5;
			break;
		case 3:
			strncpy(ene_name,"�g�}�g�}�g",sizeof(ene_name));
			ene_hp = 20;
			ene_power = 10;
			break;
		case 4:
			strncpy(ene_name,"�h���S��",sizeof(ene_name));
			ene_hp = 70;
			ene_power = 15;
			break;
		default:
			exit(0);
	}
	printf("\n %s�������ꂽ�I�I\n",ene_name);
	enterkey();
	for(;;){
		printf( "\n %s�̍U���I�I\n"
				"\n %d�̃_���[�W�I�I\n"
				,name ,power
				);
		ene_hp -= power;
		enterkey();
		if(ene_hp<=0){
			printf( "\n %s��|�����I�I\n"
					"\n �͂�%d�オ�����I�I\n"
					,ene_name ,ene_power
					);
			power += ene_power;
			enterkey();
			break;
		}
		printf( "\n %s�̍U���I�I\n"
				"\n %d�̃_���[�W���󂯂��I�I\n"
				,ene_name ,ene_power
				);
		hp -= ene_power;
		enterkey();
		if(hp<=0){
			printf("\n %s�͎���ł��܂����E�E�E�E�E�E\n",name);
			exit(0);
		}	
	}
	printf("\n %s �̗́F%d  �́F%d\n",name ,hp ,power);
	if(nakama==1){
		printf("\n %s �̗́F%d  �́F%d\n",name_1, hp_1 ,power_1);
	}
	enterkey();
	return 0;
}

/* �L�����N�^�[�쐬 */
void make_char(void)
{
	FILE *fp;
	int m_c;
	fp = fopen("practice_data.txt","r");
	while(fscanf(fp,"%s",name)!=EOF)
		printf("\n %s\n",name);
	fclose(fp);
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

/* �G���^�[�L�[���� */
void enterkey(void)
{
	key = getchar();
	system("cls");
}
