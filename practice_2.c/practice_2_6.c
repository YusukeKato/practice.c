#include <stdio.h>

void func(int data[10]);
void func_2(int *data);

int main(void)
{
	int array[10];
	int num;
	int *pNum;
	int i;
	
	pNum = &num;
	
	*pNum = 3;
	printf("\n %d \n",num);
	
	func(array);
	func_2(pNum);
	//func_2(&num);
	
	for(i=0; i<10; i++){
		printf("\n %d \n",array[i]);
	}
	printf("\n %d \n",num);
	return 0;
}

void func(int data[10])
{
	int i;
	
	for(i=0; i<10; i++){
		data[i] = i;
	}
}

void func_2(int *data)
{
	*data = 5;
}

/*
ˆø” int *data‚É‘Î‚µ‚Äfunc_2(&num);
‚Â‚Ü‚è int *data = &num;‚Æ‚¢‚¤‚±‚Æ
int num;
int *data;
data = &num;
*/