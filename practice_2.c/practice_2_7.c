/* 2016.4.11 */
/* pointer */

#include <stdio.h>

void func(int *);

int main(void)
{
	int num = 0;
	int *p_num;
	
	p_num = &num;
	
	*p_num = 1;
	
	printf("\n num: %d \n",num);	//num
	printf("\n *p_num: %d \n",*p_num);	//*p_num
	printf("\n &num: %d \n",&num);	//&num
	printf("\n p_num: %d \n",p_num);	//p_num
	
	func(p_num);
	
	printf("\n num: %d \n",num);
	printf("\n *p_num: %d \n",*p_num);
	
	return 0;
}

void func(int *data)
{
	*data *= 2;
	printf("\n *data: %d \n",*data);
}