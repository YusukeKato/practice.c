/* 2016.4.17 */
/* sizeof 配列 */
/* sezeof バイト数を求める */

#include <stdio.h>

int main(void)
{
	int array[2][2] = {
		{2,1},
		{1,0}
	};
	
	int array_2[3][3] = {
		{7,8,9},
		{4,5,6},
		{1,2,3}
	};
	
	char a;
	
	int data_1 = sizeof array[0][0];
	int data_2 = sizeof array[0][1];
	int data_3 = sizeof array[1][0];
	int data_4 = sizeof array[1][1];
	
	int data_2_1 = sizeof array_2[0][0];
	
	int data_3_1 = sizeof a;
	
	printf("\n");
	printf("\t%d\n",data_1);
	printf("\n");
	printf("\t%d\n",data_2);
	printf("\n");
	printf("\t%d\n",data_3);
	printf("\n");
	printf("\t%d\n",data_4);
	printf("\n");
	printf("\t%d\n",array[0][0]);
	printf("\n");
	printf("\t%d\n",array[0][1]);
	printf("\n");
	printf("\t%d\n",array[1][0]);
	printf("\n");
	printf("\t%d\n",array[1][1]);
	printf("\n");
	printf("\n");
	printf("\t%d\n",data_2_1);
	printf("\n");
	printf("\ta:%d\n",data_3_1);
	printf("\n");
	
	return 0;
}