#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void init(void)
{
    glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 700.0, 0.0, 700.0);
}

float p,x,y;
int r;
void circle (int xe, int ye, int rad)

{
    int centx=xe;
    int ceny=ye;
    r=rad;
    x=0;
    y=r;
    p=1-r;
    while(x<=y)
    {
      // glColor3f( 0.9 ,0.3, 1);
       glBegin(GL_POLYGON);
       if(p<0)
       {

           x++;
           p=p+(2*x)+1;
       }
       else{
        x++;
        y--;
        p=p+(2*x)+1-(2*y);
       }

        glVertex2d(centx+x,ceny+y);
         glVertex2d(centx+y,ceny+x);
          glVertex2d(centx-y,ceny+x);
           glVertex2d(centx-x,ceny+y);
            glVertex2d(centx-x,ceny-y);
             glVertex2d(centx-y,ceny-x);
            glVertex2d(centx+x,ceny-y);
            glVertex2d(centx+y,ceny-x);
              glEnd();

    }
    }


void Draw()
{

// first circle  is black
    glColor3f(0,0,0);
    circle(300,400,66);

// second circle is red

    glColor3f(1,0,0);
    circle(300,400,60);

    // stand

   glColor3f( 1.0 ,0.8, 0.0);
  glLineWidth(10);
 glBegin(GL_LINES);
   glVertex2i(140,350);
    glVertex2i(300,480);
    glEnd();


     glColor3f( 1.0 ,0.8, 0.0);
 glBegin(GL_LINES);
   glVertex2i(140,350);
   glVertex2i(156,350);

    glEnd();

    glutSwapBuffers();

}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(200,20);
    glutInitWindowSize(600,600);
    glutCreateWindow("Marufa Akter (183-15-2309),figure-5 , 2309%8=5");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
