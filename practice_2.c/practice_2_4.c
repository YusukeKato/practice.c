#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void enterkey(void);

/* �n�C�����[ */
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
		printf( "\n �����F%d \n"
				"\n �u�n�C�����[�v�ŗV�т܂����H(%d���)\n"
				"\n �|�����F%d�~\n"
				"\n ��������%d�{�I�I\n"
				"\n 1.�V��\n"
				"\n 2.��߂Ă���\n"
				"\n ���́F"
				,money ,i ,i*1000 ,i*2
				);
		scanf( "%d",&sele);
		switch(sele){
			case 1:
				printf( "\n �u�n�C�����[�v\n"
						"\n ��ƂȂ鐔���ɑ΂���\n"
						"\n �����̐������傫���������������Ă�\n"
						);
				enterkey();
				srand((unsigned)time(NULL));
				ran = rand()%12 + 2;
				printf( "\n\n ��ƂȂ鐔���F%d \n",ran);
				enterkey();
				srand((unsigned)time(NULL));
				ran_p = rand()%13 + 1;
				printf( "\n ���Ȃ��̐����F�� \n");
				enterkey();
				printf( "\n ���Ȃ��̐����� %d ����H���H�i1�`13�j\n"
						"\n 1.��\n"
						"\n 2.��\n"
						"\n ���́F"
						,ran
						);
				scanf("%d",&sele_p);
				system("cls");
				printf( "\n ��ƂȂ鐔���F%d \n"
						"\n ���Ȃ��̐����F%d \n"
						,ran ,ran_p
						);
				enterkey();
				if((ran>ran_p)&&sele_p==2) {
					printf( "\n==============\n"
							"\n   ����\n"
							"\n==============\n"
							);
					money += (i*1000)*(i*2);
				} else if((ran<ran_p)&&sele_p==1) {
					printf( "\n==============\n"
							"\n   ����\n"
							"\n==============\n"
							);
					money += (i*1000)*(i*2);
				} else if(ran==ran_p) {
					printf( "\n �����������Ȃ畉��\n");
					printf( "\n==============\n"
							"\n   ����\n"
							"\n==============\n"
							);	
					money -= i*1000;
					i = 0;
				} else {
					printf( "\n==============\n"
							"\n   ����\n"
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
