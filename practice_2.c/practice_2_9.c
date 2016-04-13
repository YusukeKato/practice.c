/* 2016.4.13 */

#include <stdio.h>

int main(void)
{
	int array[100];
	int i;
	
	printf("\n");
	for(i=1; i<=100; i++){
		array[i-1] = i;
		printf("%d ",array[i-1]);
		if(i>=1&&i<=10){
			printf(" ");
		}//if1
		if(i%10==0){
			printf("\n");
			if(i==50){
				printf("\n");
			}//if3
		}//if2
	}//for
	printf("\n");
	return 0;
}