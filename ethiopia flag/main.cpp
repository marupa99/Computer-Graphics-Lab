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
   glBegin(GL_QUADS);
    //green
  glColor3f( 0.0 ,1.0, 0.0);
   glVertex2i(50,320);  //(x,y) left up corner
    glVertex2i(270,320);//(x,y) right up corner
    glVertex2i(270,270);// x,y) right down corner
    glVertex2i(50,270); //x,y) left down corner

    //yellow

    glColor3f( 1.0 ,1.0, 0.0);
   glVertex2i(50,270);
    glVertex2i(270,270);  // all same
    glVertex2i(270,230);
    glVertex2i(50,230);

    //red
    glColor3f( 1.0 ,0.0, 0.0);
   glVertex2i(50,230);
    glVertex2i(270,230);   //all same
    glVertex2i(270,180);
    glVertex2i(50,180);


   glEnd();

 glColor3f( 1.0 ,1.0, 1.0);
 glLineWidth(8);
 glBegin(GL_LINES);
   glVertex2i(50,330); // (x,y)  up corner
    glVertex2i(50,10); //(x,y) down corner
    glEnd();
    glFlush();
//glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB );
    glutInitWindowPosition(10,10);
    glutInitWindowSize(700,500);
    glutCreateWindow("nathional flag of Ethiopia");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
