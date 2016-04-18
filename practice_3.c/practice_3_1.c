/* 2016.4.18 */

#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);//塗りつぶす
	glBegin(GL_LINE_LOOP);	//Beginから
	glVertex2d(-0.9, -0.9);
	glVertex2d(0.9, -0.9);
	glVertex2d(0.9, 0.9);
	glVertex2d(-0.9, 0.9);
	glEnd();				//Endまで
	glFlush();//まだの命令を実行
}

void init(void)
{
	glClearColor(0.0, 0.0, 1.0, 1.0);//色
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);//環境初期化
	glutInitDisplayMode(GLUT_RGBA);
	glutCreateWindow(argv[0]);//ウィンドウを開く
	glutDisplayFunc(display);//描写
	init();
	glutMainLoop();//無限ループ
	return 0;
}