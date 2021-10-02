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
    //dark red
  glColor3f( 0.9 ,0.0, 0.0);
   glVertex2i(50,320);  //(x,y) left up corner
    glVertex2i(90,320);//(x,y) right up corner
    glVertex2i(90,280);// x,y) right down corner
    glVertex2i(50,280); //x,y) left down corner
// white
    glColor3f( 1.0 ,1.0, 1.0);
   glVertex2i(90,320);  //(x,y) left up corner
    glVertex2i(130,320);//(x,y) right up corner
    glVertex2i(130,280);// x,y) right down corner
    glVertex2i(90,280); //x,y) left down corner

    //dark red
    glColor3f( 0.9 ,0.0, 0.0);
   glVertex2i(130,320);
    glVertex2i(170,320);
    glVertex2i(170,280);
    glVertex2i(130,280);

    //yellow

    glColor3f(1.0,0.8,0.10);
   glVertex2i(170,320);
    glVertex2i(210,320);  // all same
    glVertex2i(210,280);
    glVertex2i(170,280);

//blue
    glColor3f(0.00,0.00,0.50);
   glVertex2i(210,320);
    glVertex2i(250,320);   //all same
    glVertex2i(250,280);
    glVertex2i(210,280);
    // white
    glColor3f( 1.0 ,1.0, 1.0);
   glVertex2i(250,320);
    glVertex2i(290,320);
    glVertex2i(290,280);
    glVertex2i(250,280);

    // second line
  //yellow

    glColor3f(1.0,0.8,0.10);
   glVertex2i(50,280);
    glVertex2i(90,280);
    glVertex2i(90,240);
    glVertex2i(50,240);


    //dark red
    glColor3f( 0.9 ,0.0, 0.0);
   glVertex2i(90,280);
    glVertex2i(130,280);
    glVertex2i(130,240);
    glVertex2i(90,240);

   // white
    glColor3f( 1.0 ,1.0, 1.0);
   glVertex2i(130,280);
    glVertex2i(170,280);
    glVertex2i(170,240);
    glVertex2i(130,240);


    //dark red
    glColor3f( 0.9 ,0.0, 0.0);
   glVertex2i(170,280);
    glVertex2i(210,280);  // all same
    glVertex2i(210,240);
    glVertex2i(170,240);

    //yellow

    glColor3f(1.0,0.8,0.10);
   glVertex2i(210,280);
    glVertex2i(250,280);   //all same
    glVertex2i(250,240);
    glVertex2i(210,240);

   //blue
    glColor3f(0.00,0.00,0.50);
   glVertex2i(250,280);
    glVertex2i(290,280);
    glVertex2i(290,240);
    glVertex2i(250,240);


 // 3rd line

  //blue
    glColor3f(0.00,0.00,0.50);
   glVertex2i(50,240);
    glVertex2i(90,240);
    glVertex2i(90,200);
    glVertex2i(50,200);


     //yellow

    glColor3f(1.0,0.8,0.10);
   glVertex2i(90,240);
    glVertex2i(130,240);
    glVertex2i(130,200);
    glVertex2i(90,200);

    //dark red
    glColor3f( 0.9 ,0.0, 0.0);
   glVertex2i(130,240);
    glVertex2i(170,240);
    glVertex2i(170,200);
    glVertex2i(130,200);


   // white
    glColor3f( 1.0 ,1.0, 1.0);
   glVertex2i(170,240);
    glVertex2i(210,240);  // all same
    glVertex2i(210,200);
    glVertex2i(170,200);

    //dark red
    glColor3f( 0.9 ,0.0, 0.0);
   glVertex2i(210,240);
    glVertex2i(250,240);   //all same
    glVertex2i(250,200);
    glVertex2i(210,200);

  //yellow
    glColor3f(1.0,0.8,0.10);
   glVertex2i(250,240);
    glVertex2i(290,240);
    glVertex2i(290,200);
    glVertex2i(250,200);


 // 4th line

 // white
    glColor3f( 1.0 ,1.0, 1.0);
   glVertex2i(50,200);
    glVertex2i(90,200);
    glVertex2i(90,160);
    glVertex2i(50,160);


      //blue
    glColor3f(0.00,0.00,0.50);
   glVertex2i(90,200);
    glVertex2i(130,200);
    glVertex2i(130,160);
    glVertex2i(90,160);

    //yellow
    glColor3f(1.0,0.8,0.10);
   glVertex2i(130,200);
    glVertex2i(170,200);
    glVertex2i(170,160);
    glVertex2i(130,160);


    //dark red
    glColor3f( 0.9 ,0.0, 0.0);
   glVertex2i(170,200);
    glVertex2i(210,200);  // all same
    glVertex2i(210,160);
    glVertex2i(170,160);

   // white
    glColor3f( 1.0 ,1.0, 1.0);
   glVertex2i(210,200);
    glVertex2i(250,200);   //all same
    glVertex2i(250,160);
    glVertex2i(210,160);

  //dark red
    glColor3f( 0.9 ,0.0, 0.0);
   glVertex2i(250,200);
    glVertex2i(290,200);
    glVertex2i(290,160);
    glVertex2i(250,160);




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
    glutInitWindowSize(700,700);
    glutCreateWindow("nathional flag of Antwerp Flag");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
