
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 500.0, 0.0, 500.0, -1.0, 500.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}

// according my id, color will be 183-15-2309 ,



float p,x,y;
int r;


void wheel (int xe, int ye, int rad)

{
    int centx=xe;
    int ceny=ye;
    r=rad;
    x=0;
    y=r;
    p=1-r;
    while(x<=y)
    {
       glColor3f( 0.9 ,0.3, 1);
       glBegin(GL_POLYGON);
       if(p<0)
       {

           x++;
           p=p+(2*x)+1;
       }
       else{
        x++;
        y--;
        p=p+(2*x)-(2*y)+1;
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
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(0.9,0.0,0.3);
    glVertex2d(50,100);
    glVertex2f(250,100);
    glVertex2f(250,200);
    glVertex2f(50,200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.0,0.9);
    glVertex2f(50,200);
    glVertex2f(210,200);
    glVertex2f(180,250);
    glVertex2f(80,250);
    glEnd();

 wheel(100,100,20);

  wheel(200,100,20);


     glFlush();
     glutSwapBuffers();


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
