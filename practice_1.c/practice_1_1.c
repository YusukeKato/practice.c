/* practice_9_1.c */
/* YusukeKato */
/* 2016.3.18 */
/* �V�� */
/* getchar();���g���������� */
/* enterkey();�͑��� */

#include <stdio.h>
#include <stdlib.h>

void enterkey(void);

int main(void)
{
	char a;//char-getchar(); int-scanf(); �Ȃ�ƂȂ�
	printf("\n\n\n\t �n�߂܂���E�E�E�E�E�E\n\n");
	enterkey();
	printf( "\n\n\t �I�ׁE�E�E�E�E�E\n"
			"\n\t 1.�H�ׂ�\n"
			"\n\t 2.�H�ׂȂ�\n");
	printf("\n\t ���́F");
	//scanf("%d",&a);
	a = getchar();
	enterkey();
	switch(a)
	{
		case '1':
			printf("\n\n\t ������ȁI�I\n\n");
			break;
		case '2':
			printf("\n\n\t �������E�E�E�E�E�E\n\n");
			break;
		default:
			printf("\n\n\t ���R�A����͊�]\n\n");
			break;
	}
	enterkey();
	printf("\n\n\n\t �I���܂���E�E�E�E�E�E\n\n");
	return 0;
}

void enterkey(void)
{
	char c;
	c = getchar();
	system("cls");
}