#include<windows.h>
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>

// Display variables
GLfloat w = 500, h = 500, zy1 = 65, zy2 = 430;

// Car nano variables
GLfloat ay = 0, by1 = 480, by2 = 480, by3 = 460, by4 = 460, by5 = 460, by6 = 460, by7 = 420, by8 = 420, by9 = 420, by10 = 420, by11 = 400, by12 = 400, ax = 0, bx = 0;
GLfloat by13 = 403, by14 = 403, by15 = 416, by16 = 416, by17 = 403, by18 = 403, by19 = 416, by20 = 416, by21 = 463, by22 = 463, by23 = 476, by24 = 476, by25 = 463, by26 = 463, by27 = 476, by28 = 476;

// Car bmw variables
GLfloat ay1 = 20, ay2 = 20, ay3 = 40, ay4 = 40, ay5 = 40, ay6 = 40, ay7 = 90, ay8 = 90, ay9 = 90, ay10 = 90, ay11 = 130, ay12 = 130;
GLfloat ay13 = 25, ay14 = 25, ay15 = 38, ay16 = 38, ay17 = 25, ay18 = 25, ay19 = 38, ay20 = 38, ay21 = 95, ay22 = 95, ay23 = 108, ay24 = 108, ay25 = 95, ay26 = 95, ay27 = 108, ay28 = 108;

// Flag variables
GLint flagd = 0, flaga = 0, flagc = 0, color1 = 0, flagl = 0, flag2 = 0, flagr = 0, flag3 = 0;
GLfloat size = 0.05, sizer = 0.04, sizec = 0.03;

// Car 3 variables
GLfloat cy1 = -20, cy2 = -20, cy3 = -40, cy4 = -40, cy5 = -40, cy6 = -40, cy7 = -90, cy8 = -90, cy9 = -90, cy10 = -90, cy11 = -110, cy12 = -110, cy = 5;
GLfloat cy13 = -25, cy14 = -25, cy15 = -38, cy16 = -38, cy17 = -25, cy18 = -25, cy19 = -38, cy20 = -38, cy21 = -95, cy22 = -95, cy23 = -108, cy24 = -108, cy25 = -95, cy26 = -95, cy27 = -108, cy28 = -108;

static void key(unsigned char key, int x, int y);
void display();
void drawstring(float x, float y, float z, char* string)
{
    char* c;
    glRasterPos3f(x, y, z);
    for (c = string; *c != '\0'; c++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }
}
void drawstring1(float x, float y, float z, char* string)
{
    char* c;
    glRasterPos3f(x, y, z);
    for (c = string; *c != '\0'; c++)
    {
        glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *c);
    }
}

void drawstring2(float x, float y, float z, char* string)
{
    char* c;
    glRasterPos3f(x, y, z);
    for (c = string; *c != '\0'; c++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, *c);
    }
}

void mov()
{
    if (flagl == 0)
    {
        if (by9 > 380 || by10 > 380 || by11 > 380 || by12 > 380)
        {
            by1 -= sizer;
            by2 -= sizer;
            by3 -= sizer;
            by4 -= sizer;
            by5 -= sizer;
            by6 -= sizer;
            by7 -= sizer;
            by8 -= sizer;
            by9 -= sizer;
            by10 -= sizer;
            by11 -= sizer;
            by12 -= sizer;
            by13 -= sizer; // wheels
            by14 -= sizer;
            by15 -= sizer;
            by16 -= sizer;
            by17 -= sizer;
            by18 -= sizer;
            by19 -= sizer;
            by20 -= sizer;
            by21 -= sizer;
            by22 -= sizer;
            by23 -= sizer;
            by24 -= sizer;
            by25 -= sizer;
            by26 -= sizer;
            by27 -= sizer;
            by28 -= sizer;
            zy2 -= sizer;
        }
    }

    if (flagl == 1)
    {
        if (by9 > 1 || by10 >= 1 || by11 >= 1 || by12 >= 1)
        {
            if (by1 < 270)
                flag2 = 0;
            by1 -= sizer;
            by2 -= sizer;
            by3 -= sizer;
            by4 -= sizer;
            by5 -= sizer;
            by6 -= sizer;
            by7 -= sizer;
            by8 -= sizer;
            by9 -= sizer;
            by10 -= sizer;
            by11 -= sizer;
            by12 -= sizer;
            by13 -= sizer; // wheel
            by14 -= sizer;
            by15 -= sizer;
            by16 -= sizer;
            by17 -= sizer;
            by18 -= sizer;
            by19 -= sizer;
            by20 -= sizer;
            by21 -= sizer;
            by22 -= sizer;
            by23 -= sizer;
            by24 -= sizer;
            by25 -= sizer;
            by26 -= sizer;
            by27 -= sizer;
            by28 -= sizer;
            zy2 -= sizer;
        }
        else
        {
            flagl = 0;
            by1 = 480;
            by2 = 480;
            by3 = 460;
            by4 = 460;
            by5 = 460;
            by6 = 460;
            by7 = 420;
            by8 = 420;
            by9 = 420;
            by10 = 420;
            by11 = 400;
            by12 = 400;
            by13 = 403; // wheel
            by14 = 403;
            by15 = 416;
            by16 = 416;
            by17 = 403;
            by18 = 403;
            by19 = 416;
            by20 = 416;
            by21 = 463;
            by22 = 463;
            by23 = 476;
            by24 = 476;
            by25 = 463;
            by26 = 463;
            by27 = 476;
            by28 = 476;
            zy2 = 430;
        }
    }
// Second car move
    if (flagr == 0)
    {
        if (ay9 < 300 || ay10 < 300 || ay11 < 300 || ay12 < 300)
        {
            ay1 += size;
            ay2 += size;
            ay3 += size;
            ay4 += size;
            ay5 += size;
            ay6 += size;
            ay7 += size;
            ay8 += size;
            ay9 += size;
            ay10 += size;
            ay11 += size;
            ay12 += size;
            ay13 += size; // wheel
            ay14 += size;
            ay15 += size;
            ay16 += size;
            ay17 += size;
            ay18 += size;
            ay19 += size;
            ay20 += size;
            ay21 += size;
            ay22 += size;
            ay23 += size;
            ay24 += size;
            ay25 += size;
            ay26 += size;
            ay27 += size;
            ay28 += size;
            cy = cy + size;
            zy1 = zy1 + size;
        }
    }
    if (flagr == 1)
    {
        if (ay1 < 500 || ay2 < 500 || ay3 < 500 || ay4 < 500)
        {
            if (ay1 > 370)
                flag3 = 0;
            ay1 += size;
            ay2 += size;
            ay3 += size;
            ay4 += size;
            ay5 += size;
            ay6 += size;
            ay7 += size;
            ay8 += size;
            ay9 += size;
            ay10 += size;
            ay11 += size;
            ay12 += size;
            ay13 += size; // wheel
            ay14 += size;
            ay15 += size;
            ay16 += size;
            ay17 += size;
            ay18 += size;
            ay19 += size;
            ay20 += size;
            ay21 += size;
            ay22 += size;
            ay23 += size;
            ay24 += size;
            ay25 += size;
            ay26 += size;
            ay27 += size;
            ay28 += size;
            cy = cy + size;
            zy1 = zy1 + size;
        }
    }
    if (flagc == 0)
    {
        if (cy1 < 330 && cy1 < cy)
        {
            cy1 += sizec;
            cy2 += sizec;
            cy3 += sizec;
            cy4 += sizec;
            cy5 += sizec;
            cy6 += sizec;
            cy7 += sizec;
            cy8 += sizec;
            cy9 += sizec;
            cy10 += sizec;
            cy11 += sizec;
            cy12 += sizec;
            cy13 += sizec; // wheel
            cy14 += sizec;
            cy15 += sizec;
            cy16 += sizec;
            cy17 += sizec;
            cy18 += sizec;
            cy19 += sizec;
            cy20 += sizec;
            cy21 += sizec;
            cy22 += sizec;
            cy23 += sizec;
            cy24 += sizec;
            cy25 += sizec;
            cy26 += sizec;
            cy27 += sizec;
            cy28 += sizec;
        }
    }
    if (flagc == 1)
    {
        if (cy1 > 270)
            flag3 = 0;
        if (cy1 <= 499 && cy1 < cy)
        {
            if (cy12 > 370)
                flag3 = 0;
            cy1 += sizec;
            cy2 += sizec;
            cy3 += sizec;
            cy4 += sizec;
            cy5 += sizec;
            cy6 += sizec;
            cy7 += sizec;
            cy8 += sizec;
            cy9 += sizec;
            cy10 += sizec;
            cy11 += sizec;
            cy12 += sizec;
            cy13 += sizec; // wheel
            cy14 += sizec;
            cy15 += sizec;
            cy16 += sizec;
            cy17 += sizec;
            cy18 += sizec;
            cy19 += sizec;
            cy20 += sizec;
            cy21 += sizec;
            cy22 += sizec;
            cy23 += sizec;
            cy24 += sizec;
            cy25 += sizec;
            cy26 += sizec;
            cy27 += sizec;
            cy28 += sizec;
        }
        else
        {
            flagc = 1;
            flag3 = 0;
            color1 = 1;
            cy1 = -20;
            cy2 = -20;
            cy3 = -40;
            cy4 = -40;
            cy5 = -40;
            cy6 = -40;
            cy7 = -90;
            cy8 = -90;
            cy9 = -90;
            cy10 = -90;
            cy11 = -110;
            cy12 = -110;
            cy13 = -25; // wheel
            cy14 = -25;
            cy15 = -38;
            cy16 = -38;
            cy17 = -25;
            cy18 = -25;
            cy19 = -38;
            cy20 = -38;
            cy21 = -95;
            cy22 = -95;
            cy23 = -108;
            cy24 = -108;
            cy25 = -95;
            cy26 = -95;
            cy27 = -108;
            cy28 = -108;
        }
    }
    glutPostRedisplay();
}

void mouse(int btn, int state, int x, int y)
{
    if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
        flagr = 1;
    flag3 = 1;

    if (btn == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
        flagl = 1;
    flag2 = 1;

}
void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (w <= h)
        gluOrtho2D(0.0, 500.0, 0.0 * (GLfloat)h / (GLfloat)w, 500.0 * (GLfloat)h / (GLfloat)w);
    else
        gluOrtho2D(0.0 * (GLfloat)w / (GLfloat)h, 500.0 * (GLfloat)w / (GLfloat)h, 0.0, 500.0);
    glMatrixMode(GL_MODELVIEW);
}

void init(void)
{
    glClearColor(0.1, 0.5, 0.1, 0.0);
    glShadeModel(GL_SMOOTH);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);
    glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(800, 500);
    glutInitWindowPosition(300, 200);
    glutCreateWindow("Toll collecting booth");
    init();
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutReshapeFunc(reshape);
    glutIdleFunc(mov);
    glutKeyboardFunc(key);
    glutMainLoop();
}
static void key(unsigned char key1, int x, int y)
{
    switch (key1)
    {
    case 'Q':
    case 'q':
        exit(0);
        break;
    case 'r':
    case 'R':
        flagl = 1;
        flag2 = 1;
        break;
    case 'l':
    case 'L':
        flagr = 1;
        flag3 = 1;
        break;
    case 'z':
    case 'Z':
        size *= 2;
        break;
    case 'x':
    case 'X':
        size /= 2;
        break;
    case 'n':
    case 'N':
        sizer *= 2;
        break;
    case 'm':
    case 'M':
        sizer /= 2;
        break;
    case 'v':
    case 'V':
        sizec *= 2;
        break;
    case 'b':
    case 'B':
        sizec /= 2;
        break;
    case '1':
        flaga = 1;
        break;
    case '2':
        flagd = 1;
        break;
    case '0':
        flagc = 1;
        break;
    }
}

void welcome()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    drawstring(150, 400, 0.0, "WEL-COME");
    glColor3f(0.0, 1.0, 1.0);
    drawstring1(100, 300, 0.0, "Mini Project created by:");
    glColor3f(0.0, 0.0, 1.0);
    drawstring(180, 260, 0.0, "Humayoun Kobir,Sanjana and Kallol");
    glColor3f(1.0, 1.0, 0.0);
    drawstring2(300, 20, 0.0, "For Next Press:1");
}
void frontscreen()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    drawstring(130, 470, 0.0, "computer graphics");
    drawstring(260, 470, 0.0, "mini");
    drawstring(300, 470, 0.0, "project");
    glColor3f(1.0, 0.5, 0.5);
    drawstring(70, 410, 0.0, "[TOLL");
    drawstring(170, 410, 0.0, "COLLECTING");
    drawstring(350, 410, 0.0, "BOOTH]");
    glColor3f(1.0, 1.0, 1.0);
    drawstring1(10, 350, 0.0, "submitted");
    drawstring1(115, 350, 0.0, "by: Humayoun Kobir , Sanjana, Abul Hasnat");
    glColor3f(0.0, 0.0, 0.0);
    drawstring1(20, 320, 0.0, "students name  ID");
    glColor3f(0.7, 0.0, 0.5);
    drawstring2(20, 265, 0.0, "Humayoun , 2020000000137");
    drawstring2(20, 290, 0.0, "Sanjana , 2020000000146");
    drawstring2(20, 305, 0.0, "Kallol , 2020000000034");
    drawstring2(20, 250, 0.0, "Sarmin , 2020000000123");
    glColor3f(1.0, 1.0, 1.0);
    drawstring1(10, 230, 0.0, "Under the Guidance of  Mahesh N");
    glColor3f(0.0, 1.0, 0.0);
    drawstring2(20, 200, 0.0, "Md. Rakibul Islam ");
    glColor3f(0.0, 0.0, 0.0);
    drawstring1(20, 90, 0.0, "Year:-2023");
    glColor3f(1.0, 0.0, 0.0);
    drawstring1(300, 90, 0.0, "For Next press: 2");
    glFlush();
}
void color()
{
    glColor3f(0.0, 0.0, 1.0);
    if (color1 == 1)
    {
        glColor3f(0.7, 0.2, 0.5);
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    if (flaga == 0) {
        welcome();
    } else {
        if (flagd == 0) {
            frontscreen();
        } else {
            glClearColor(0.0, 0.6, 0.0, 1.0);
            glColor3f(0.658824, 0.658824, 0.658824);
            glBegin(GL_POLYGON);
            glVertex2f(100, 500);
            glVertex2f(400, 500);
            glVertex2f(400, 0);
            glVertex2f(100, 0);
            glEnd();

            // Draw red bars
            glColor3f(1.0, 0.0, 0.0);
            glBegin(GL_POLYGON);
            glVertex2f(100, 365);
            glVertex2f(110, 365);
            glVertex2f(110, 330);
            glVertex2f(100, 330);
            glEnd();

            glBegin(GL_POLYGON);
            glVertex2f(390, 365);
            glVertex2f(400, 365);
            glVertex2f(400, 330);
            glVertex2f(390, 330);
            glEnd();

            glBegin(GL_POLYGON);
            glVertex2f(245, 365);
            glVertex2f(260, 365);
            glVertex2f(260, 330);
            glVertex2f(245, 330);
            glEnd();

            // Draw car bodies
            glColor3f(0.5, 0.5, 1.0);
            glBegin(GL_QUADS);
            glVertex2f(bx + 290, by1);
            glVertex2f(bx + 340, by2);
            glVertex2f(bx + 340, by3);
            glVertex2f(bx + 290, by4);
            glEnd();

            glBegin(GL_QUADS);
            glVertex2f(bx + 280, by5);
            glVertex2f(bx + 350, by6);
            glVertex2f(bx + 350, by7);
            glVertex2f(bx + 280, by8);
            glEnd();

            glBegin(GL_QUADS);
            glVertex2f(bx + 290, by9);
            glVertex2f(bx + 340, by10);
            glVertex2f(bx + 340, by11);
            glVertex2f(bx + 290, by12);
            glEnd();

            // Draw car wheels
            glBegin(GL_QUADS);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(bx + 285, by13);  // Right car top left wheel
            glVertex2f(bx + 290, by14);  // Right wheel
            glVertex2f(bx + 290, by15);
            glVertex2f(bx + 285, by16);
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(bx + 340, by17);  // Right car top right wheel
            glVertex2f(bx + 345, by18);
            glVertex2f(bx + 345, by19);
            glVertex2f(bx + 340, by20);
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(bx + 285, by21);  // Right car bottom left wheel
            glVertex2f(bx + 290, by22);
            glVertex2f(bx + 290, by23);
            glVertex2f(bx + 285, by24);
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(bx + 340, by25);  // Right car bottom right wheel
            glVertex2f(bx + 345, by26);
            glVertex2f(bx + 345, by27);
            glVertex2f(bx + 340, by28);
            glEnd();

            // Display car names
            glColor3f(1.0, 1.0, 1.0);
            drawstring1(bx + 300, zy2, 0, "NANO");

            // Draw left car
            glColor3f(1.0, 1.0, 1.0);
            glBegin(GL_QUADS);
            glVertex2f(ax + 140, ay1);
            glVertex2f(ax + 190, ay2);
            glVertex2f(ax + 190, ay3);
            glVertex2f(ax + 140, ay4);
            glEnd();

            glBegin(GL_QUADS);
            glVertex2f(ax + 130, ay5);
            glVertex2f(ax + 200, ay6);
            glVertex2f(ax + 200, ay7);
            glVertex2f(ax + 130, ay8);
            glEnd();

            glBegin(GL_QUADS);
            glVertex2f(ax + 140, ay9);
            glVertex2f(ax + 190, ay10);
            glVertex2f(ax + 190, ay11);
            glVertex2f(ax + 140, ay12);
            glEnd();

            // Display left car name
            glColor3f(1.0, 0.0, 1.0);
            drawstring1(ax + 155, zy1, 0, "BMW");

            // Draw left car wheels
            glBegin(GL_QUADS);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(ax + 135, ay13);  // Left car bottom left wheel
            glVertex2f(ax + 140, ay14);  // Left wheel
            glVertex2f(ax + 140, ay15);
            glVertex2f(ax + 135, ay16);
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(ax + 190, ay17);  // Left car bottom right wheel
            glVertex2f(ax + 195, ay18);
            glVertex2f(ax + 195, ay19);
            glVertex2f(ax + 190, ay20);
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(ax + 135, ay21);  // Left car top left wheel
            glVertex2f(ax + 140, ay22);
            glVertex2f(ax + 140, ay23);
            glVertex2f(ax + 135, ay24);
            glEnd();

            glBegin(GL_QUADS);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(ax + 190, ay25);  // Left car top right wheel
            glVertex2f(ax + 195, ay26);
            glVertex2f(ax + 195, ay27);
            glVertex2f(ax + 190, ay28);
            glEnd();

            // Display instructions for car nano
            glColor3f(0.0, 0.0, 0.0);
            drawstring1(ax + 0, 60, 0, "Car BMW");
            drawstring1(ax + 0, 50, 0, "instructions:");
            drawstring1(ax + 0, 40, 0, "l:open barrier");
            drawstring1(ax + 0, 30, 0, "z:speed up");
            drawstring1(ax + 0, 20, 0, "x:speed down");

            // Display instructions for left car
            glColor3f(0.0, 0.0, 0.0);
            drawstring1(ax + 390, 60, 0, "Car nano");
            drawstring1(ax + 390, 50, 0, "instructions:");
            drawstring1(ax + 390, 40, 0, "r:open barrier");
            drawstring1(ax + 390, 30, 0, "n:speed up");
            drawstring1(ax + 390, 20, 0, "m:speed down");

            // Draw barrier 1
            if (flagl == 0 || flag2 == 0) {
                glColor3f(0.0, 0.0, 0.0);
                glBegin(GL_POLYGON);
                glVertex2f(260, 355);
                glVertex2f(390, 355);
                glVertex2f(390, 345);
                glVertex2f(260, 345);
                glEnd();
                glPointSize(20.0);
                glColor3f(1.0, 0.0, 0.0);
                glBegin(GL_POINTS);
                glVertex2f(420, 345);
                glEnd();
                drawstring(437, 340, 0, "STOP");
            }

            // Draw barrier 2
            if (flagr == 0 || flag3 == 0) {
                glColor3f(0.0, 0.0, 0.0);
                glBegin(GL_POLYGON);
                glVertex2f(110, 355);
                glVertex2f(245, 355);
                glVertex2f(245, 345);
                glVertex2f(110, 345);
                glEnd();
                glPointSize(20.0);
                glColor3f(1.0, 0.0, 0.0);
                glBegin(GL_POINTS);
                glVertex2f(80, 345);
                glEnd();
                drawstring(8, 330, 0, "STOP");
            } else {
                glPointSize(20.0);
                glColor3f(0.0, 1.5, 0.0);
                glBegin(GL_POINTS);
                glVertex2f(80, 345);
                glEnd();
                drawstring(10, 330, 0, "GO");
            }
        }
    }

    glFlush();
}
