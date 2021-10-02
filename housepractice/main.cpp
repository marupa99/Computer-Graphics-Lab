#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 500.0, 0.0, 500.0, -1.0, 500.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}


void Draw()
{
 glClear(GL_COLOR_BUFFER_BIT);
   glColor3f( 1 ,0, 0);
   glBegin(GL_TRIANGLES);
   glVertex2d(10,10); //left corner
   glVertex2d(50,10);//right corner
   glVertex2d(30,50);//top

   glEnd();
   glFlush(); // for multiple drawing & motion


// Write your Code

glutSwapBuffers();
}



void Draw1()
{
 glClear(GL_COLOR_BUFFER_BIT);
   glColor3f( 0 ,.54, 0);
   glBegin(GL_POLYGON);
   glVertex2d(100,100);
   glVertex2d(300,100);
    glVertex2d(300,300);
   glVertex2d(100,300);

   glEnd();
   glFlush(); // for multiple drawing & motion


// Write your Code

glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(30,30);
    glutInitWindowSize(500,500);// windows size
    glutCreateWindow("house practice");
    init();
    glutDisplayFunc(Draw);
    glutDisplayFunc(Draw1);
    glutMainLoop();
    return 0;
}
