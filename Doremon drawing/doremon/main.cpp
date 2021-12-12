#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 700.0, 0.0, 700.0);
}
void circle(int x,int y,int r)
{
    float m;
    glBegin(GL_POLYGON);


    for(int i=0; i<360; i++)
    {
        m=i*3.142/180;
        glVertex2f(x+r*cos(m),y+r*sin(m));
    }

    glEnd();

}

void Draw()
{

    glEnd();

     glBegin(GL_POLYGON);

    glColor3f(0,0,1);
    glVertex2d(280,300);
    glVertex2d(430,350);
    glVertex2d(430,390);
    glVertex2d(280,350);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(0,0,1);
    glVertex2d(200,290);
    glVertex2d(300,320);
    glVertex2d(300,350);
    glVertex2d(200,320);

    glEnd();

     glBegin(GL_POLYGON);

    glColor3f(0,0,1);
    glVertex2d(260,210);
    glVertex2d(300,210);
    glVertex2d(300,400);
    glVertex2d(260,400);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0,0,1);
    glVertex2d(310,210);
    glVertex2d(350,210);
    glVertex2d(350,400);
    glVertex2d(310,400);

    glEnd();


    glColor3f(0,0,1);
    circle(300,400,60);
    glColor3f(1,1,1);
    circle(302,380,50);
    glColor3f(1,1,1);
    circle(305,290,40);

    glColor3f(1,1,1);
    circle(200,310,20);
    glColor3f(1,1,1);
    circle(430,370,20);

    glColor3f(1,1,1);
    circle(280,210,25);
    glColor3f(1,1,1);
    circle(330,210,25);
    glColor3f(1,1,1);
    circle(295,435,15);
    glColor3f(1,1,1);
    circle(315,435,15);
    glColor3f(0,0,0);
    circle(295,435,6);
    glColor3f(0,0,0);
    circle(315,435,6);
    glColor3f(1,0,0);
    circle(305,420,8);


    glBegin(GL_POLYGON);

    glColor3f(1,0,0);
    glVertex2d(280,390);
    glVertex2d(330,390);
    glVertex2d(320,350);
    glVertex2d(290,350);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(0.5,0.7,0.7);
    glVertex2d(280,300);
    glVertex2d(330,300);
    glVertex2d(320,270);
    glVertex2d(290,270);

    glEnd();



    glutSwapBuffers();

}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(200,20);
    glutInitWindowSize(800,600);
    glutCreateWindow("Doramon");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
