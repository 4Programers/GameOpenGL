#include<GL/glut.h>
#include "callback.h"

int main(int argc,char** argv){

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);

	glutInitWindowSize(700,700);
	glutInitWindowPosition(100,100);
	glutCreateWindow(argv[0]);

	glutKeyboardFunc(onKeyboard);
	glutReshapeFunc(onReshape);
	glutDisplayFunc(onDisplay);

	glClearColor(0.5,0.5,0.5,0);
	glEnable(GL_DEPTH_TEST);

	glutMainLoop();

	return 0;
}
