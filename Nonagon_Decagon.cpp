#include "pch.h"
#include<GL\glut.h>
#include<GL\gl.h>

void init()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 1050.0, 0.0, 600.0);
}

void draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.4, 0.4, 0.4);	//Gray

	// Nonagon
	glBegin(GL_POLYGON);
	glVertex2i(150, 250);	// Left Bottom
	glVertex2i(250, 250);	// Right Bottom
	glVertex2i(350, 350);	// Right Bottom Middle
	glVertex2i(375, 450);	// Right Middle
	glVertex2i(320, 550);	// Right Top Middle
	glVertex2i(200, 600);	// Top
	glVertex2i(80, 550);	// Left Top Middle
	glVertex2i(25, 450);	// Left Middle
	glVertex2i(45, 350);	// Left Bottom Middle
	glEnd();

	//Decagon +400 on x-axis
	glBegin(GL_POLYGON);
	glVertex2i(600, 100);	// Left Bottom
	glVertex2i(800, 100);	// Right Bottom
	glVertex2i(950, 200);	// Right Bottom Middle
	glVertex2i(1000, 325);	// Right Middle
	glVertex2i(950, 450);	// Right Top Middle
	glVertex2i(800, 550);	// Right Top
	glVertex2i(600, 550);	// Left Top
	glVertex2i(450, 450);	// Left Top Middle
	glVertex2i(400, 325);	// Left Middle
	glVertex2i(450, 200);	// Left Bottom Middle
	glEnd();
	glFlush();

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1050, 600);
	glutCreateWindow("Nonagon and Decagon");
	init();
	glutDisplayFunc(draw);
	glutMainLoop();
}
