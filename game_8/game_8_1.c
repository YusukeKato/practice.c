#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

static int hp = 100;
static int power = 10;

static char ene_name[100];
static int ene_hp = 0, ene_power = 0;

static flag_1 = 0, flag_2 = 0, flag_3 = 0, flag_4 = 0, flag_5 = 0;

void battle(int);
void enterkey(void);

int main(void)
{
	char array[10][10] = {
			'W','W','W','W','W','W','W','W','W','W',
			'W','W','W','W','W','W','W','W','W','W',
			'W','W','W','W','W','W','W','W','W','W',
			'W','W','W','W','W','W','W','W','W','W',
			'W','W','W','W','W','W','W','W','W','W',
			'W','W','W','W','W','W','W','W','W','W',
			'W','W','W','W','W','W','W','W','W','W',
			'W','W','W','W','W','W','W','W','W','W',
			'W','W','W','W','W','W','W','W','W','W',
			'W','W','W','W','W','W','W','W','W','W'
	};
	int x,y;
	int i,j;
	char sele;
	
	x=0;
	y=0;
	
	while(sele!='q'){
		array[y][x] = 'W';
		printf("\n\n w:�� s:�� d:�E a:��\n");
		printf("\n ���́F");
		scanf("%c",&sele);
		switch(sele){
			case 'w':
				if(y>0) y -= 1;
				break;
			case 's':
				if(y<9) y += 1;
				break;
			case 'd':
				if(x<9) x += 1;
				break;
			case 'a':
				if(x>0) x -= 1;
				break;
			default:
				break;
		}
		system("cls");
		array[y][x] = 'S';
		printf("\n");
		for(j=0;j<10;j++){
			printf("\n");
			for(i=0;i<10;i++){
				printf(" %c",array[j][i]);
			}//for(i)
		}//for(j)
		if(flag_1==0){
			if((y==3&&x==2)||(y==5&&x==5)||(y==8&&x==4)){
				flag_1 = 1;
				battle(1);
			} 
		}
		if(flag_2==0){
			if((y==9&&x==7)||(y==2&&x==9)||(y==1&&x==3)){
				flag_2 = 1;
				battle(2);
			}
		}
		if(flag_3==0){
			if((y==7&&x==1)||(y==4&&x==6)||(y==6&&x==8)){
				flag_3 = 1;
				battle(3);
			} 
		}
		if(flag_4==0){
			if((y==6&&x==3)||(y==3&&x==7)||(y==5&&x==3)){
				flag_4 = 1;
				battle(4);	
			}
		}
		if(y==8&&x==8){
			flag_5 = 1;
			battle(5);
		}
		else {
		}
	}//while
	printf("\n");
	
	return 0;
}

void battle(int sele)
{
	switch(sele){
		case 1:
			strncpy(ene_name,"������",sizeof(ene_name));
			ene_hp = 40;
			ene_power = 8;
			break;
		case 2:
			strncpy(ene_name,"�Ƃ�����",sizeof(ene_name));
			ene_hp = 30;
			ene_power = 10;
			break;
		case 3:
			strncpy(ene_name,"�Ă���",sizeof(ene_name));
			ene_hp = 50;
			ene_power = 5;
			break;
		case 4:
			strncpy(ene_name,"�Ƃ�����",sizeof(ene_name));
			ene_hp = 50;
			ene_power = 6;
			break;
		case 5:
			strncpy(ene_name,"��؂̐_",sizeof(ene_name));
			ene_hp = 100;
			ene_power = 5;
			break;
		default:
			break;
	}
	for(;;){
		printf("\n ��ؗF���̍U���I�I\n\n %d�̃_���[�W�I�I\n",power);
		ene_hp -= power;
		enterkey();
		if(ene_hp<=0){
			printf("\n �o�g���ɏ������I�I�I\n");
			printf("\n %s�����������I�I�I\n",ene_name);
			enterkey();
			if(flag_5==1){
				system("cls");
				printf("\n ��ؗF���̗̑́F%d \n",hp);
				printf("\n\n\t�I�I�I�Q�[���N���A�I�I�I\n\n\n");
				exit(0);
			}
			break;
		}
		printf( "\n %s�̍U���I�I\n"
				"\n %d�̃_���[�W���󂯂��I�I\n"
				,ene_name ,ene_power
				);
		hp -= ene_power;
		if(hp<=0){
			printf("\n ��ؗF���͎���ł��܂����E�E�E�E�E�E\n");
			exit(0);
		}
		enterkey();
	}
	printf("\n ��ؗF���̗̑́F%d \n",hp);
	enterkey();
}

void enterkey()
{
	char c;
	c = getchar();
	system("cls");
}
