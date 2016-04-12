/* 2016.4.12 */
/* �_�u���|�C���^�ȏ� */

#include <stdio.h>

void func_1(int *);
void func_2(int **);
void func_3(int ***);
void func_4(int ****);

int main(void)
{
	int num = 0;
	int *p_num;
	int **d_num;
	int ***t_num;
	
	//0
	printf("\n %d \n",num);
	//1
	func_1(&num);
	printf("\n %d \n",num);
	//2
	p_num = &num;
	func_2(&p_num);
	printf("\n %d \n",num);
	//3
	d_num = &p_num;
	func_3(&d_num);
	printf("\n %d \n",num);
	//4
	t_num = &d_num;
	func_4(&t_num);
	printf("\n %d \n",num);
	
	return 0;
}

/* �|�C���^ */
void func_1(int *data_1)
{
	*data_1 = 1;
}

/* �_�u���|�C���^ */
void func_2(int **data_2)
{
	**data_2 = 2;
}

/* �g���v���|�C���^ */
void func_3(int ***data_3)
{
	***data_3 = 3;
}

/* �t�H�[�X�|�C���^ */
void func_4(int ****data_4)
{
	****data_4 = 4;
}