#include<cstdio>
#include <windows.h>
#include<math.h>
#include <vector>
#include <cstdlib>
# define PI 3.14159265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
#include<MMSystem.h>

void PointLight(const float amb)
{
    glEnable(GL_LIGHTING);
    GLfloat light_ambient[] = { amb,amb,amb, 1.0 };
    GLfloat light_position[] = {-0.9,.9,0, 0.0 };
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glEnable(GL_LIGHT0); //enable the light after setting the properties
}
GLfloat position22 = 0.0f;
GLfloat speed22 = 0.007f;

void birdd(int value)
{
    if(position22 > 1.0)
        position22 =-1.0f;
    position22 += speed22;
    glutPostRedisplay();
    glutTimerFunc(100, birdd, 0);
}


GLfloat position2 = 0.0f;
GLfloat speed2 = 0.004f;

void cloud(int value)
{
    if(position2 > 1.0)
        position2 =-1.0f;
    position2 += speed2;
    glutPostRedisplay();
    glutTimerFunc(100, cloud, 0);
}


void cloud1()
{
    int i;

    GLfloat x=.5f;
    GLfloat y=.86f;
    GLfloat radius =.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(182, 221, 234);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=.55f;
    GLfloat b=.83f;

    glBegin(GL_TRIANGLE_FAN);
    //glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=.45f;
    GLfloat d=.83f;

    glBegin(GL_TRIANGLE_FAN);
    //glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=.52f;
    GLfloat f=.8f;

    glBegin(GL_TRIANGLE_FAN);
    //glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=.6f;
    GLfloat h=.82f;

    glBegin(GL_TRIANGLE_FAN);
    //glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


}

void cloud2()
{
    // glLoadIdentity();
    int i;

    GLfloat x=-.5f;
    GLfloat y=.86f;
    GLfloat radius =.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(182, 221, 234);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=-.55f;
    GLfloat b=.83f;

    glBegin(GL_TRIANGLE_FAN);
    //glColor3ub(154, 205, 224);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=-.45f;
    GLfloat d=.83f;

    glBegin(GL_TRIANGLE_FAN);
    //glColor3ub(154, 205, 224);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=-.52f;
    GLfloat f=.8f;

    glBegin(GL_TRIANGLE_FAN);
    //glColor3ub(154, 205, 224);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=-.6f;
    GLfloat h=.82f;

    glBegin(GL_TRIANGLE_FAN);
    //glColor3ub(154, 205, 224);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void cloud3()
{
    // glLoadIdentity();
    int i;

    GLfloat x=0.0f;
    GLfloat y=.86f;
    GLfloat radius =.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=.05f;
    GLfloat b=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=-0.05f;
    GLfloat d=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=.02f;
    GLfloat f=.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=.1f;
    GLfloat h=.82f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void cloud4()
{
    // glLoadIdentity();
    int i;

    GLfloat x=-.5f;
    GLfloat y=.86f;
    GLfloat radius =.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=-.55f;
    GLfloat b=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=-.45f;
    GLfloat d=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=-.52f;
    GLfloat f=.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=-.6f;
    GLfloat h=.82f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}



void bird()
{
    int i;

    GLfloat mm=0.182f;
    GLfloat nn=.801f;
    GLfloat radiusmm =.01f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(225, 225, 208);
    glVertex2f(mm, nn);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            mm + (radiusmm * cos(i *  twicePi / triangleAmount)),
            nn + (radiusmm * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();


    //2nd bird
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();

    GLfloat mmm=0.062f;
    GLfloat nnn=.801f;
    GLfloat radiusmmm =.01f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(225, 225, 208);
    glVertex2f(mmm, nnn);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            mmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
            nnn + (radiusmmm * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    //3rd bird
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.72f,0.8f);
    glVertex2f(-0.71f,0.79f);
    glVertex2f(-0.7f,0.78f);
    glVertex2f(-0.66f,0.77f);
    glVertex2f(-0.63f,0.79f);
    glVertex2f(-0.619f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.67f,0.8f);
    glVertex2f(-0.68f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.676f,0.8f);
    glVertex2f(-0.7f,0.83f);
    glEnd();

    GLfloat mmmm=-0.638f;
    GLfloat nnnn=.801f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(225, 225, 208);
    glVertex2f(mmmm,nnnn); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            mmmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
            nnnn + (radiusmmm * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    //4th bird
    GLfloat mmmmm=-0.518f;
    GLfloat nnnnn=.801f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(225, 225, 208);
    glVertex2f(mmmmm, nnnnn); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            mmmmm + (radiusmm * cos(i *  twicePi / triangleAmount)),
            nnnnn + (radiusmm * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.59f,0.79f);
    glVertex2f(-0.58f,0.78f);
    glVertex2f(-0.54f,0.77f);
    glVertex2f(-0.51f,0.79f);
    glVertex2f(-0.499f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.56f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.556f,0.8f);
    glVertex2f(-0.58f,0.83f);
    glEnd();
}


void StartingText()
{
    char text[120];
    sprintf(text, "               A HISTORICAL MOSQUE",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20, 12 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -23, 10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text,"  PRESS 'N' FOR THE MOSQUE VIEW",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( -18, 0 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  Course Code: CSE422",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( -10, -11 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  Course Name: Computer Graphics Lab",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( -17, -15 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  Instructed by-",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( -35, -25 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  Israt Jahan");
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( -30, -29 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  Lecturer");
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( -30, -32 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  Department of Computer Science and Engineering");
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( -30, -35 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  Faculty of Science and Information Technology");
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( -30, -38 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  Daffodil International University");
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( -30, -41 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  Created by-",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( 20, -25 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  S. M. Rakibul Islam");
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( 25, -29 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  ID: 181-15-10869");
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( 25, -32 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  Section: G");
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( 25, -35 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  Department of Computer Science and Engineering");
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( 25, -38 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  Daffodil International University");
    glColor3f(0, 0, 0);
    glRasterPos2f( -100, 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( 25, -41 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }


}


void yard()
{
    //Main wall
    glBegin(GL_QUADS);
    glColor3ub(38, 68, 77);
    glVertex2f(-1.0f, -0.36f);
    glVertex2f(-0.35f, -0.27f);
    glVertex2f(-0.35f, -0.13f);
    glVertex2f(-1.0f, -0.22f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(86, 131, 154);
    glVertex2f(-0.05f, -0.27f);
    glVertex2f(1.0f, -0.36f);
    glVertex2f(1.0f, -0.22f);
    glVertex2f(-0.05f, -0.13f);
    glEnd();



    //Vertical lines straight
    glColor3ub(0, 0, 0);

    glLineWidth(1);

    glBegin(GL_LINES);
    glVertex2f(-0.98f + 0.05f, -0.21f);
    glVertex2f(-0.98f + 0.05f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.96f + 0.05f, -0.21f);
    glVertex2f(-0.96f + 0.05f, -0.345f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.88f + 0.05f, -0.20f);
    glVertex2f(-0.88f + 0.05f, -0.34f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.86f + 0.05f, -0.20f);
    glVertex2f(-0.86f + 0.05f, -0.34f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.08f + 0.05f, -0.132f);
    glVertex2f(-0.08f + 0.05f, -0.27f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.06f + 0.05f, -0.135f);
    glVertex2f(-0.06f + 0.05f, -0.27f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.02f + 0.05f, -0.142f);
    glVertex2f(0.02f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.04f + 0.05f, -0.145f);
    glVertex2f(0.04f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.12f + 0.05f, -0.152f);
    glVertex2f(0.12f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.14f + 0.05f, -0.155f);
    glVertex2f(0.14f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.22f + 0.05f, -0.162f);
    glVertex2f(0.22f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.24f + 0.05f, -0.165f);
    glVertex2f(0.24f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.32f + 0.05f, -0.168f);
    glVertex2f(0.32f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.34f + 0.05f, -0.17f);
    glVertex2f(0.34f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.42f + 0.05f, -0.175f);
    glVertex2f(0.42f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.44f + 0.05f, -0.178f);
    glVertex2f(0.44f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.52f + 0.05f, -0.182f);
    glVertex2f(0.52f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.54f + 0.05f, -0.185f);
    glVertex2f(0.54f + 0.05f, -1.0f);
    glEnd();

    //-4
    glBegin(GL_LINES);
    glVertex2f(0.62f + 0.05f, -0.190f);
    glVertex2f(0.62f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.64f + 0.05f, -0.192f);
    glVertex2f(0.64f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.72f + 0.05f, -0.202f);
    glVertex2f(0.72f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.74f + 0.05f, -0.205f);
    glVertex2f(0.74f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.82f + 0.05f, -0.210f);
    glVertex2f(0.82f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.84f + 0.05f, -0.212f);
    glVertex2f(0.84f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.92f + 0.05f, -0.220f);
    glVertex2f(0.92f + 0.05f, -1.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.94f + 0.05f, -0.222f);
    glVertex2f(0.94f + 0.05f, -1.0f);
    glEnd();





    //Main yard
    glBegin(GL_QUADS);
    glColor3ub(180, 124, 140);
    glVertex2f(-1.0f, -0.36f);
    glVertex2f(-0.05f, -0.2f);
    glVertex2f(-0.05f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(180, 124, 140);
    glVertex2f(-0.05f, -0.27f);
    glVertex2f(1.0f, -0.36f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-0.05f, -1.0f);
    glEnd();



    //Vertical lines
    glColor3ub(255, 255, 255);

    glLineWidth(1);

    glBegin(GL_LINES);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-0.98f + 0.05f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.98f, -1.0f);
    glVertex2f(-0.96f + 0.05f, -0.345f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.9f, -1.0f);
    glVertex2f(-0.88f + 0.05f, -0.325f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.88f, -1.0f);
    glVertex2f(-0.86f + 0.05f, -0.325f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.8f, -1.0f);
    glVertex2f(-0.78f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.78f, -1.0f);
    glVertex2f(-0.76f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.7f, -1.0f);
    glVertex2f(-0.68f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.68f, -1.0f);
    glVertex2f(-0.66f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.6f, -1.0f);
    glVertex2f(-0.58f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.58f, -1.0f);
    glVertex2f(-0.56f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.5f, -1.0f);
    glVertex2f(-0.48f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.48f, -1.0f);
    glVertex2f(-0.46f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.4f, -1.0f);
    glVertex2f(-0.38f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.38f, -1.0f);
    glVertex2f(-0.36f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.3f, -1.0f);
    glVertex2f(-0.28f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.28f, -1.0f);
    glVertex2f(-0.26f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.2f, -1.0f);
    glVertex2f(-0.18f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.18f, -1.0f);
    glVertex2f(-0.16f + 0.05f, -0.33f);
    glEnd();

    //10
    glBegin(GL_LINES);
    glVertex2f(-0.1f, -1.0f);
    glVertex2f(-0.08f + 0.05f, -0.27f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.08f, -1.0f);
    glVertex2f(-0.06f + 0.05f, -0.27f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.02f + 0.05f, -0.28f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.02f, -1.0f);
    glVertex2f(0.04f + 0.05f, -0.28f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.10f, -1.0f);
    glVertex2f(0.12f + 0.05f, -0.29f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.12f, -1.0f);
    glVertex2f(0.14f + 0.05f, -0.29f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.20f, -1.0f);
    glVertex2f(0.22f + 0.05f, -0.30f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.22f, -1.0f);
    glVertex2f(0.24f + 0.05f, -0.30f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.30f, -1.0f);
    glVertex2f(0.32f + 0.05f, -0.305f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.32f, -1.0f);
    glVertex2f(0.34f + 0.05f, -0.305f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.40f, -1.0f);
    glVertex2f(0.42f + 0.05f, -0.31f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.42f, -1.0f);
    glVertex2f(0.44f + 0.05f, -0.31f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.50f, -1.0f);
    glVertex2f(0.52f + 0.05f, -0.32f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.52f, -1.0f);
    glVertex2f(0.54f + 0.05f, -0.32f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.60f, -1.0f);
    glVertex2f(0.62f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.62f, -1.0f);
    glVertex2f(0.64f + 0.05f, -0.33f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.70f, -1.0f);
    glVertex2f(0.72f + 0.05f, -0.34f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.72f, -1.0f);
    glVertex2f(0.74f + 0.05f, -0.34f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.80f, -1.0f);
    glVertex2f(0.82f + 0.05f, -0.345f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.82f, -1.0f);
    glVertex2f(0.84f + 0.05f, -0.345f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.90f, -1.0f);
    glVertex2f(0.92f + 0.05f, -0.355f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.92f, -1.0f);
    glVertex2f(0.94f + 0.05f, -0.355f);
    glEnd();


    //Horizontal lines
    glColor3ub(255, 255, 255);

    glLineWidth(1);

    glBegin(GL_LINES);
    glVertex2f(-0.6f, -0.27f);
    glVertex2f(1.0f, -0.42f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.6f, -0.29f);
    glVertex2f(1.0f, -0.44f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.6f, -0.37f);
    glVertex2f(1.0f, -0.52f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.6f, -0.39f);
    glVertex2f(1.0f, -0.54f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0f, -0.45f);
    glVertex2f(1.0f, -0.62f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0f, -0.47f);
    glVertex2f(1.0f, -0.64f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0f, -0.55f);
    glVertex2f(1.0f, -0.72f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0f, -0.57f);
    glVertex2f(1.0f, -0.74f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0f, -0.65f);
    glVertex2f(1.0f, -0.82f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0f, -0.67f);
    glVertex2f(1.0f, -0.84f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0f, -0.75f);
    glVertex2f(1.0f, -0.92f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0f, -0.77f);
    glVertex2f(1.0f, -0.94f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0f, -0.85f);
    glVertex2f(1.0f, -1.02f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0f, -0.87f);
    glVertex2f(1.0f, -1.04f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0f, -0.95f);
    glVertex2f(1.0f, -1.12f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-1.0f, -0.97f);
    glVertex2f(1.0f, -1.14f);
    glEnd();
}

void leftWall()
{
    float theta;
    int i;

    //Left Wall
    glBegin(GL_QUADS);
    glColor3ub(57, 91, 90);
    glVertex2f(-0.50f, 0.0f);
    glVertex2f(-0.50f, -0.45f);
    glVertex2f(-0.79f, -0.43f);
    glVertex2f(-0.79f, -0.05f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.50f, -0.45f);
    glVertex2f(-0.50f, -0.27f);
    glVertex2f(-0.79f, -0.28f);
    glVertex2f(-0.79f, -0.43f);
    glEnd();

    //Vertical line left
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.79f, -0.048f);
    glVertex2f(-0.79f, -0.438f);
    glEnd();

    //Vertical line middle
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.50f, 0.0f);
    glVertex2f(-0.50f, -0.45f);
    glEnd();

    //Top lines (Cross)
    glColor3ub(0, 0, 0);

    glLineWidth(1.5);

    glBegin(GL_LINES);
    glVertex2f(-0.75f, -0.043f);
    glVertex2f(-0.79f, -0.093f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.72f, -0.040f);
    glVertex2f(-0.76f, -0.090f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.69f, -0.037f);
    glVertex2f(-0.73f, -0.085f);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.66f, -0.030f);
    glVertex2f(-0.70f, -0.080f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.63f, -0.025f);
    glVertex2f(-0.67f, -0.075f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.60f, -0.020f);
    glVertex2f(-0.64f, -0.070f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.57f, -0.013f);
    glVertex2f(-0.61f, -0.065f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.54f, -0.008f);
    glVertex2f(-0.58f, -0.06f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.51f, -0.00f);
    glVertex2f(-0.55f, -0.058f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.50f, -0.025f);
    glVertex2f(-0.52f, -0.052f);
    glEnd();


    //Opposite
    glColor3ub(0, 0, 0);

    glLineWidth(1.5);

    glBegin(GL_LINES);
    glVertex2f(-0.755f, -0.086f);
    glVertex2f(-0.788f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.725f, -0.083f);
    glVertex2f(-0.755f, -0.045f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.695f, -0.08f);
    glVertex2f(-0.725f, -0.04f);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.665f, -0.075f);
    glVertex2f(-0.695f, -0.035f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.635f, -0.07f);
    glVertex2f(-0.665f, -0.03f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.605f, -0.065f);
    glVertex2f(-0.635f, -0.025f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.575f, -0.06f);
    glVertex2f(-0.605f, -0.02f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.545f, -0.055f);
    glVertex2f(-0.575f, -0.015f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.515f, -0.05f);
    glVertex2f(-0.545f, -0.01f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.485f, -0.045f);
    glVertex2f(-0.515f, -0.005f);
    glEnd();



    //Vertical Lines
    glColor3ub(0, 0, 0);

    glLineWidth(1.5);

    glBegin(GL_LINES);
    glVertex2f(-0.7715f, -0.09f);
    glVertex2f(-0.7715f, -0.13f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.755f, -0.086f);
    glVertex2f(-0.755f, -0.125f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.7385f, -0.086f);
    glVertex2f(-0.7385f, -0.125f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.725f, -0.086f);
    glVertex2f(-0.725f, -0.125f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.71f, -0.082f);
    glVertex2f(-0.71f, -0.122f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.695f, -0.080f);
    glVertex2f(-0.695f, -0.120f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.68f, -0.078f);
    glVertex2f(-0.68f, -0.118f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.665f, -0.074f);
    glVertex2f(-0.665f, -0.114f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.65f, -0.070f);
    glVertex2f(-0.65f, -0.110f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.635f, -0.067f);
    glVertex2f(-0.635f, -0.108f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.62f, -0.067f);
    glVertex2f(-0.62f, -0.108f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.605f, -0.067f);
    glVertex2f(-0.605f, -0.108f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.59f, -0.065f);
    glVertex2f(-0.59f, -0.105f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.575f, -0.063f);
    glVertex2f(-0.575f, -0.103f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.56f, -0.06f);
    glVertex2f(-0.56f, -0.10f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.545f, -0.057f);
    glVertex2f(-0.545f, -0.097f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.53f, -0.055f);
    glVertex2f(-0.53f, -0.095f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.515f, -0.053f);
    glVertex2f(-0.515f, -0.093f);
    glEnd();



    //Horizontal line top may delete later
    glColor3ub(0, 0, 0);

    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(-0.50f, -0.00f);
    glVertex2f(-0.79f, -0.05f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(-0.50f, -0.025f);
    glVertex2f(-0.79f, -0.0725f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(-0.50f, -0.05f);
    glVertex2f(-0.79f, -0.095f);
    glEnd();



    //Horizontal line top 1
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.50f, -0.09f);
    glVertex2f(-0.79f, -0.13f);
    glEnd();

    //Horizontal line top 2
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.50f, -0.10f);
    glVertex2f(-0.79f, -0.14f);
    glEnd();

    //Horizontal wide line top
    glColor3ub(255, 255, 255);

    //1
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.75f, -0.15f);
    glVertex2f(-0.78f, -0.155f);
    glEnd();

    //2
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.71f, -0.146f);
    glVertex2f(-0.74f, -0.151f);
    glEnd();

    //3
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.67f, -0.142f);
    glVertex2f(-0.70f, -0.145f);
    glEnd();

    //4
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.63f, -0.137f);
    glVertex2f(-0.66f, -0.140f);
    glEnd();

    //5
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.59f, -0.131f);
    glVertex2f(-0.62f, -0.134f);
    glEnd();

    //6
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.55f, -0.125f);
    glVertex2f(-0.58f, -0.128f);
    glEnd();

    //7
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.51f, -0.118f);
    glVertex2f(-0.54f, -0.123f);
    glEnd();

    //Horizontal line top 3
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.50f, -0.133f);
    glVertex2f(-0.79f, -0.173f);
    glEnd();

    //Inner design for left wall

    //1
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.75f, -0.19f);
    glVertex2f(-0.75f, -0.276f);
    glVertex2f(-0.78f, -0.28f);
    glVertex2f(-0.78f, -0.19f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.765+0.015*cos(theta),-0.198+0.025*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.75f, -0.276f);
    glVertex2f(-0.75f, -0.435f);
    glVertex2f(-0.78f, -0.435f);
    glVertex2f(-0.78f, -0.28f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.75f, -0.276f);
    glVertex2f(-0.75f, -0.435f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.78f, -0.435f);
    glVertex2f(-0.78f, -0.28f);
    glEnd();

    //2
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.71f, -0.19f);
    glVertex2f(-0.71f, -0.276f);
    glVertex2f(-0.74f, -0.278f);
    glVertex2f(-0.74f, -0.19f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.725+0.015*cos(theta),-0.19+0.025*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.71f, -0.276f);
    glVertex2f(-0.71f, -0.435f);
    glVertex2f(-0.74f, -0.435f);
    glVertex2f(-0.74f, -0.278f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.71f, -0.276f);
    glVertex2f(-0.71f, -0.435f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.74f, -0.435f);
    glVertex2f(-0.74f, -0.278f);
    glEnd();

    //3
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.67f, -0.19f);
    glVertex2f(-0.67f, -0.276f);
    glVertex2f(-0.70f, -0.276f);
    glVertex2f(-0.70f, -0.19f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.685+0.015*cos(theta),-0.186+0.025*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.67f, -0.276f);
    glVertex2f(-0.67f, -0.437f);
    glVertex2f(-0.70f, -0.437f);
    glVertex2f(-0.70f, -0.276f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.67f, -0.276f);
    glVertex2f(-0.67f, -0.437f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.70f, -0.437f);
    glVertex2f(-0.70f, -0.276f);
    glEnd();

    //4
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.63f, -0.19f);
    glVertex2f(-0.63f, -0.272f);
    glVertex2f(-0.66f, -0.274f);
    glVertex2f(-0.66f, -0.19f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.645+0.015*cos(theta),-0.182+0.025*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.63f, -0.272f);
    glVertex2f(-0.63f, -0.440f);
    glVertex2f(-0.66f, -0.440f);
    glVertex2f(-0.66f, -0.274f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.63f, -0.272f);
    glVertex2f(-0.63f, -0.440f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.66f, -0.440f);
    glVertex2f(-0.66f, -0.274f);
    glEnd();

    //5
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.59f, -0.18f);
    glVertex2f(-0.59f, -0.272f);
    glVertex2f(-0.62f, -0.272f);
    glVertex2f(-0.62f, -0.18f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.605+0.015*cos(theta),-0.178+0.025*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.59f, -0.270f);
    glVertex2f(-0.59f, -0.442f);
    glVertex2f(-0.62f, -0.442f);
    glVertex2f(-0.62f, -0.272f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.59f, -0.270f);
    glVertex2f(-0.59f, -0.442f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.62f, -0.442f);
    glVertex2f(-0.62f, -0.272f);
    glEnd();

    //6
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.55f, -0.18f);
    glVertex2f(-0.55f, -0.270f);
    glVertex2f(-0.58f, -0.270f);
    glVertex2f(-0.58f, -0.17f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.565+0.015*cos(theta),-0.170+0.025*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.55f, -0.270f);
    glVertex2f(-0.55f, -0.446f);
    glVertex2f(-0.58f, -0.446f);
    glVertex2f(-0.58f, -0.270f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.55f, -0.270f);
    glVertex2f(-0.55f, -0.446f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.58f, -0.446f);
    glVertex2f(-0.58f, -0.270f);
    glEnd();

    //7
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.51f, -0.17f);
    glVertex2f(-0.51f, -0.268f);
    glVertex2f(-0.54f, -0.268f);
    glVertex2f(-0.54f, -0.16f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.525+0.015*cos(theta),-0.164+0.025*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.51f, -0.268f);
    glVertex2f(-0.51f, -0.448f);
    glVertex2f(-0.54f, -0.448f);
    glVertex2f(-0.54f, -0.270f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.51f, -0.268f);
    glVertex2f(-0.51f, -0.448f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.54f, -0.448f);
    glVertex2f(-0.54f, -0.270f);
    glEnd();

    //Horizontal line middle
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.50f, -0.27f);
    glVertex2f(-0.79f, -0.28f);
    glEnd();

    //Horizontal line bottom for left wall
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(66, 63, 63);
    glVertex2f(-0.50f, -0.45f);
    glVertex2f(-0.79f, -0.43f);
    glEnd();
}

void middleWall()
{
    float theta;
    int i;

    //Middle Wall
    glBegin(GL_QUADS);
    glColor3ub(57, 91, 90);
    glVertex2f(-0.50f, 0.0f);
    glVertex2f(-0.50f, -0.45f);
    glVertex2f(-0.20f, -0.42f);
    glVertex2f(-0.20f, -0.03f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.50f, -0.45f);
    glVertex2f(-0.50f, -0.27f);
    glVertex2f(-0.20f, -0.28f);
    glVertex2f(-0.20f, -0.42f);
    glEnd();

    //Vertical line
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.20f, -0.42f);
    glVertex2f(-0.20f, -0.03f);
    glEnd();



    //Top lines (Cross)
    glColor3ub(0, 0, 0);

    glLineWidth(1.5);

    glBegin(GL_LINES);
    glVertex2f(-0.48f, -0.0f);
    glVertex2f(-0.50f, -0.025f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.45f, -0.004f);
    glVertex2f(-0.49f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.42f, -0.008f);
    glVertex2f(-0.46f, -0.055f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.39f, -0.012f);
    glVertex2f(-0.43f, -0.056f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.36f, -0.016f);
    glVertex2f(-0.40f, -0.058f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.33f, -0.018f);
    glVertex2f(-0.37f, -0.060f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.30f, -0.021f);
    glVertex2f(-0.34f, -0.062f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.27f, -0.024f);
    glVertex2f(-0.31f, -0.064f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.24f, -0.027f);
    glVertex2f(-0.28f, -0.066f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.21f, -0.030f);
    glVertex2f(-0.25f, -0.068f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.18f, -0.035f);
    glVertex2f(-0.22f, -0.071f);
    glEnd();


    //Opposite
    glColor3ub(0, 0, 0);

    glLineWidth(1.5);

    glBegin(GL_LINES);
    glVertex2f(-0.48f, -0.052f);
    glVertex2f(-0.50f, -0.025f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.45f, -0.055f);
    glVertex2f(-0.49f, -0.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.42f, -0.057f);
    glVertex2f(-0.46f, -0.003f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.39f, -0.06f);
    glVertex2f(-0.43f, -0.006f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.36f, -0.063f);
    glVertex2f(-0.40f, -0.009f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.33f, -0.067f);
    glVertex2f(-0.37f, -0.012f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.30f, -0.068f);
    glVertex2f(-0.34f, -0.015f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.27f, -0.070f);
    glVertex2f(-0.31f, -0.018f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.24f, -0.073f);
    glVertex2f(-0.28f, -0.022f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.21f, -0.075f);
    glVertex2f(-0.25f, -0.025f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.18f, -0.078f);
    glVertex2f(-0.22f, -0.029f);
    glEnd();


    //Horizontal lines
    glColor3ub(0, 0, 0);

    glLineWidth(2);

    glBegin(GL_LINES);
    glVertex2f(-0.485f, -0.05f);
    glVertex2f(-0.485f, -0.09f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.47f, -0.05f);
    glVertex2f(-0.47f, -0.09f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.455f, -0.055f);
    glVertex2f(-0.455f, -0.095f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.44f, -0.06f);
    glVertex2f(-0.44f, -0.10f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.425f, -0.06f);
    glVertex2f(-0.425f, -0.10f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.41f, -0.062f);
    glVertex2f(-0.41f, -0.102f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.395f, -0.062f);
    glVertex2f(-0.395f, -0.103f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.38f, -0.062f);
    glVertex2f(-0.38f, -0.104f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.365f, -0.063f);
    glVertex2f(-0.365f, -0.106f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.35f, -0.064f);
    glVertex2f(-0.35f, -0.108f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.335f, -0.065f);
    glVertex2f(-0.335f, -0.109f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.32f, -0.067f);
    glVertex2f(-0.32f, -0.110f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.305f, -0.069f);
    glVertex2f(-0.305f, -0.111f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.29f, -0.070f);
    glVertex2f(-0.29f, -0.113f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.275f, -0.071f);
    glVertex2f(-0.275f, -0.114f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.26f, -0.073f);
    glVertex2f(-0.26f, -0.117f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.245f, -0.075f);
    glVertex2f(-0.245f, -0.117f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.23f, -0.076f);
    glVertex2f(-0.23f, -0.120f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.215f, -0.078f);
    glVertex2f(-0.215f, -0.122f);
    glEnd();



    //Horizontal line top may delete later
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.50f, -0.0f);
    glVertex2f(-0.20f, -0.03f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.50f, -0.025f);
    glVertex2f(-0.20f, -0.053f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.50f, -0.05f);
    glVertex2f(-0.20f, -0.075f);
    glEnd();

    //Horizontal line top 1
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.50f, -0.09f);
    glVertex2f(-0.20f, -0.12f);
    glEnd();

    //Vertical line top 2
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.50f, -0.10f);
    glVertex2f(-0.20f, -0.13f);
    glEnd();

    //Horizontal wide line top
    glColor3ub(255, 255, 255);

    //1
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.495f, -0.117f);
    glVertex2f(-0.485f, -0.117f);
    glEnd();

    //2
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.475f, -0.118f);
    glVertex2f(-0.465f, -0.118f);
    glEnd();

    //3
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.455f, -0.121f);
    glVertex2f(-0.445f, -0.121f);
    glEnd();

    //4
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.435f, -0.123f);
    glVertex2f(-0.425f, -0.123f);
    glEnd();

    //5
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.415f, -0.125f);
    glVertex2f(-0.405f, -0.125f);
    glEnd();

    //6
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.395f, -0.128f);
    glVertex2f(-0.385f, -0.128f);
    glEnd();

    //7
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.375f, -0.130f);
    glVertex2f(-0.365f, -0.130f);
    glEnd();

    //8
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.355f, -0.132f);
    glVertex2f(-0.345f, -0.132f);
    glEnd();

    //9
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.335f, -0.134f);
    glVertex2f(-0.325f, -0.134f);
    glEnd();

    //10
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.315f, -0.136f);
    glVertex2f(-0.305f, -0.136f);
    glEnd();

    //11
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.295f, -0.138f);
    glVertex2f(-0.285f, -0.138f);
    glEnd();

    //12
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.275f, -0.140f);
    glVertex2f(-0.265f, -0.140f);
    glEnd();

    //13
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.255f, -0.142f);
    glVertex2f(-0.245f, -0.142f);
    glEnd();

    //14
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.235f, -0.144f);
    glVertex2f(-0.225f, -0.144f);
    glEnd();

    //15
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(-0.215f, -0.146f);
    glVertex2f(-0.205f, -0.146f);
    glEnd();

    //Horizontal line top 3
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.50f, -0.133f);
    glVertex2f(-0.20f, -0.163f);
    glEnd();

    //Inner design from middle wall

    //1
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.49f, -0.16f);
    glVertex2f(-0.49f, -0.268f);
    glVertex2f(-0.46f, -0.268f);
    glVertex2f(-0.46f, -0.16f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.475+0.015*cos(theta),-0.164+0.025*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.49f, -0.270f);
    glVertex2f(-0.49f, -0.448f);
    glVertex2f(-0.46f, -0.448f);
    glVertex2f(-0.46f, -0.270f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.49f, -0.270f);
    glVertex2f(-0.49f, -0.448f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.46f, -0.448f);
    glVertex2f(-0.46f, -0.270f);
    glEnd();

    //2
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.45f, -0.16f);
    glVertex2f(-0.45f, -0.268f);
    glVertex2f(-0.43f, -0.268f);
    glVertex2f(-0.43f, -0.17f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.44+0.01*cos(theta),-0.162+0.02*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.45f, -0.270f);
    glVertex2f(-0.45f, -0.448f);
    glVertex2f(-0.43f, -0.448f);
    glVertex2f(-0.43f, -0.270f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.45f, -0.270f);
    glVertex2f(-0.45f, -0.448f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.43f, -0.448f);
    glVertex2f(-0.43f, -0.270f);
    glEnd();

    //3
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.42f, -0.18f);
    glVertex2f(-0.42f, -0.268f);
    glVertex2f(-0.39f, -0.268f);
    glVertex2f(-0.39f, -0.18f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.405+0.015*cos(theta),-0.169+0.025*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.42f, -0.270f);
    glVertex2f(-0.42f, -0.448f);
    glVertex2f(-0.39f, -0.446f);
    glVertex2f(-0.39f, -0.270f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.42f, -0.270f);
    glVertex2f(-0.42f, -0.448f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.39f, -0.446f);
    glVertex2f(-0.39f, -0.270f);
    glEnd();

    //5
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.31f, -0.18f);
    glVertex2f(-0.31f, -0.272f);
    glVertex2f(-0.28f, -0.272f);
    glVertex2f(-0.28f, -0.18f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.295+0.015*cos(theta),-0.180+0.025*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.31f, -0.274f);
    glVertex2f(-0.31f, -0.436f);
    glVertex2f(-0.28f, -0.436f);
    glVertex2f(-0.28f, -0.274f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.31f, -0.274f);
    glVertex2f(-0.31f, -0.436f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.28f, -0.436f);
    glVertex2f(-0.28f, -0.274f);
    glEnd();

    //6
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.27f, -0.18f);
    glVertex2f(-0.27f, -0.278f);
    glVertex2f(-0.25f, -0.278f);
    glVertex2f(-0.25f, -0.18f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.26+0.01*cos(theta),-0.178+0.02*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.27f, -0.280f);
    glVertex2f(-0.27f, -0.430f);
    glVertex2f(-0.25f, -0.430f);
    glVertex2f(-0.25f, -0.280f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.27f, -0.280f);
    glVertex2f(-0.27f, -0.430f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.25f, -0.430f);
    glVertex2f(-0.25f, -0.280f);
    glEnd();

    //7
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.24f, -0.18f);
    glVertex2f(-0.24f, -0.278f);
    glVertex2f(-0.21f, -0.278f);
    glVertex2f(-0.21f, -0.18f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.225+0.015*cos(theta),-0.186+0.025*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.24f, -0.280f);
    glVertex2f(-0.24f, -0.430f);
    glVertex2f(-0.21f, -0.430f);
    glVertex2f(-0.21f, -0.280f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.24f, -0.280f);
    glVertex2f(-0.24f, -0.430f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.21f, -0.430f);
    glVertex2f(-0.21f, -0.280f);
    glEnd();

    //Horizontal line bottom for middle wall
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(66, 63, 63);
    glVertex2f(-0.50f, -0.45f);
    glVertex2f(-0.20f, -0.42f);
    glEnd();

    //4
    glColor3ub(144, 151, 153);
    glBegin(GL_QUADS);
    glVertex2f(-0.38f, -0.15f);
    glVertex2f(-0.38f, -0.268f);
    glVertex2f(-0.32f, -0.270f);
    glVertex2f(-0.32f, -0.155f);
    glEnd();


    //Main gate
    glColor3ub(231, 239, 242);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.34+0.04*cos(theta),-0.233+0.045*sin(theta));
    }
    glEnd();

    glColor3ub(69, 68, 66);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.333+0.0335*cos(theta),-0.233+0.045*sin(theta));
    }
    glEnd();

    glColor3ub(39, 127, 131);
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.333+0.023*cos(theta),-0.250+0.043*sin(theta));
    }
    glEnd();

    //Horizontal line middle
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.50f, -0.27f);
    glVertex2f(-0.20f, -0.28f);
    glEnd();

    //Border on gate
    glColor3ub(200, 200, 200);
    glLineWidth(13);
    glBegin(GL_LINES);
    glVertex2f(-0.38f, -0.266f);
    glVertex2f(-0.30f, -0.267f);
    glEnd();

    glColor3ub(105, 108, 107);
    glLineWidth(13);
    glBegin(GL_LINES);
    glVertex2f(-0.38f, -0.266f);
    glVertex2f(-0.358f, -0.267f);
    glEnd();

    glColor3ub(69, 68, 66);
    glLineWidth(15);
    glBegin(GL_LINES);
    glVertex2f(-0.369f, -0.250f);
    glVertex2f(-0.369f, -0.230f);
    glEnd();

    //Inner of main gate black
    glColor3ub(69, 68, 66);
    glBegin(GL_QUADS);
    glVertex2f(-0.38f, -0.274f);
    glVertex2f(-0.38f, -0.444f);
    glVertex2f(-0.32f, -0.440f);
    glVertex2f(-0.32f, -0.272f);
    glEnd();

    //pillar for main gate
    glColor3ub(224, 177, 113);
    glLineWidth(8);
    glBegin(GL_LINES);
    glVertex2f(-0.36f, -0.272f);
    glVertex2f(-0.36f, -0.444f);
    glEnd();

    glColor3ub(224, 177, 113);
    glLineWidth(8);
    glBegin(GL_LINES);
    glVertex2f(-0.307f, -0.275f);
    glVertex2f(-0.307f, -0.435f);
    glEnd();

    //Square under pillar
    glColor3ub(227, 188, 130);
    glLineWidth(12);
    glBegin(GL_LINES);
    glVertex2f(-0.36f, -0.430f);
    glVertex2f(-0.36f, -0.445f);
    glEnd();

    glColor3ub(227, 188, 130);
    glLineWidth(12);
    glBegin(GL_LINES);
    glVertex2f(-0.307f, -0.430f);
    glVertex2f(-0.307f, -0.445f);
    glEnd();
}


void rightWall()
{
    float theta;
    int i;

    //Right Wall
    glBegin(GL_QUADS);
    glColor3ub(57, 91, 90);
    glVertex2f(-0.20f, -0.42f);
    glVertex2f(-0.20f, -0.03f);
    glVertex2f(-0.05f, -0.08f);
    glVertex2f(-0.05f, -0.36f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.20f, -0.42f);
    glVertex2f(-0.20f, -0.28f);
    glVertex2f(-0.05f, -0.26f);
    glVertex2f(-0.05f, -0.36f);
    glEnd();

    //Top lines (Cross)
    glColor3ub(0, 0, 0);

    glLineWidth(1.5);

    glBegin(GL_LINES);
    glVertex2f(-0.185f, -0.038f);
    glVertex2f(-0.20f, -0.0525f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.155f, -0.043f);
    glVertex2f(-0.19f, -0.078f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.125f, -0.052f);
    glVertex2f(-0.16f, -0.082f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.1f, -0.062f);
    glVertex2f(-0.13f, -0.088f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.075f, -0.07f);
    glVertex2f(-0.108f, -0.10f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.048f, -0.08f);
    glVertex2f(-0.08f, -0.102f);
    glEnd();


    //Oposite
    glColor3ub(0, 0, 0);

    glLineWidth(1.5);

    glBegin(GL_LINES);
    glVertex2f(-0.182f, -0.075f);
    glVertex2f(-0.20f, -0.0525f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.187f, -0.038f);
    glVertex2f(-0.155f, -0.082f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.158f, -0.043f);
    glVertex2f(-0.127f, -0.088f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.13f, -0.052f);
    glVertex2f(-0.099f, -0.10f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.103f, -0.062f);
    glVertex2f(-0.075f, -0.102f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.08f, -0.07f);
    glVertex2f(-0.05f, -0.11f);
    glEnd();


    //Horizontal lines
    glColor3ub(0, 0, 0);

    glLineWidth(2);

    glBegin(GL_LINES);
    glVertex2f(-0.185f, -0.078f);
    glVertex2f(-0.185f, -0.123f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.17f, -0.080f);
    glVertex2f(-0.17f, -0.125f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.156f, -0.080f);
    glVertex2f(-0.156f, -0.125f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.142f, -0.085f);
    glVertex2f(-0.142f, -0.125f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.128f, -0.088f);
    glVertex2f(-0.128f, -0.127f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.113f, -0.095f);
    glVertex2f(-0.113f, -0.130f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.1f, -0.095f);
    glVertex2f(-0.1f, -0.132f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.088f, -0.098f);
    glVertex2f(-0.088f, -0.135f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.077f, -0.1f);
    glVertex2f(-0.077f, -0.135f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.065f, -0.103f);
    glVertex2f(-0.065f, -0.136f);
    glEnd();










    //Horizontal line top may delete later
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.20f, -0.03f);
    glVertex2f(-0.05f, -0.08f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.20f, -0.053f);
    glVertex2f(-0.05f, -0.095f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.20f, -0.075f);
    glVertex2f(-0.05f, -0.11f);
    glEnd();

    //Horizontal line top 1
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.20f, -0.12f);
    glVertex2f(-0.05f, -0.14f);
    glEnd();

    //Horizontal line top 2
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.20f, -0.13f);
    glVertex2f(-0.05f, -0.15f);
    glEnd();

    //Horizontal wide line top
    glColor3ub(255, 255, 255);

    //1
    glLineWidth(6);
    glBegin(GL_LINES);
    glVertex2f(-0.19f, -0.146f);
    glVertex2f(-0.175f, -0.150f);
    glEnd();

    //2
    glLineWidth(6);
    glBegin(GL_LINES);
    glVertex2f(-0.17f, -0.150f);
    glVertex2f(-0.155f, -0.153f);
    glEnd();

    //3
    glLineWidth(6);
    glBegin(GL_LINES);
    glVertex2f(-0.15f, -0.153f);
    glVertex2f(-0.135f, -0.155f);
    glEnd();

    //4
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f(-0.13f, -0.155f);
    glVertex2f(-0.115f, -0.157f);
    glEnd();

    //5
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f(-0.11f, -0.157f);
    glVertex2f(-0.095f, -0.159f);
    glEnd();

    //6
    glLineWidth(4.5);
    glBegin(GL_LINES);
    glVertex2f(-0.09f, -0.158f);
    glVertex2f(-0.075f, -0.160f);
    glEnd();

    //7
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2f(-0.07f, -0.16f);
    glVertex2f(-0.055f, -0.161f);
    glEnd();

    //Horizontal line top 3
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.20f, -0.163f);
    glVertex2f(-0.05f, -0.172f);
    glEnd();

    //Inner design for right wall

    //1
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.19f, -0.19f);
    glVertex2f(-0.19f, -0.276f);
    glVertex2f(-0.175f, -0.28f);
    glVertex2f(-0.175f, -0.19f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.183+0.007*cos(theta),-0.19+0.02*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.19f, -0.276f);
    glVertex2f(-0.19f, -0.415f);
    glVertex2f(-0.175f, -0.41f);
    glVertex2f(-0.175f, -0.28f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.19f, -0.276f);
    glVertex2f(-0.19f, -0.415f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.175f, -0.41f);
    glVertex2f(-0.175f, -0.28f);
    glEnd();

    //2
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.17f, -0.19f);
    glVertex2f(-0.17f, -0.276f);
    glVertex2f(-0.155f, -0.28f);
    glVertex2f(-0.155f, -0.19f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.163+0.007*cos(theta),-0.19+0.02*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.17f, -0.276f);
    glVertex2f(-0.17f, -0.41f);
    glVertex2f(-0.155f, -0.405f);
    glVertex2f(-0.155f, -0.28f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.17f, -0.276f);
    glVertex2f(-0.17f, -0.41f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.155f, -0.405f);
    glVertex2f(-0.155f, -0.28f);
    glEnd();

    //3
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.15f, -0.19f);
    glVertex2f(-0.15f, -0.276f);
    glVertex2f(-0.135f, -0.27f);
    glVertex2f(-0.135f, -0.19f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.143+0.007*cos(theta),-0.19+0.02*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.15f, -0.276f);
    glVertex2f(-0.15f, -0.405f);
    glVertex2f(-0.135f, -0.4f);
    glVertex2f(-0.135f, -0.27f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.15f, -0.276f);
    glVertex2f(-0.15f, -0.405f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.135f, -0.4f);
    glVertex2f(-0.135f, -0.27f);
    glEnd();

    //4
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.13f, -0.19f);
    glVertex2f(-0.13f, -0.276f);
    glVertex2f(-0.115f, -0.27f);
    glVertex2f(-0.115f, -0.19f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.123+0.007*cos(theta),-0.192+0.02*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.13f, -0.276f);
    glVertex2f(-0.13f, -0.39f);
    glVertex2f(-0.115f, -0.39f);
    glVertex2f(-0.115f, -0.27f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.13f, -0.276f);
    glVertex2f(-0.13f, -0.39f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.115f, -0.39f);
    glVertex2f(-0.115f, -0.27f);
    glEnd();

    //5
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.11f, -0.19f);
    glVertex2f(-0.11f, -0.276f);
    glVertex2f(-0.095f, -0.27f);
    glVertex2f(-0.095f, -0.19f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.103+0.007*cos(theta),-0.192+0.02*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.11f, -0.276f);
    glVertex2f(-0.11f, -0.39f);
    glVertex2f(-0.095f, -0.38f);
    glVertex2f(-0.095f, -0.27f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.11f, -0.276f);
    glVertex2f(-0.11f, -0.39f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.095f, -0.38f);
    glVertex2f(-0.095f, -0.27f);
    glEnd();

    //6
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.09f, -0.19f);
    glVertex2f(-0.09f, -0.27f);
    glVertex2f(-0.075f, -0.27f);
    glVertex2f(-0.075f, -0.19f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.083+0.007*cos(theta),-0.192+0.02*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.09f, -0.27f);
    glVertex2f(-0.09f, -0.38f);
    glVertex2f(-0.075f, -0.37f);
    glVertex2f(-0.075f, -0.27f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.09f, -0.27f);
    glVertex2f(-0.09f, -0.38f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.075f, -0.37f);
    glVertex2f(-0.075f, -0.27f);
    glEnd();

    //7
    glColor3ub(39, 127, 131);
    glBegin(GL_QUADS);
    glVertex2f(-0.07f, -0.20f);
    glVertex2f(-0.07f, -0.27f);
    glVertex2f(-0.055f, -0.26f);
    glVertex2f(-0.055f, -0.20f);
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.063+0.007*cos(theta),-0.195+0.02*sin(theta));
    }
    glEnd();

    glColor3ub(200, 200, 200);
    glBegin(GL_QUADS);
    glVertex2f(-0.07f, -0.27f);
    glVertex2f(-0.07f, -0.37f);
    glVertex2f(-0.055f, -0.36f);
    glVertex2f(-0.055f, -0.26f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.07f, -0.27f);
    glVertex2f(-0.07f, -0.37f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(96, 101, 99);
    glVertex2f(-0.055f, -0.36f);
    glVertex2f(-0.055f, -0.26f);
    glEnd();

    //Horizontal line middle
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.20f, -0.28f);
    glVertex2f(-0.05f, -0.26f);
    glEnd();

    //Horizontal line bottom for right wall
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(66, 63, 63);
    glVertex2f(-0.20f, -0.42f);
    glVertex2f(-0.05f, -0.36f);
    glEnd();

    //Vertical line right
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.049f, -0.08f);
    glVertex2f(-0.049f, -0.368f);
    glEnd();
}

void mosque()
{
    leftWall();
    middleWall();
    rightWall();
}

void dome()
{
    float theta;
    int i;

    //Big dome
    glBegin(GL_POLYGON);
    glColor3ub(237, 196, 62);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.45+0.15*cos(theta),0.05+0.30*sin(theta));
    }
    glEnd();

    //Over under big dome 1
    glBegin(GL_POLYGON);
    glColor3ub(40, 20, 10);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.45+0.17*cos(theta),0.05+0.04*sin(theta));
    }
    glEnd();

    //Over under big dome 2
    glBegin(GL_POLYGON);
    glColor3ub(148, 153, 149);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.45+0.15*cos(theta),0.05+0.02*sin(theta));
    }
    glEnd();

    //Rectangle under big dome
    glBegin(GL_QUADS);
    glColor3ub(148, 153, 149);
    glVertex2f(-0.60f, -0.05f);
    glVertex2f(-0.30f, -0.05f);
    glVertex2f(-0.30f, 0.05f);
    glVertex2f(-0.60f, 0.05f);
    glEnd();

    //Triangle on the dome
    glBegin(GL_POLYGON);
    glColor3ub(237, 196, 62);
    glVertex2f(-0.45f, 0.37f);
    glVertex2f(-0.40f, 0.325f);
    glVertex2f(-0.50f, 0.325f);
    glEnd();

    //Line on the top of dome
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f(-0.45,0.35);
    glVertex2f(-0.45,0.53);     //Top point of the dome
    glEnd();

    //Top 3 ovals on the line
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.45+0.010*cos(theta),0.39+0.015*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.45+0.015*cos(theta),0.44+0.025*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.45+0.010*cos(theta),0.49+0.015*sin(theta));
    }
    glEnd();

    //Top most oval on the line
    glBegin(GL_POLYGON);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.45+0.02*cos(theta),0.545+0.025*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    for(i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0.45+0.015*cos(theta),0.55+0.017*sin(theta));
    }
    glEnd();
}


void displaytext()
{

    char text[120];
    int i;
    sprintf(text, "                 Masjid Al-Aqsa",5.00,8.00);
    glColor3ub(0, 0, 0);
    glRasterPos2f( -20, 12 );
    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
            glRasterPos2f( 0.15, 0.32 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }



    sprintf(text, "                 Masjid Al-Aqsa is an important holy site in Islam,",5.00,8.00);
    glColor3ub(0, 0, 0);
    glRasterPos2f( -20, 12 );
    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
            glRasterPos2f( 0.15, 0.25 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
    }

    sprintf(text, "                 located in the Old City of Jerusalem in Palestine.",5.00,8.00);
    glColor3ub(0, 0, 0);
    glRasterPos2f( -20, 12 );
    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
            glRasterPos2f( 0.15, 0.20 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
    }

    sprintf(text, "                 It’s name translates literally as ‘the Farthest Mosque’.",5.00,8.00);
    glColor3ub(0, 0, 0);
    glRasterPos2f( -20, 12 );
    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
            glRasterPos2f( 0.15, 0.15 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
    }

    sprintf(text, "                 The wider compound includes the Dome of the Rock,",5.00,8.00);
    glColor3ub(0, 0, 0);
    glRasterPos2f( -20, 12 );
    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
            glRasterPos2f( 0.15, 0.10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
    }

    sprintf(text, "                 seventeen gates and four minarets,",5.00,8.00);
    glColor3ub(0, 0, 0);
    glRasterPos2f( -20, 12 );
    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
            glRasterPos2f( 0.15, 0.05 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
    }

    sprintf(text, "                  and is usually referred to as al-Haram ash-Sharif,",5.00,8.00);
    glColor3ub(0, 0, 0);
    glRasterPos2f( -20, 12 );
    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
            glRasterPos2f( 0.15, 0.00 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
    }

    sprintf(text, "                  which means ‘the Noble Sanctuary’.",5.00,8.00);
    glColor3ub(0, 0, 0);
    glRasterPos2f( -20, 12 );
    for(i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
            glRasterPos2f( 0.15, -0.05 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]);
    }


}

struct Point
{
    float x, y;
    unsigned char r, g, b, a;
};
std::vector< Point > points;


void display()
{

    glClearColor(0.98f, 0.98f, 0.98f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glLineWidth(2);

    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    cloud1();
    cloud2();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position22,0.0f, 0.0f);
    bird();
    glPopMatrix();


    yard();
    dome();
    mosque();

    displaytext();

    glFlush();
    glutSwapBuffers();

}
void reshape(int w, int h)
{
    float aspectRatio = (float)w/(float)h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(145, aspectRatio, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);

}

void Display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0,0,-20);
    StartingText();
    glFlush();
    glutSwapBuffers();
}

void init(void)
{
    glClearColor( 1.0f, 1.0f, 1.0f, 1.0f);
    glClearDepth( 1.0 );
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_LIGHT0);
}
void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case  'n':
        glutDestroyWindow(1);
        glutInitWindowSize(1240, 750);
        glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-750)/2);
        glutCreateWindow("Masjid Al-Aqsa");
        glutKeyboardFunc(handleKeypress);
        glutDisplayFunc(display);
        PlaySound(TEXT("Al aqsa.wav"), NULL, SND_ASYNC);
        break;


    case  'N':
        glutDestroyWindow(1);
        glutInitWindowSize(1240, 750);
        glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-750)/2);
        glutCreateWindow("Masjid Al-Aqsa");
        glutKeyboardFunc(handleKeypress);
        glutDisplayFunc(display);
        PlaySound(TEXT("Al aqsa.wav"), NULL, SND_ASYNC);
        break;

    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_MULTISAMPLE);
    glutInitWindowSize(1240, 750);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-750)/2);
    glutCreateWindow("Masjid Al-Aqsa");
    init();
    glutReshapeFunc(reshape);
    glutDisplayFunc(Display);
    for( size_t i = 0; i < 1000; ++i )
    {
        Point pt;
        pt.x = -50 + (rand() % 100);
        pt.y = -50 + (rand() % 100);
        pt.r = 255;
        pt.g = 255;
        pt.b = 255;
        pt.a = 255;
        points.push_back(pt);
    }
    glutTimerFunc(100, cloud, 0);
    glutTimerFunc(100, birdd, 0);
    glutKeyboardFunc(handleKeypress);
    init();
    glutMainLoop();
    return 0;
}

