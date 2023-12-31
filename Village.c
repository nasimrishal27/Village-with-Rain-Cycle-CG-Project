#include<stdio.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void Vapor();
void bg();
void road();
void display1();
void display2();
void display3();
void display4();
void display5();
void home();
void home2();
void home3();
void draw_pixel(GLint cx, GLint cy);
void plotpixels(GLint h, GLint k, GLint x, GLint y);
void draw_circle(GLint h, GLint k, GLint r);
void stars();
void drawCircle(float cx, float cy, float radius, int num_segments);
void renderText(float x, float y, const char* text);
void hill();
void rain();


struct timespec jmp, jmp2;
GLint a=0,b=0,c=0,d=0,e=0,f=0,g=500,h=600,x=0,i=0,j=0;
GLfloat theta=0.0;
float dop=1;
int l,v=1;
void update(int value)
{
	a+=20.0;
	glutPostRedisplay();
	glutTimerFunc(200,update,0);
}
void draw_pixel(GLint cx, GLint cy)
{

    glBegin(GL_POINTS);
    glVertex2i(cx, cy);
    glEnd();
}

void plotpixels(GLint h, GLint k, GLint x, GLint y)
{
    draw_pixel(x + h, y + k);
    draw_pixel(-x + h, y + k);
    draw_pixel(x + h, -y + k);
    draw_pixel(-x + h, -y + k);
    draw_pixel(y + h, x + k);
    draw_pixel(-y + h, x + k);
    draw_pixel(y + h, -x + k);
    draw_pixel(-y + h, -x + k);
}

void draw_circle(GLint h, GLint k, GLint r)
{
    GLint d = 1 - r, x = 0, y = r;
    while (y > x)
    {
        plotpixels(h, k, x, y);
        if (d < 0)
            d += 2 * x + 3;
        else
        {
            d += 2 * (x - y) + 5;
            --y;
        }
        ++x;
    }
    plotpixels(h, k, x, y);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	display1();

	if(a>400)

	{
        c+=20;
		b+=20;
		display2();
        if (b>=550&&c<2100)
        {
            b=0;
        }
        if(c>=2100)
        {
            v=0;
        }
        
	}
	
	if(c>=2100)
	{
        j-=10;
		d+=10;
		display3();

	}
	glFlush();
	glutSwapBuffers();
}
void renderText(float x, float y, const char* text) {
    glRasterPos2f(x, y);

    for (int i = 0; text[i] != '\0'; ++i) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
}
void Vapor()
{
    
    glColor4f(0.6f, 0.8f, 1.0f, 0.5f);
    // Draw a horizontal curve
glLineWidth(2);
glBegin(GL_LINE_STRIP);
for (float y = 0; y <= 100; y += 10) {
    float x = 5 * sin((y / 15) ); // Adjust the curve's amplitude and frequency
    glVertex2f(x + 15, y); // Shift the curve horizontally by 30 units
}
glEnd();

    glPushMatrix();
    glTranslated(5,0,0);
    glBegin(GL_LINE_STRIP);
for (float y = 0; y <= 100; y += 10) {
    float x = 5 * sin((y / 15) ); // Adjust the curve's amplitude and frequency
    glVertex2f(x + 15, y); // Shift the curve horizontally by 30 units
}
glEnd();
glPopMatrix();

glPushMatrix();
    glTranslated(15,0,0);
    glBegin(GL_LINE_STRIP);
for (float y = 0; y <= 100; y += 10) {
    float x = 5 * sin((y / 15) ); // Adjust the curve's amplitude and frequency
    glVertex2f(x + 15, y); // Shift the curve horizontally by 30 units
}
glEnd();
glPopMatrix();

glPushMatrix();
    glTranslated(20,0,0);
    glBegin(GL_LINE_STRIP);
for (float y = 0; y <= 100; y += 10) {
    float x = 5 * sin((y / 15) ); // Adjust the curve's amplitude and frequency
    glVertex2f(x + 15, y); // Shift the curve horizontally by 30 units
}
glEnd();
glPopMatrix();

glPushMatrix();
    glTranslated(30,0,0);
    glBegin(GL_LINE_STRIP);
for (float y = 0; y <= 100; y += 10) {
    float x = 5 * sin((y / 15) ); // Adjust the curve's amplitude and frequency
    glVertex2f(x + 15, y); // Shift the curve horizontally by 30 units
}
glEnd();
glPopMatrix();

glPushMatrix();
    glTranslated(35,0,0);
    glBegin(GL_LINE_STRIP);
for (float y = 0; y <= 100; y += 10) {
    float x = 5 * sin((y / 15) ); // Adjust the curve's amplitude and frequency
    glVertex2f(x + 15, y); // Shift the curve horizontally by 30 units
}
glEnd();
glPopMatrix();

glPushMatrix();
    glTranslated(45,0,0);
    glBegin(GL_LINE_STRIP);
for (float y = 0; y <= 100; y += 10) {
    float x = 5 * sin((y / 15) ); // Adjust the curve's amplitude and frequency
    glVertex2f(x + 15, y); // Shift the curve horizontally by 30 units
}
glEnd();
glPopMatrix();

glPushMatrix();
    glTranslated(50,0,0);
    glBegin(GL_LINE_STRIP);
for (float y = 0; y <= 100; y += 10) {
    float x = 5 * sin((y / 15) ); // Adjust the curve's amplitude and frequency
    glVertex2f(x + 15, y); // Shift the curve horizontally by 30 units
}
glEnd();
glPopMatrix();

glPushMatrix();
    glTranslated(60,0,0);
    glBegin(GL_LINE_STRIP);
for (float y = 0; y <= 100; y += 10) {
    float x = 5 * sin((y / 15) ); // Adjust the curve's amplitude and frequency
    glVertex2f(x + 15, y); // Shift the curve horizontally by 30 units
}
glEnd();
glPopMatrix();

glPushMatrix();
    glTranslated(65,0,0);
    glBegin(GL_LINE_STRIP);
for (float y = 0; y <= 100; y += 10) {
    float x = 5 * sin((y / 15) ); // Adjust the curve's amplitude and frequency
    glVertex2f(x + 15, y); // Shift the curve horizontally by 30 units
}
glEnd();
glPopMatrix();

glPushMatrix();
    glTranslated(75,0,0);
    glBegin(GL_LINE_STRIP);
for (float y = 0; y <= 100; y += 10) {
    float x = 5 * sin((y / 15) ); // Adjust the curve's amplitude and frequency
    glVertex2f(x + 15, y); // Shift the curve horizontally by 30 units
}
glEnd();
glPopMatrix();

glPushMatrix();
    glTranslated(80,0,0);
    glBegin(GL_LINE_STRIP);
for (float y = 0; y <= 100; y += 10) {
    float x = 5 * sin((y / 15) ); // Adjust the curve's amplitude and frequency
    glVertex2f(x + 15, y); // Shift the curve horizontally by 30 units
}
glEnd();
glPopMatrix();

    

    renderText(-15, -18, "Water Vapour");
    
    glDisable(GL_BLEND);
}
void cloud()
{
    glColor4f(0.7, 0.7, 0.8, 0.8);
    drawCircle(860.0f, 725.0f, 25.0f, 100);
    drawCircle(900.0f, 725.0f, 35.0f, 100);
    drawCircle(925.0f, 725.0f, 35.0f, 100);
    drawCircle(965.0f, 725.0f, 25.0f, 100);
    
}
void light()
{
    glLineWidth(3.0);
    glColor3f(1.0, 1.0, 1.0); // Set color to red (you can change the color as desired)
    glBegin(GL_LINE_STRIP);
    float x = 300.0; // X-coordinate of the zigzag line
    float y = 100.0; // Starting Y-coordinate of the zigzag line
    float gap = 1.0; // Gap between each segment of the zigzag line

    // Draw zigzag line segments
    for (int i = 0; i < 14; i++) {
        if (i % 2 == 0) {
            glVertex2f(x, y);
            y += gap;
            glVertex2f(x + 0.5, y);
        }
        else {
            glVertex2f(x + 0.5, y);
            y += gap;
            glVertex2f(x, y);
        }
    }
    glEnd();
}
void clouds()
{
    glColor4f(0.7, 0.7, 0.8, 0.8);
    if(j>=-100)
    {
    glPushMatrix();
    glTranslatef(j, 05, 0);
    drawCircle(860.0f, 725.0f, 25.0f, 100);
    drawCircle(900.0f, 725.0f, 35.0f, 100);
    drawCircle(925.0f, 725.0f, 35.0f, 100);
    drawCircle(965.0f, 725.0f, 25.0f, 100);
    glPopMatrix();

    drawCircle(660.0f, 725.0f, 25.0f, 100);
    drawCircle(700.0f, 725.0f, 35.0f, 100);
    drawCircle(725.0f, 725.0f, 35.0f, 100);
    drawCircle(765.0f, 725.0f, 25.0f, 100);

    drawCircle(460.0f, 725.0f, 25.0f, 100);
    drawCircle(500.0f, 725.0f, 35.0f, 100);
    drawCircle(525.0f, 725.0f, 35.0f, 100);
    drawCircle(565.0f, 725.0f, 25.0f, 100);
    }
    else
    {
        glPushMatrix();
    glTranslatef(30, 01, 0);
        drawCircle(640.0f, 725.0f, 40.0f, 100);
    drawCircle(690.0f, 725.0f, 50.0f, 100);
    drawCircle(735.0f, 725.0f, 50.0f, 100);
    drawCircle(775.0f, 725.0f, 40.0f, 100);
    glPopMatrix();

    drawCircle(440.0f, 725.0f, 40.0f, 100);
    drawCircle(490.0f, 725.0f, 50.0f, 100);
    drawCircle(535.0f, 725.0f, 50.0f, 100);
    drawCircle(575.0f, 725.0f, 40.0f, 100);
    }
    
    if(d<=100)
    {

    drawCircle(260.0f, 725.0f, 25.0f, 100);
    drawCircle(300.0f, 725.0f, 35.0f, 100);
    drawCircle(325.0f, 725.0f, 35.0f, 100);
    drawCircle(365.0f, 725.0f, 25.0f, 100);

    
    glPushMatrix();
    glTranslatef(d, 01, 0);
    glColor4f(0.7, 0.7, 0.8, 0.8);
    drawCircle(60.0f, 725.0f, 25.0f, 100);
    drawCircle(100.0f, 725.0f, 35.0f, 100);
    drawCircle(125.0f, 725.0f, 35.0f, 100);
    drawCircle(165.0f, 725.0f, 25.0f, 100);
    glPopMatrix();
    }
    if (d>100)
    {
        glPushMatrix();
        glTranslatef(-50, 01, 0);
        drawCircle(230.0f, 725.0f, 40.0f, 100);
    drawCircle(270.0f, 725.0f, 50.0f, 100);
    drawCircle(315.0f, 725.0f, 50.0f, 100);
    drawCircle(365.0f, 725.0f, 40.0f, 100);
    glPopMatrix();

    drawCircle(30.0f, 725.0f, 50.0f, 100);
    drawCircle(85.0f, 725.0f, 40.0f, 100);

    drawCircle(925.0f, 725.0f, 35.0f, 100);
    drawCircle(965.0f, 725.0f, 50.0f, 100);
    }
    
}
void display1()
{
	
    hill();
    bg();
    road();
    glPushMatrix();
    glScaled(0.5,0.5,0);
    glTranslated(-30,-20,0);
    home();
    glPopMatrix();
    glPushMatrix();
	glTranslated(210,210,0);
	home3();
	glPopMatrix();

	glPushMatrix();
	glTranslated(170,270,0);
	home3();
	glPopMatrix();

    glPushMatrix();
    glScaled(0.25,0.25,0);
    glTranslated(1600,650,0);
    home();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.20,0.20,0);
    glTranslated(2900,1380,0);
    home2();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.35,0.35,0);
    glTranslated(1600,10,0);
    home2();
    glPopMatrix();
    glColor4f(1.0, 1.0, 0.0, 0.8);
    drawCircle(500.0f, 725.0f, 40.0f, 100);
    
}

void display2()
{
    
    hill();
    bg();
    road();
    glPushMatrix();
    glScaled(0.5,0.5,0);
    glTranslated(-30,-20,0);
    home();
    glPopMatrix();
    glPushMatrix();
	glTranslated(210,210,0);
	home3();
	glPopMatrix();

	glPushMatrix();
	glTranslated(170,270,0);
	home3();
	glPopMatrix();

    glPushMatrix();
    glScaled(0.25,0.25,0);
    glTranslated(1600,650,0);
    home();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.20,0.20,0);
    glTranslated(2900,1380,0);
    home2();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.35,0.35,0);
    glTranslated(1600,10,0);
    home2();
    glPopMatrix();
    glPushMatrix();
	glTranslated(850,b,0.0);
	Vapor();
	glPopMatrix();
    if(c>=550)
        cloud();

}
float ca=0;
void display3()
{
    ca+=5;
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    bg();
    road();
    glPushMatrix();
    glScaled(0.5,0.5,0);
    glTranslated(-30,-20,0);
    home();
    glPopMatrix();
    glPushMatrix();
	glTranslated(210,210,0);
	home3();
	glPopMatrix();

	glPushMatrix();
	glTranslated(170,270,0);
	home3();
	glPopMatrix();

    glPushMatrix();
    glScaled(0.25,0.25,0);
    glTranslated(1600,650,0);
    home();
    glPopMatrix();


    glPushMatrix();
    glScaled(0.20,0.20,0);
    glTranslated(2900,1380,0);
    home2();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.35,0.35,0);
    glTranslated(1600,10,0);
    home2();
    glPopMatrix();

    stars();
	clouds();
    if(d>=200)
        rain();

    if (d>=190&&d<=200)
    {
        light();
    }
    
	
    
}
void road()
{
	glColor3f(0.1,0.1,0.1); //road
glBegin(GL_POLYGON);
glVertex2f(500,0);
glVertex2f(600,0);
glVertex2f(350,380);
glVertex2f(300,380);
glEnd();

	glColor3f(1,1,1); // h-line
	glLineWidth(6);
	
	glBegin(GL_LINES);
	glVertex2f(550,10);
	glVertex2f(490,110);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(450,180);
	glVertex2f(385,280);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(325,380);
	glVertex2f(360,320);
	glEnd();

}
void home()
{
    // chim

    glColor3f(0.35, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2f(340, 330);
    glVertex2f(340, 430);
    glVertex2f(760, 430);
    glVertex2f(760, 330);

    glEnd();
    // home

    glColor3f(1.0f, 0.8f, 0.8f);


    glBegin(GL_POLYGON);

    glVertex2f(350, 100);
    glVertex2f(350, 330);
    glVertex2f(750, 330);
    glVertex2f(750, 100);
    glVertex2f(650, 100);
    glVertex2f(650, 250);
    glVertex2f(450, 250);
    glVertex2f(450, 100);

    glEnd();

    // window border

    glColor3f(0.35, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2f(395, 205);
    glVertex2f(395, 285);
    glVertex2f(475, 285);
    glVertex2f(475, 205);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(625, 205);
    glVertex2f(625, 285);
    glVertex2f(705, 285);
    glVertex2f(705, 205);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(645, 205);
    glVertex2f(645, 285);
    glVertex2f(650, 285);
    glVertex2f(650, 205);

    glEnd();

    // door
    glColor3f(1.0f, 1.0f, 0.65f);
    glBegin(GL_POLYGON);

    glVertex2f(600, 100);
    glVertex2f(600, 220);
    glVertex2f(500, 220);
    glVertex2f(500, 100);

    glEnd();

    glColor3f(0.35, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2f(560, 120);
    glVertex2f(560, 200);
    glVertex2f(500, 220);
    glVertex2f(500, 100);

    glEnd();

    // window
    glColor3f(1.0f, 1.0f, 0.65f);
    glBegin(GL_POLYGON);

    glVertex2f(400, 210);
    glVertex2f(400, 280);
    glVertex2f(470, 280);
    glVertex2f(470, 210);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(630, 210);
    glVertex2f(630, 280);
    glVertex2f(700, 280);
    glVertex2f(700, 210);

    glEnd();

    glColor3f(0.35, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2f(420, 210);
    glVertex2f(420, 280);
    glVertex2f(425, 280);
    glVertex2f(425, 210);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(450, 210);
    glVertex2f(450, 280);
    glVertex2f(455, 280);
    glVertex2f(455, 210);

    glEnd();

    glColor3f(0.35, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2f(650, 205);
    glVertex2f(650, 285);
    glVertex2f(655, 285);
    glVertex2f(655, 205);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(680, 205);
    glVertex2f(680, 285);
    glVertex2f(685, 285);
    glVertex2f(685, 205);
    glEnd();
}

void home2()

{

glColor3f(0.3, 0.5, 0.8);

glBegin(GL_POLYGON);
glVertex2i(200, 500);
glVertex2i(600, 500);
glVertex2i(700, 350);
glVertex2i(300, 350);
glEnd();

// Top of Front Wall

glColor3f(0.1, 0.5, 0.0);
glBegin(GL_TRIANGLES);
glVertex2i(200, 500);
glVertex2i(100, 350);
glVertex2i(300, 350);
glEnd();

// Front Wall

glColor3f(0.7, 0.2, 0.3);

glBegin(GL_POLYGON);
glVertex2i(100, 350);
glVertex2i(300, 350);
glVertex2i(300, 100);
glVertex2i(100, 100);
glEnd();

// Front Door

glColor3f(0.7, 0.2, 0.9);

glBegin(GL_POLYGON);
glVertex2i(150, 250);
glVertex2i(250, 250);
glVertex2i(250, 100);
glVertex2i(150, 100);
glEnd();


// Front Door Lock

glColor3f(0.3, 0.7, 0.9);
glPointSize(15);
glBegin(GL_POINTS);
glVertex2i(170, 170);
glEnd();


//side Wall

glColor3f(0.1, 0.2, 0.3);

glBegin(GL_POLYGON);
glVertex2i(300, 350);
glVertex2i(700, 350);
glVertex2i(700, 100);
glVertex2i(300, 100);
glEnd();

// window one

glColor3f(0.2, 0.4, 0.3);

glBegin(GL_POLYGON);
glVertex2i(330, 320);
glVertex2i(450, 320);
glVertex2i(450, 230);
glVertex2i(330, 230);
glEnd();

// line of window one

glColor3f(0.1, 0.7, 0.5);

glLineWidth(5);

glBegin(GL_LINES);
glVertex2i(390, 320);
glVertex2i(390, 230);
glVertex2i(330, 273);
glVertex2i(450, 273);
glEnd();

// window two

glColor3f(0.2, 0.4, 0.3);
glBegin(GL_POLYGON);
glVertex2i(530, 320);
glVertex2i(650, 320);
glVertex2i(650, 230);
glVertex2i(530, 230);
glEnd();

// lines of window two

glColor3f(0.1, 0.7, 0.5);
glLineWidth(5);
glBegin(GL_LINES);
glVertex2i(590, 320);
glVertex2i(590, 230);
glVertex2i(530, 273);
glVertex2i(650, 273);
glEnd();
glFlush();
}

void home3()
{
	///House_Roof
	glBegin(GL_POLYGON);
    glColor3f(.990, 0.0, 0.0);
	glVertex2i(285, 105);
	glVertex2i(285, 130);
	glVertex2i(380, 115);
	glVertex2i(380, 105);
	glEnd();

    ///House_Roof_Shadow
	glBegin(GL_POLYGON);
    glColor3f(.890, 0.0, 0.0);
	glVertex2i(285, 105);
	glVertex2i(285, 120);
	glVertex2i(380, 105);
	glVertex2i(380, 105);
	glEnd();

    ///House_Fence
	glBegin(GL_POLYGON);
    glColor3f(.555, 1.0, 1.0);
	glVertex2i(290, 70);
	glVertex2i(290, 104);
	glVertex2i(375, 104);
	glVertex2i(375, 70);
	glEnd();

    ///House_Fence_Shadow
	glBegin(GL_POLYGON);
    glColor3f(.555, 0.924, 0.930);
	glVertex2i(310, 70);
	glVertex2i(350, 104);
	glVertex2i(375, 104);
	glVertex2i(375, 70);
	glEnd();

    ///House_Door
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
	glVertex2i(330, 70);
	glVertex2i(330, 100);
	glVertex2i(350, 100);
	glVertex2i(350, 70);
	glEnd();

    ///House_Window1
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(295, 75);
	glVertex2i(295, 90);glColor3f(0.61, 0.52, 0.41);
	glVertex2i(310, 90);
	glVertex2i(310, 75);
	glEnd();

    ///House_Window2
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(312, 75);
	glVertex2i(312, 90);
	glVertex2i(327, 90);
	glVertex2i(327, 75);

	glEnd();

    ///House_Window3
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(355, 75);
	glVertex2i(355, 90);
	glVertex2i(370, 90);
	glVertex2i(370, 75);

	glEnd();

    ///House_Small_Roof
	glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
	glVertex2i(250, 90);
	glVertex2i(257, 104);
	glVertex2i(290, 104);
	glVertex2i(290, 90);

	glEnd();

    ///House_Small_Fence
	glBegin(GL_POLYGON);
    glColor3f(.555, .724, .930);
	glVertex2i(255, 70);
	glVertex2i(255, 90);
	glVertex2i(290, 90);
	glVertex2i(290, 70);

	glEnd();

    ///House_Small_Door
	glBegin(GL_POLYGON);
    glColor3f(0.11, 0.23, 0.36);
	glVertex2i(260, 70);
	glVertex2i(260, 80);
	glVertex2i(285, 80);
	glVertex2i(285, 70);

	glEnd();
}

void bg()
{
    

    // grass
        glColor3f(0.6, 0.8, 0.196078);
        glBegin(GL_POLYGON);
        glVertex2f(0, 160);
        glVertex2f(0, 380);
        glVertex2f(1100, 380);
        glVertex2f(1100, 160);
        glEnd();
    
    // Ground
    glColor3f(0.0, 0.3, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-600, 0);
    glVertex2f(-600, 185);
    glVertex2f(1100, 185);
    glVertex2f(1100, 0);
    glEnd();

    // river
    glColor3f(0.196078,0.6,0.8);

    glBegin(GL_POLYGON);
		glVertex2f(768,380);
		glVertex2f(830,290);
		glVertex2f(820,260);
	glEnd();

    glBegin(GL_POLYGON);
		glVertex2f(900,185);
		glVertex2f(820,260);
		glVertex2f(830,290);
        glVertex2f(950,185);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(900,185);
		glVertex2f(950,185);
		glVertex2f(1000,0);
        glVertex2f(800,0);
	glEnd();

    // tree
    glColor3f(0.9, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(280, 185);
    glVertex2f(280, 255);
    glVertex2f(295, 255);
    glVertex2f(295, 185);
    glEnd();

    for (l = 0; l <= 30; l++)
    {
        glColor3f(0.0, 0.5, 0.0);
        draw_circle(270, 250, l);
        draw_circle(310, 250, l);
    }

    for (l = 0; l <= 25; l++)
    {
        glColor3f(0.0, 0.5, 0.0);
        draw_circle(280, 290, l);
        draw_circle(300, 290, l);
    }

    for (l = 0; l <= 20; l++)
    {
        glColor3f(0.0, 0.5, 0.0);
        draw_circle(290, 315, l);
    }

    // tree 1
    glColor3f(0.9, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(100, 135);
    glVertex2f(100, 285);
    glVertex2f(140, 285);
    glVertex2f(140, 135);
    glEnd();

    for (l = 0; l <= 40; l++)
    {
        glColor3f(0.0, 0.5, 0.0);
        draw_circle(40, 280, l);
        draw_circle(90, 280, l);
        draw_circle(150, 280, l);
        draw_circle(210, 280, l);
        draw_circle(65, 340, l);
        draw_circle(115, 340, l);
        draw_circle(175, 340, l);
    }
    for (l = 0; l <= 55; l++)
    {
        glColor3f(0.0, 0.5, 0.0);
        draw_circle(115, 360, l);
    }
}
void rain()
{
    // glClear(GL_COLOR_BUFFER_BIT);
    glColor4f(0.5f, 0.5f, 1.0f, 0.5f);
    glLineWidth(1.0f); // Set line width to 1 pixel
    glBegin(GL_LINES); // Begin drawing lines

    // Draw multiple raindrop lines
    for (int i = 0; i < 500; i++) {
        int x1 = rand() % 1000; // Random x-coordinate for the starting point of the line
        int y1 = rand() % 700; // Random y-coordinate for the starting point of the line

        int x2 = x1; // Use the same x-coordinate for the ending point of the line
        int y2 = y1 + 10; // Set the y-coordinate of the ending point slightly below the starting point

        // Draw a raindrop line
        glVertex2i(x1, y1);
        glVertex2i(x2, y2);
    }
    glEnd(); // End drawing lines
    glFlush(); // Flush OpenGL commands
}





void stars()
{
    glColor3f(1.0f, 1.0f, 1.0f); // Set color to white
	glPointSize(2.0f); // Set point size for stars

	glBegin(GL_POINTS);
    glVertex2f(78.0f, 900.0f); 
	glVertex2f(50.0f, 850.0f);
    glVertex2f(230.0f, 700.0f); 
    glVertex2f(94.0f, 600.0f); 
	glVertex2f(50.0f, 450.0f);
    glVertex2f(230.0f, 500.0f); 
	glVertex2f(100.0f, 500.0f); 
	glVertex2f(200.0f, 450.0f);
    glVertex2f(300.0f, 500.0f); 
	glVertex2f(400.0f, 650.0f);
    glVertex2f(500.0f, 700.0f); 
	glVertex2f(600.0f, 450.0f);
    glVertex2f(700.0f, 800.0f); 
	glVertex2f(750.0f, 850.0f);
    glVertex2f(650.0f, 600.0f); 
	glVertex2f(550.0f, 650.0f);
    glVertex2f(150.0f, 700.0f); 
	glVertex2f(250.0f, 950.0f);
    glVertex2f(350.0f, 500.0f); 
	glVertex2f(450.0f, 850.0f);

    glVertex2f(1000.0f, 400.0f); 
	glVertex2f(900.0f, 750.0f);
    glVertex2f(800.0f, 600.0f); 
	glVertex2f(850.0f, 650.0f);
    glVertex2f(570.0f, 700.0f); 
	glVertex2f(880.0f, 450.0f);
    glVertex2f(990.0f, 800.0f); 
	glVertex2f(790.0f, 850.0f);
    glVertex2f(950.0f, 600.0f); 
	glVertex2f(1000.0f, 650.0f);
    glVertex2f(960.0f, 700.0f); 
	glVertex2f(900.0f, 950.0f);
    glVertex2f(940.0f, 500.0f); 
	glVertex2f(890.0f, 850.0f);

	glEnd();
}

void hill()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.4, 0.0);
    glVertex2f(0, 380);
    glVertex2f(128, 520);
    glVertex2f(256, 380);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.5, 0.0);
    glVertex2f(256, 380);
    glVertex2f(384, 520);
    glVertex2f(512, 380);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.5, 0.0);
    glVertex2f(512, 380);
    glVertex2f(640, 520);
    glVertex2f(768, 380);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.5, 0.0);
    glVertex2f(768, 380);
    glVertex2f(896, 520);
    glVertex2f(1024, 380);
    glEnd();
}

void drawCircle(float cx, float cy, float radius, int num_segments) {
    
	glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy); // Center of the circle
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * i / num_segments; // Angle in radians
        float x = radius * cosf(theta); // Calculate the x-coordinate
        float y = radius * sinf(theta); // Calculate the y-coordinate
        glVertex2f(cx + x, cy + y); // Define the vertex
    }
    glEnd();
}

void shouse()
{
	///House_Roof
	glBegin(GL_POLYGON);
    glColor3f(.990, 0.0, 0.0);
	glVertex2i(285, 105);
	glVertex2i(285, 130);
	glVertex2i(380, 115);
	glVertex2i(380, 105);
	glEnd();

    ///House_Roof_Shadow
	glBegin(GL_POLYGON);
    glColor3f(.890, 0.0, 0.0);
	glVertex2i(285, 105);
	glVertex2i(285, 120);
	glVertex2i(380, 105);
	glVertex2i(380, 105);
	glEnd();

    ///House_Fence
	glBegin(GL_POLYGON);
    glColor3f(.555, 1.0, 1.0);
	glVertex2i(290, 70);
	glVertex2i(290, 104);
	glVertex2i(375, 104);
	glVertex2i(375, 70);
	glEnd();

    ///House_Fence_Shadow
	glBegin(GL_POLYGON);
    glColor3f(.555, 0.924, 0.930);
	glVertex2i(310, 70);
	glVertex2i(350, 104);
	glVertex2i(375, 104);
	glVertex2i(375, 70);
	glEnd();

    ///House_Door
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
	glVertex2i(330, 70);
	glVertex2i(330, 100);
	glVertex2i(350, 100);
	glVertex2i(350, 70);
	glEnd();

    ///House_Window1
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(295, 75);
	glVertex2i(295, 90);glColor3f(0.61, 0.52, 0.41);
	glVertex2i(310, 90);
	glVertex2i(310, 75);
	glEnd();

    ///House_Window2
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(312, 75);
	glVertex2i(312, 90);
	glVertex2i(327, 90);
	glVertex2i(327, 75);

	glEnd();

    ///House_Window3
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(355, 75);
	glVertex2i(355, 90);
	glVertex2i(370, 90);
	glVertex2i(370, 75);

	glEnd();

    ///House_Small_Roof
	glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);
	glVertex2i(250, 90);
	glVertex2i(257, 104);
	glVertex2i(290, 104);
	glVertex2i(290, 90);

	glEnd();

    ///House_Small_Fence
	glBegin(GL_POLYGON);
    glColor3f(.555, .724, .930);
	glVertex2i(255, 70);
	glVertex2i(255, 90);
	glVertex2i(290, 90);
	glVertex2i(290, 70);

	glEnd();

    ///House_Small_Door
	glBegin(GL_POLYGON);
    glColor3f(0.11, 0.23, 0.36);
	glVertex2i(260, 70);
	glVertex2i(260, 80);
	glVertex2i(285, 80);
	glVertex2i(285, 70);

	glEnd();
}


void myinit()
{
	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glColor3f(1.0,0.0,0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,999.0,0.0,799.0);
}

int main(int argc, char* argv[])

{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1024.0,768.0);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Rain Cycle");
	glutDisplayFunc(display);
	myinit();
	glutTimerFunc(100,update,0);
	glutMainLoop();
	return 0;
}
