#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
    glClearColor(0.0,1.0,1.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    gluOrtho2D(0.0,400.0,0.0,400.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}
void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.5f, 0.5f, 0.5f);
    glBegin(GL_POLYGON);
    glVertex2i(40, 40);
    glVertex2i(320, 40);
    glVertex2i(40, 200);
    glVertex2i(320, 200);
    glVertex2i(40, 200);
    glVertex2i(40, 40);
    glVertex2i(320, 200);
    glVertex2i(320, 40);
    glEnd();

    glColor3i(0.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2i(220, 60);
    glVertex2i(300, 60);
    glVertex2i(220, 150);
    glVertex2i(300, 150);
    glVertex2i(220, 60);
    glVertex2i(220, 150);
    glVertex2i(300, 150);
    glVertex2i(300, 60);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2i(220, 170);
    glVertex2i(300, 170);
    glVertex2i(220, 190);
    glVertex2i(300, 190);
    glVertex2i(220, 170);
    glVertex2i(220, 190);
    glVertex2i(300, 190);
    glVertex2i(300, 170);
    glEnd();


    glColor3f(0.5f, 1.0f, 0.5f);
    glBegin(GL_POLYGON);
    glVertex2i(130, 40);
    glVertex2i(130, 160);
    glVertex2i(130, 160);
    glVertex2i(180, 160);
    glVertex2i(180, 100);
    glVertex2i(180, 40);
    glVertex2i(120, 40);
    glVertex2i(170, 40);
    glEnd();

    glColor3f(1.0f, 1.0f, 0.5f);
    glBegin(GL_POLYGON);
    glVertex2i(10, 200);
    glVertex2i(340, 200);
    glVertex2i(200, 390);
    glVertex2i(10, 200);
    glVertex2i(200, 390);
    glEnd();
    glFlush();
    glutSwapBuffers();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(100,100);
    glutInitWindowSize(1200,740);
    glutCreateWindow("Lab Task-01");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
