
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>


void init(void)
{
  glClearColor(1.0,1.0,1.0,1.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
 // glOrtho(0.0, 500.0, 0.0, 500.0, -1.0, 500.0);

  gluOrtho2D(-500,500,-300,700); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}




float p,x,y;
int r;



void MidPointCircle(int xe, int ye, int rad)

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
           p=p+(2*x)+3;
       }
       else{
        x++;
        y--;
        p=p+(2*x)-(2*y)+5;
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

   glColor3f( 0.3 ,0.0, 0.9); //accoprding my id 2309
 glBegin(GL_POLYGON);
   glVertex2d(-400,-70);
   glVertex2d(400,-70);
   glVertex2d(180,70);
   glVertex2d(-180,70);
   glEnd();

    glColor3f( 0.3 ,0.0,  0.1);
 glBegin(GL_POLYGON);
   glVertex2d(-390,-60);
   glVertex2d(390,-60);
   glVertex2d(170,60);
   glVertex2d(-170,60);
   glEnd();


    glColor3f( 0.9 ,0.0, 1);
 glBegin(GL_POLYGON);
   glVertex2d(-380,-50);
   glVertex2d(380,-50);
   glVertex2d(180,50);
   glVertex2d(-180,50);
   glEnd();

    glColor3f( 0.3 ,0.9, 1);
 glBegin(GL_POLYGON);
   glVertex2d(-370,-40);
   glVertex2d(370,-40);
   glVertex2d(180,40);
   glVertex2d(-180,40);
   glEnd();

 MidPointCircle(0,200,100);


//1
     glColor3f( 0.2 ,0.3, 0.0);
 glBegin(GL_POLYGON);
   glVertex2d(-100,390);
   glVertex2d(100,390);
   glVertex2d(100,370);
   glVertex2d(-100,370);
   glEnd();

//2
    glColor3f( 0.9 ,0.3, 0);
 glBegin(GL_POLYGON);
   glVertex2d(-100,370);
   glVertex2d(100,370);
   glVertex2d(60,300);
   glVertex2d(-60,300);
   glEnd();

//3
    glColor3f( 0 ,0, 0);
 glBegin(GL_POLYGON);
   glVertex2d(-50,350);
   glVertex2d(50,350);
   glVertex2d(30,300);
   glVertex2d(-30,300);
   glEnd();


   // 3.1

   glColor3f( 0 ,0.3, 0.9);
 glBegin(GL_POLYGON);
   glVertex2d(-40,350);
   glVertex2d(40,350);
   glVertex2d(25,300);
   glVertex2d(-25,300);
   glEnd();

   //LEFT

   glColor3f( 1 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2d(-60,300);
   glVertex2d(-30,300);
   glVertex2d(-30,0);
   glVertex2d(-60,0);
   glEnd();

   //LEFT SHADOW



glColor3f( 0 ,0, 0);
 glBegin(GL_POLYGON);
   glVertex2d(-30,300);
   glVertex2d(-25,300);
   glVertex2d(-25,10);
   glVertex2d(-30,0);
   glEnd();

     //R8

  glColor3f( 1 ,0, 0);
 glBegin(GL_POLYGON);
   glVertex2d(60,300);
   glVertex2d(30,300);
   glVertex2d(30,0);
   glVertex2d(60,0);
   glEnd();

   //R8 SHADOW
   glColor3f( 0 ,0, 0);
  glBegin(GL_POLYGON);
   glVertex2d(30,300);
   glVertex2d(25,300);
   glVertex2d(25,10);
   glVertex2d(30,0);
   glEnd();
   ////

//R8

 glColor3f( 1 ,0, 0);
  glBegin(GL_POLYGON);
   glVertex2d(130,280);
   glVertex2d(100,280);
   glVertex2d(100,0);
   glVertex2d(130,0);
   glEnd();

    //LEFT SHADOW
    glColor3f( 0 ,0, 0);
  glBegin(GL_POLYGON);
   glVertex2d(100,280);
   glVertex2d(93.5,270);
   glVertex2d(93.5,15);
   glVertex2d(100,0);
   glEnd();

   //R8
  glColor3f( 1 ,0, 0);
  glBegin(GL_POLYGON);
   glVertex2d(200,280);
   glVertex2d(170,280);
   glVertex2d(170,0);
   glVertex2d(200,0);
   glEnd();

   //R8 SHADOWE
    glColor3f( 0 ,0, 0);
  glBegin(GL_POLYGON);
   glVertex2d(170,250);
   glVertex2d(160,250);
   glVertex2d(160,10);
   glVertex2d(170,0);
   glEnd();

   //HEAD
    glColor3f( 1 ,0, 0);
  glBegin(GL_POLYGON);
   glVertex2d(170,280);
   glVertex2d(130,280);
   glVertex2d(130,250);
   glVertex2d(170,250);
   glEnd();

   //HEAD SHADOW
    glColor3f( 0 ,0, 0);
  glBegin(GL_POLYGON);
   glVertex2d(170,250);
   glVertex2d(130,250);
   glVertex2d(130,245);
   glVertex2d(160,245);
   glEnd();
   //RIGHT CLOSE

   //LEFT

     glColor3f( 1 ,0, 0);
  glBegin(GL_POLYGON);
   glVertex2d(-130,280);
   glVertex2d(-100,280);
   glVertex2d(-100,0);
   glVertex2d(-130,0);
   glEnd();

   //LEFT SHADOW

     glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2d(-100,280);
   glVertex2d(-93.5,270);
   glVertex2d(-93.5,15);
   glVertex2d(-100,0);
   glEnd();

    //R8 SHADOWE
      glColor3f( 1 ,0, 0);
       glBegin(GL_POLYGON);
   glVertex2d(-200,280);
   glVertex2d(-170,280);
   glVertex2d(-170,0);
   glVertex2d(-200,0);
   glEnd();
   //r8 shadow
    glColor3f( 0 ,0, 0);
  glBegin(GL_POLYGON);
   glVertex2d(-170,250);
   glVertex2d(-160,250);
   glVertex2d(-160,10);
   glVertex2d(-170,0);
   glEnd();

     //HEAD
    glColor3f( 1 ,0, 0);
  glBegin(GL_POLYGON);
   glVertex2d(-170,280);
   glVertex2d(-130,280);
   glVertex2d(-130,250);
   glVertex2d(-170,250);
   glEnd();

   //HEAD SHADOW
    glColor3f( 0 ,0, 0);
  glBegin(GL_POLYGON);
   glVertex2d(-170,250);
   glVertex2d(-130,250);
   glVertex2d(-130,245);
   glVertex2d(-160,245);
   glEnd();

glFlush();



//glutSwapBuffers();
}





int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Saheed Minar");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
