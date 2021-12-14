
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

void Draw()

{

     glClear(GL_COLOR_BUFFER_BIT);
     glColor3f(0.3, 0.0, 0.9) ;     //According my id (183-5-2309)
     glBegin(GL_POLYGON);
           glVertex2i(25, 10);
           glVertex2i (350, 10); //stair -1
           glVertex2i (350, 25);
            glVertex2i (25, 25);
glEnd();
               glColor3f(0.3, 0.9, 0.0) ;          //According my id (183-5-2309)
           glBegin(GL_POLYGON);
           glVertex2i(30, 25);
           glVertex2i (345, 25); //stair -2
           glVertex2i (345, 40);
            glVertex2i (30, 40);
glEnd();

             glColor3f(0.9, 0.3, 0.0) ;     //According my id (183-5-2309)
     glBegin(GL_POLYGON);
           glBegin(GL_POLYGON);
           glVertex2i(35, 40);
           glVertex2i (340, 40);
           glVertex2i (340, 55);
            glVertex2i (35, 55);

     glEnd();

     glColor3f(0.0, 0.3, 0.9) ;
     glBegin(GL_POLYGON);
           glVertex2i(40, 55);
           glVertex2i (335, 55);
           glVertex2i (187, 90);

glEnd();

glColor3f(1.0, 1.0, 1.0) ;
     glBegin(GL_POLYGON);
           glVertex2i(70, 55);
           glVertex2i (305, 55);
           glVertex2i (190, 130);

glEnd();

  glColor3f(0.0, 0.9, 0.3) ;  //level -3
     glBegin(GL_POLYGON);
           glVertex2i(100, 55);
           glVertex2i (285, 55);
           glVertex2i (192, 170);

glEnd();

glColor3f(0.9, 0.0, 0.3) ;  //level -4
     glBegin(GL_POLYGON);
           glVertex2i(120, 55);
           glVertex2i (260, 55);
           glVertex2i (190, 210);

glEnd();


        glColor3f(0.5, 0.9, 0.0) ;  //level -5
     glBegin(GL_POLYGON);
           glVertex2i(140, 55);
           glVertex2i (240, 55);
           glVertex2i (190, 250);

glEnd();

glColor3f(0.0, 0.9, 0.5) ;  //level -6
 glBegin(GL_POLYGON);
           glVertex2i(160, 55);
           glVertex2i (220, 55);
           glVertex2i (190, 290);

glEnd();

glColor3f(0.9, 0.0, 0.3) ;  //level -7
 glBegin(GL_POLYGON);
           glVertex2i(180, 55);
           glVertex2i (200, 55);
           glVertex2i (190, 330);

glEnd();




     glFlush();
     glutSwapBuffers();

 }



int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
     glutInitWindowPosition (100, 100);
    glutInitWindowSize(700,500);
     glutCreateWindow ("National Monument");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}




