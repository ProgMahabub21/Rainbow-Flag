#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(12);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(0, 255, 0);          //rgb color code
	glVertex2i(10, 0);    // x, y
	glVertex2i(60, 0);    // x, y
	glVertex2i(60, 40);
	glVertex2i(10, 40);
	glColor3ub(0, 255, 255);
	glVertex2i(10, 40);
	glVertex2i(60, 40);
	glVertex2i(60, 80);
	glVertex2i(10, 80);
	glColor3ub(0, 0, 255);
	glVertex2i(10, 80);
	glVertex2i(60, 80);
	glVertex2i(60, 120);
	glVertex2i(10, 120);
	glColor3ub(191, 0, 255);
	glVertex2i(10, 120);
	glVertex2i(60, 120);
	glVertex2i(60, 160);
	glVertex2i(10, 160);
	glColor3ub(255, 165, 0);
	glVertex2i(10, 0);
	glVertex2i(60, 0);
	glVertex2i(60, -40);
	glVertex2i(10, -40);
	glColor3ub(255, 255, 0);
	glVertex2i(10, -40);
	glVertex2i(60, -40);
	glVertex2i(60, -80);
	glVertex2i(10, -80);
	glColor3ub(255, 0,0 );
	glVertex2i(10, -80);
	glVertex2i(60, -80);
	glVertex2i(60, -120);
	glVertex2i(10, -120);


	glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(1080, 600);       // Set the window's initial width & height
	glutCreateWindow("Rainbow flag"); // Create a window with the given title
	gluOrtho2D(-50.0,120.0,-400.0,200.0);
	glutDisplayFunc(display);           // Register display callback handler for window re-paint
	glutMainLoop();                     // Enter the event-processing loop
	return 0;
}
