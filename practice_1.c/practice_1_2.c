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

/* �v�����[�O */
int pro(void)
{
	printf("\n �n�܂�܂��E�E�E�E�E�E\n");
	enterkey();
	printf( "\n �������N�O�A�`���̗E�҂�\n"
			"\n ���낵�������Ƃ��̎艺������łڂ����B\n"
			"\n �����āA���E�ɕ��a���K�ꂽ�B\n"
			"\n �l�͎��R����ɓ���A�L���Ȑ����𑗂��Ă����B\n"
			"\n �������A���A���̕��a�͕���悤�Ƃ��Ă���B\n"
			"\n �˔@���ꂽ�����͍Ăѐ��E�����̂��߂ɓ����o�����E�E�E�E�E�E\n"
			);
	enterkey();
	
	return 0;
}

/* ����P */
int story_1(void)
{
	int sele1;
	
	printf( "\n ���\n"
			"\n �`���̎n�܂�\n"
			);
	enterkey();
	/* sele1 */ 
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
	switch(sele1)
	{
		case 1:
			printf( "\n �N���ɓł𐷂�ꂽ�I�I\n"
					"\n �T�̃_���[�W�I�I\n"
					);
			hp -= 5;
			break;
		case 2:
			printf( "\n ����ς�A�����т𔲂��Ɨ͂��o�Ȃ��Ȃ�\n"
					"\n �͂��Q���������E�E�E�E�E�E\n"
					);
			power -= 2;
			break;
		default:
			printf("\n �I���E�E�E�E�E�E\n");
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
	printf("\n �I���܂��E�E�E�E�E�E\n\n");
	
	return 0;
}

void enterkey(void)
{
	key = getchar();
	system("cls");
}

