/* 2016.3.30 */
/* ポインタ */

#include <stdio.h>

int num(int *);

//宣言の時できる int *p_test = test;

int main(void)
{
	int test;
	int *p_test;
	
	p_test = &test;
	
	num(p_test);
	
	printf( "\n %d\n",test);
	
	return 0;
}

int num(int *test)
{
	*test = 10;
}