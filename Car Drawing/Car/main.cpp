
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>

void init(void)
{
    glClearColor(1.0,1.0,1.0,1.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    gluOrtho2D(0,700,0,500);
}

// according my id, color will be 183-15-2309 ,


void wheeldraw(int x,int y)
{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.3,0.9);
    for(int i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+20*cos(th),y+20*sin(th));
    }
    glEnd();
}

void car()
{
    glBegin(GL_POLYGON);
    glColor3f(0.9,0.0,0.3);
    glVertex2f(100,100);
    glVertex2f(100,160);
    glVertex2f(450,160);
    glVertex2f(450,100);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.0,0.9);
    glVertex2f(150,160);
    glVertex2f(200,200);
    glVertex2f(400,200);
    glVertex2f(450,160);
    glEnd();

   wheeldraw(200,100);
    wheeldraw(380,100);

}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    car();
    glutSwapBuffers();
    glFlush();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("Marufa's car");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
