#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
   glOrtho(-500.0, 500.0, -500.0, 500.0, -1.0, 1.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}

void Draw()
{
 glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1, 0, 0);
    glBegin(GL_POINTS);

    // x , y exist line

    for (int i=-200;i<=200;i++){
       glVertex2d(0,i);
       glVertex2d(i,0);

       glVertex2d(i,i);
       glVertex2d(i,-i);
    }

   double m=0, n=0, r=111; // r=2309%157 =111 according my id
   double p0=1-r;
   double pk=p0;
   double pk2; //pk+1
   double x=m, y=n+r;


    glBegin(GL_POINTS);

   glVertex2d(x,y);

   while(1)
   {

       if(pk<0)
       {

           x++;

           pk2=pk +(2*x)+1;
       }
       else if(pk>=0){
            x++;
            y--;
        pk2=pk +(2*x)+1-(2*y);
       }
       pk=pk2;
       glColor3f(0.3, 0.0, 0.9);
       glVertex2d(x,y);

// baki circle portion
  glColor3f(0.3, 0.9, 0.0);
      glVertex2d(x,-y);
      glColor3f(0.0, 0.9, 0.3);
       glVertex2d(-x,y);
       glColor3f(0.9, 0.0, 0.3);
       glVertex2d(-x,-y);
        glColor3f(1, 0, 0);
        glVertex2d(y,x);
         glColor3f(0.9, 0.3, 0.0);
         glVertex2d(-y,x);
          glColor3f(0.2, 0.3, 0.3);
       glVertex2d(y,-x);
        glColor3f(0.3, 0.2, 0.3);
       glVertex2d(-y,-x);


       if(x>=y){
        break;
       }
   }
   glEnd();
   glFlush();

glutSwapBuffers();
}





int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("lab task-06 ");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
