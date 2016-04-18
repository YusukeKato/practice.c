/* 2016.4.18 */

#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);//�h��Ԃ�
	glBegin(GL_LINE_LOOP);	//Begin����
	glVertex2d(-0.9, -0.9);
	glVertex2d(0.9, -0.9);
	glVertex2d(0.9, 0.9);
	glVertex2d(-0.9, 0.9);
	glEnd();				//End�܂�
	glFlush();//�܂��̖��߂����s
}

void init(void)
{
	glClearColor(0.0, 0.0, 1.0, 1.0);//�F
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);//��������
	glutInitDisplayMode(GLUT_RGBA);
	glutCreateWindow(argv[0]);//�E�B���h�E���J��
	glutDisplayFunc(display);//�`��
	init();
	glutMainLoop();//�������[�v
	return 0;
}