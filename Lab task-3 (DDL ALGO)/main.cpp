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

//int xs=150, ys=110, xe=90, ye=120;
int xs=21, ys=87, xe=387, ye=321;

double xi, yi, m;
void Draw()
{
 glClear(GL_COLOR_BUFFER_BIT);
   glColor3f( 1 ,0, 0);


   int m= (ye-ys)/(xe-xs);

   if(xe>xs)
   {

       if (m<=1){

        xi=1;
        yi=m;
       }
       else if(m>1)
       {
            yi=1;
             xi=1/m;

       }
   } // case 12 and 2

else if(xe<xs)
{
    if (m<=1){

        xi=-1;
        yi=-m;
       }
    else if(m>1)
       {
            yi=-1;
             xi=(-1)/m;

       } // csae 3 and 4

}

glBegin(GL_POINTS); // ponts fdraw korci tai
glVertex2i(round(xs), round(ys)); // always integer show korbve tai 2i .

while(1)
{

    xs=xs+xi;
    ys=ys+yi;
    glVertex2i(round(xs), round(ys));
    if(xs==xe || ys==ye)
    {

        break;
    }

}
glEnd();

glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Lab Task-03");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
