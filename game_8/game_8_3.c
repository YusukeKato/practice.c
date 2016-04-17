/* 2016.4.18 */
/* Kuso_Game */
/* kusoge-ryousannki */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int enterkey(void);

int main(void)
{
	int field[30][50];
	int j,i;
	int x = 24,y = 28;
	char sele;
	
	/* field_creating */
	for(j=0;j<30;j++){
		for(i=0;i<50;i++){
			if(j == 0) field[j][i] = '=';
			else if(j == 29) field[j][i] = '=';
			else if(i == 0) field[j][i] = '|';
			else if(i == 49) field[j][i] = '|';
			else field[j][i] = ' ';
		}//for_i
	}//for_j
	/* field_creating...... */
	
	printf("\n !! Game Start !!\n");
	enterkey();
	
	/* Game_Loop */
	while(sele != 'q'){
		
		system("cls");
		field[y][x] = '*';//CharMoution
	
		/* depiction */
		for(j=0;j<30;j++){
			printf("\n");
			printf("\t");
			for(i=0;i<50;i++){
				printf("%c",field[j][i]);
			}//for_i
		}//for_j
		/* depiction...... */
		
		printf("\n");
		
		/* Input_CharMoution */
		field[y][x] = ' ';//ReturnCharMoution
		printf("\n Input:");
		scanf("%c",&sele);
		switch(sele){
			case 'w':
				if(y>1) y -= 1;
				break;
			case 's':
				if(y<28) y += 1;
				break;
			case 'd':
				if(x<48) x += 1;
				break;
			case 'a':
				if(x>1) x -= 1;
				break;
			case 'e':
				for(j=(y-3);j<=(y-1);j++){
					for(i=(x-1);i<=(x+1);i++){
						field[j][i] = '#';
					}//for_i
				}//for_j
			default:
				break;	
		}//switch
	}//while
	/* GameLoop...... */
	
	return 0;
}//main

/* InputEnterkey */
int enterkey(void)
{
	char c;
	c = getchar();
	system("cls");
	return 0;
}
/* InputEnterkey...... */