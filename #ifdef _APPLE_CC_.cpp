#ifdef _APPLE_CC_
#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>
#define tPi 6.2832

void init(){
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    gluOrtho2D(0, 600, 600, 0);
}
void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.07f,0.07f,0.07f);
	glBegin(GL_QUADS);
		glVertex2f(6.20f,31.27f);
		glVertex2f(-1.04f,31.27f);
		glVertex2f(-1.04f,217.90f);
		glVertex2f(6.20f,217.90f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(74.42f,29.60f);
		glVertex2f(-0.60f,29.60f);
		glVertex2f(-0.60f,38.18f);
		glVertex2f(74.42f,38.18f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(68.66f,118.46f);
		glVertex2f(4.39f,118.46f);
		glVertex2f(4.39f,125.18f);
		glVertex2f(68.66f,125.18f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(87.15f,27.64f);
		glVertex2f(79.93f,27.64f);
		glVertex2f(79.93f,214.64f);
		glVertex2f(87.15f,214.64f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(145.09f,29.16f);
		glVertex2f(80.11f,29.16f);
		glVertex2f(80.11f,37.18f);
		glVertex2f(145.09f,37.18f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(141.71f,116.81f);
		glVertex2f(85.09f,116.81f);
		glVertex2f(85.09f,125.02f);
		glVertex2f(141.71f,125.02f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(138.75f,205.11f);
		glVertex2f(80.11f,205.11f);
		glVertex2f(80.11f,213.17f);
		glVertex2f(138.75f,213.17f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(165.79f,25.89f);
		glVertex2f(160.20f,25.89f);
		glVertex2f(160.20f,217.30f);
		glVertex2f(165.79f,217.30f);
	glEnd();
	glBegin(GL_TRIANGLES);
		glVertex2f(651.51f,332.70f);
		glVertex2f(752.51f,332.70f);
		glVertex2f(702.01f,231.70f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(228.44f,28.10f);
		glVertex2f(163.00f,28.10f);
		glVertex2f(163.00f,34.51f);
		glVertex2f(228.44f,34.51f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(230.66f,28.18f);
		glVertex2f(225.01f,28.18f);
		glVertex2f(225.01f,109.48f);
		glVertex2f(230.66f,109.48f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(227.95f,105.64f);
		glVertex2f(163.99f,105.64f);
		glVertex2f(163.99f,110.70f);
		glVertex2f(227.95f,110.70f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(243.83f,207.80f);
		glVertex2f(169.87f,107.39f);
		glVertex2f(165.01f,110.97f);
		glVertex2f(238.97f,211.38f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(257.37f,26.24f);
		glVertex2f(253.91f,26.24f);
		glVertex2f(253.91f,211.75f);
		glVertex2f(257.37f,211.75f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(337.86f,26.89f);
		glVertex2f(254.38f,26.89f);
		glVertex2f(254.38f,32.66f);
		glVertex2f(337.86f,32.66f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(338.44f,204.85f);
		glVertex2f(253.39f,204.85f);
		glVertex2f(253.39f,209.04f);
		glVertex2f(338.44f,209.04f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(340.33f,209.03f);
		glVertex2f(340.97f,26.26f);
		glVertex2f(334.58f,26.24f);
		glVertex2f(333.93f,209.00f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(466.94f,27.89f);
		glVertex2f(365.94f,27.89f);
		glVertex2f(365.94f,32.87f);
		glVertex2f(466.94f,32.87f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(363.55f,208.61f);
		glVertex2f(474.75f,32.57f);
		glVertex2f(467.34f,27.89f);
		glVertex2f(356.14f,203.93f);
	glEnd();
	glBegin(GL_QUADS);
		glVertex2f(465.45f,199.87f);
		glVertex2f(355.98f,199.87f);
		glVertex2f(355.98f,206.84f);
		glVertex2f(465.45f,206.84f);
	glEnd();

    glFlush();
}
int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(300, 300);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("GlutZen");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}