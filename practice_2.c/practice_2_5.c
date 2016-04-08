#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int ran;
	int sele;
	int q;
	
	while(q!=0){
		printf( "\n 1.Rock\n"
				"\n 2.paper\n"
				"\n 3.scissors\n"
				"\n ì¸óÕÅF"
				);
		scanf("%d",&sele);
	
		srand((unsigned)time(NULL));
		ran = rand()%3 + 1;
		
		printf("\n IÅF%d	YOUÅF%d \n",sele ,ran);
		
		if(sele==ran){
			printf( "\n --- draw ---\n");
		} else if((sele==1&&ran==3)||(sele==2&&ran==1)||(sele==3&&ran==2)) {
			printf("\n !!! win !!!\n\n");
			q = 0;
		} else {
			printf("\n lose......\n\n");
			q = 0;
		}	
	}
	return 0;
}
	