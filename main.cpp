#include<windows.h>
#include<MMSystem.h>
#include <stdio.h>
#include <iostream>
#include <GL/glut.h>
#include <GL/glu.h>
#include <math.h>


//spin fan variable
float angle=0.0;
int refresh=1;
void timer(int value){
    glutPostRedisplay();
    glutTimerFunc(refresh,timer,0);
}
int l;
int sx= 0;
int sy=0;
int mn=300;
int mm=0;
int cx=0;
int carx=0;
int y=650;  // ship1 coordinate
int x=1400;

int	yy=500; //ship2 coordinate

int shipStatus = 0;
int shipStatus1 = 0;

int meghStatus = 0;
int sunStatus =  0;


int lhy=80,lhx=1600;  // lighthouse coordinates

 float shipX = 0;
 float shipY = 0;


float shipX1 = 0;
float shipY1 = 0;

float sunX = 0;
float sunY = 0;

float meghX = 0;
float meghY = 0;



float skyR=0.4,skyG=0.5,skyB=1.0; //sky default color

float meghR=1.0,meghG=1.0,meghB=1.0;

float moonR=3.0,moonG=1.0,moonB=0.5;

float riverR=0.2,riverG=0.3,riverB=1.1;

float grassR=0.0,grassG=0.6,grassB=0.3;

float fieldgrassR=0.0,fieldgrassG=0.6,fieldgrassB=0.3;

float fieldgrassR1=0.7,fieldgrassG1=0.8,fieldgrassB1=0.2;

float treeR=0.0,treeG=0.6,treeB=0.1;


float build1R=0.4,build1G=0.4,build1B=0.2;
float build2R=0.5,build2G=0.4,build2B=0.2;
float build3R=0.5,build3G=0.3,build3B=0.2;
float build4R=0.4,build4G=0.5,build4B=0.3;




//float move, angle;

		void DrawCircle(float cx, float cy, float r, int num_segments){

		 glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < num_segments; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get the current angle

		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

		}
		glEnd();
	}
//car 1
void car(){
glPushMatrix();
glTranslatef(carx,0.0,0.0);
glColor3f(0.9,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2f(25,50);
glVertex2f(25,125);
glVertex2f(75,200);
glVertex2f(175,200);
glVertex2f(200,125);
glVertex2f(250,115);
glVertex2f(250,50);
glEnd();
glPopMatrix();


//windows
glPushMatrix();
glTranslatef(carx,0.0,0.0);
glColor3f(0.1,0.1,0.1);
glBegin(GL_POLYGON);
glVertex2f(35,125);
glVertex2f(80,190);
glVertex2f(115,190);
glVertex2f(115,125);
glEnd();
glPopMatrix();


glPushMatrix();
glTranslatef(carx,0.0,0.0);
glColor3f(0.1,0.1,0.1);
glBegin(GL_POLYGON);
glVertex2f(125,125);
glVertex2f(125,190);
glVertex2f(170,190);
glVertex2f(190,125);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(carx,0.0,0.0);
DrawCircle(75,50,30,1000);
DrawCircle(175,50,30,1000);
glPopMatrix();
}
//road
void road(){
glColor3f(0.2,0.2,0.2);
glBegin(GL_POLYGON);
glVertex2f(0,450);
glVertex2f(2000,450);
glVertex2f(2000,0);
glVertex2f(0,0);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(0,450);
glVertex2f(2000,450);
glVertex2f(2000,440);
glVertex2f(0,440);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(0,220);
glVertex2f(900,220);
glVertex2f(900,230);
glVertex2f(0,230);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);

glVertex2f(1000,220);
glVertex2f(2000,220);
glVertex2f(2000,230);
glVertex2f(1000,230);
glEnd();

}
void star()
{
    //star1
glPushMatrix();
glTranslatef(sx,sy,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(575,653);
glVertex2f(570,645);
glVertex2f(580,645);
glVertex2f(575,642);
glVertex2f(570,650);
glVertex2f(580,650);
glEnd();
glPopMatrix();
//star2
glPushMatrix();
glTranslatef(sx,sy,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(975,643);
glVertex2f(970,635);
glVertex2f(980,635);
glVertex2f(975,632);
glVertex2f(970,640);
glVertex2f(980,640);
glEnd();
glPopMatrix();

//star3
glPushMatrix();
glTranslatef(sx,sy,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(875,543);
glVertex2f(870,535);
glVertex2f(880,535);
glVertex2f(875,532);
glVertex2f(870,540);
glVertex2f(880,540);
glEnd();
glPopMatrix();

//star4
glPushMatrix();
glTranslatef(sx,sy,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(375,598);
glVertex2f(370,590);
glVertex2f(380,590);
glVertex2f(375,587);
glVertex2f(370,595);
glVertex2f(380,595);
glEnd();
glPopMatrix();

//star5
glPushMatrix();
glTranslatef(sx,sy,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(750,628);
glVertex2f(745,620);
glVertex2f(755,620);
glVertex2f(750,618);
glVertex2f(745,625);
glVertex2f(755,625);
glEnd();
glPopMatrix();

//star6
glPushMatrix();
glTranslatef(sx,sy,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(200,628);
glVertex2f(195,620);
glVertex2f(205,620);
glVertex2f(200,618);
glVertex2f(195,625);
glVertex2f(205,625);
glEnd();
glPopMatrix();

//star7
glPushMatrix();
glTranslatef(sx,sy,0.0);
glColor3f(1.0,1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex2f(500,543);
glVertex2f(495,535);
glVertex2f(505,535);
glVertex2f(500,532);
glVertex2f(495,540);
glVertex2f(505,540);
glEnd();
glPopMatrix();




glutPostRedisplay();
}
	void drawSun()
	{
	    glPushMatrix();
        glTranslatef(mm,mn,0.0);
		glColor3f(moonR, moonG,moonB);
		DrawCircle(800, 1000, 70, 1000);
        glPopMatrix();

    glutPostRedisplay();
	}




void town(){
int x=1200;
//river side

 glColor3f(build1R,build1G, build1B);      // buildins starting from left
	glBegin(GL_POLYGON);
		glVertex2f(0, 950);
		glVertex2f(100, 950);
		glVertex2f(100, 1250);
		glVertex2f(0,1250);
	glEnd();

 glColor3f(build2R, build2G, build2B);
	glBegin(GL_POLYGON);
		glVertex2f(100, 950);
		glVertex2f(200, 950);
		glVertex2f(200, 1200);
		glVertex2f(100,1150);
	glEnd();

	glColor3f(build3R, build3G, build3B);
	glBegin(GL_POLYGON);
		glVertex2f(200, 950);
		glVertex2f(300, 950);
		glVertex2f(300, 1150);
		glVertex2f(200,1150);
	glEnd();

	glColor3f(build4R, build4G, build4B);
	glBegin(GL_POLYGON);
		glVertex2f(300, 950);
		glVertex2f(400, 950);
		glVertex2f(400, 1250);
		glVertex2f(300,1250);
	glEnd();

	glColor3f(build1R, build1G, build1B);
	glBegin(GL_POLYGON);
		glVertex2f(400, 950);
		glVertex2f(550, 950);
		glVertex2f(550, 1250);
		glVertex2f(400,1150);
	glEnd();

	glColor3f(build2R, build2G, build2B);
	glBegin(GL_POLYGON);
		glVertex2f(550, 950);
		glVertex2f(700, 950);
		glVertex2f(700, 1200);
		glVertex2f(550,1200);
	glEnd();

	glColor3f(build3R, build3G, build3B);
	glBegin(GL_POLYGON);
		glVertex2f(700, 950);
		glVertex2f(800, 950);
		glVertex2f(800, 1150);
		glVertex2f(700,1200);
	glEnd();

	glColor3f(build4R, build4G, build4B);
	glBegin(GL_POLYGON);
		glVertex2f(800, 950);
		glVertex2f(950, 950);
		glVertex2f(950, 1250);
		glVertex2f(800,1250);
	glEnd();

	glColor3f(build1R, build1G, build1B);
	glBegin(GL_POLYGON);
		glVertex2f(950, 950);
		glVertex2f(1100, 950);
		glVertex2f(1100, 1200);
		glVertex2f(950,1200);
	glEnd();

glColor3f(build2R, build2G, build2B);
	glBegin(GL_POLYGON);
		glVertex2f(1100, 950);
		glVertex2f(1200, 950);
		glVertex2f(1200, 1250);
		glVertex2f(1100,1250);
	glEnd();

   glColor3f(build3R, build3G, build3B);
	glBegin(GL_POLYGON);
		glVertex2f(0+x, 950);
		glVertex2f(100+x, 950);
		glVertex2f(100+x, 1200);
		glVertex2f(0+x,1200);
	glEnd();

	glColor3f(build4R, build4G, build4B);
	glBegin(GL_POLYGON);
		glVertex2f(100+x, 950);
		glVertex2f(200+x, 950);
		glVertex2f(200+x, 1100);
		glVertex2f(100+x,1100);
	glEnd();

	glColor3f(build1R, build1G, build1G);
	glBegin(GL_POLYGON);
		glVertex2f(200+x, 950);
		glVertex2f(300+x, 950);
		glVertex2f(300+x, 1150);
		glVertex2f(200+x,1150);
	glEnd();

	glColor3f(build2R, build2G, build2B);
	glBegin(GL_POLYGON);
		glVertex2f(300+x, 950);
		glVertex2f(400+x, 950);
		glVertex2f(400+x, 1250);
		glVertex2f(300+x,1250);
	glEnd();

	glColor3f(build3R, build3G, build3B);
	glBegin(GL_POLYGON);
		glVertex2f(400+x, 950);
		glVertex2f(550+x, 950);
		glVertex2f(550+x, 1250);
		glVertex2f(400+x,1150);
	glEnd();

	glColor3f(build4R, build4G, build4B);
	glBegin(GL_POLYGON);
		glVertex2f(550+x, 950);
		glVertex2f(700+x, 950);
		glVertex2f(700+x, 1200);
		glVertex2f(550+x,1200);
	glEnd();

	glColor3f(0.5, 0.5, 0.2);
	glBegin(GL_POLYGON);
		glVertex2f(700+x, 950);
		glVertex2f(800+x, 950);
		glVertex2f(800+x, 1150);
		glVertex2f(700+x,1200);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(50, 990);
	glVertex2f(70, 990);
	glVertex2f(70, 1015);
	glVertex2f(50,1015);
	glEnd();
	//--------------------------------------------------------
	glColor3f(1.0,1.0,0.0);  //Windows 3
	glBegin(GL_POLYGON);
	glVertex2f(10, 1190);
	glVertex2f(30, 1190);
	glVertex2f(30, 1215);
	glVertex2f(10,1215);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(50, 1190);
	glVertex2f(70, 1190);
	glVertex2f(70, 1215);
	glVertex2f(50,1215);
	glEnd();
	//-----------------------------------------

	glColor3f(1.0,1.0,0.0);  //Windows 2
	glBegin(GL_POLYGON);
	glVertex2f(10, 1090);
	glVertex2f(30, 1090);
	glVertex2f(30, 1115);
	glVertex2f(10,1115);
	glEnd();

	glColor3f(1.0,1.0,1.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(50, 1090);
	glVertex2f(70, 1090);
	glVertex2f(70, 1115);
	glVertex2f(50,1115);
	glEnd();
	//-------------------------

	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(120, 990);
	glVertex2f(140, 990);
	glVertex2f(140, 1015);
	glVertex2f(120,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(150, 990);
	glVertex2f(170, 990);
	glVertex2f(170, 1015);
	glVertex2f(150,1015);
	glEnd();

	//----------------------

	glColor3f(0.0,0.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(120, 1090);
	glVertex2f(140, 1090);
	glVertex2f(140, 1115);
	glVertex2f(120,1115);
	glEnd();

	glColor3f(1.0,1.0,1.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(150, 1090);
	glVertex2f(170, 1090);
	glVertex2f(170, 1115);
	glVertex2f(150,1115);
	glEnd();
	//-----------------------------------

	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(210, 990);
	glVertex2f(230, 990);
	glVertex2f(230, 1015);
	glVertex2f(210,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(250, 990);
	glVertex2f(270, 990);
	glVertex2f(270, 1015);
	glVertex2f(250,1015);
	glEnd();

	//--------------------------------------------------
	glColor3f(0.0,0.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(210, 1090);
	glVertex2f(230, 1090);
	glVertex2f(230, 1115);
	glVertex2f(210,1115);
	glEnd();

	glColor3f(0.0,0.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(250, 1090);
	glVertex2f(270, 1090);
	glVertex2f(270, 1115);
	glVertex2f(250,1115);
	glEnd();



	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(320, 990);
	glVertex2f(340, 990);
	glVertex2f(340, 1015);
	glVertex2f(320,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(360, 990);
	glVertex2f(380, 990);
	glVertex2f(380, 1015);
	glVertex2f(360,1015);
	glEnd();

	//------------------------------------------------
	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(320, 1090);
	glVertex2f(340, 1090);
	glVertex2f(340, 1115);
	glVertex2f(320,1115);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(360, 1090);
	glVertex2f(380, 1090);
	glVertex2f(380, 1115);
	glVertex2f(360,1115);
	glEnd();


	//--------------------------------------------------------
	glColor3f(1.0,1.0,0.0);  //Windows 3
	glBegin(GL_POLYGON);
	glVertex2f(320, 1190);
	glVertex2f(340, 1190);
	glVertex2f(340, 1215);
	glVertex2f(320,1215);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(360, 1190);
	glVertex2f(380, 1190);
	glVertex2f(380, 1215);
	glVertex2f(360,1215);
	glEnd();


	//------------------------------------------------
	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(420, 1090);
	glVertex2f(440, 1090);
	glVertex2f(440, 1115);
	glVertex2f(420,1115);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(480, 1090);
	glVertex2f(500, 1090);
	glVertex2f(500, 1115);
	glVertex2f(480,1115);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(420, 990);
	glVertex2f(440, 990);
	glVertex2f(440, 1015);
	glVertex2f(420,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(480, 990);
	glVertex2f(500, 990);
	glVertex2f(500, 1015);
	glVertex2f(480,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(570, 990);
	glVertex2f(590, 990);
	glVertex2f(590, 1015);
	glVertex2f(570,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(610, 990);
	glVertex2f(630, 990);
	glVertex2f(630, 1015);
	glVertex2f(610,1015);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(570, 1090);
	glVertex2f(590, 1090);
	glVertex2f(590, 1115);
	glVertex2f(570,1115);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(610, 1090);
	glVertex2f(630, 1090);
	glVertex2f(630, 1115);
	glVertex2f(610,1115);
	glEnd();
	//-------------------------------------


	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(660, 1090);
	glVertex2f(680, 1090);
	glVertex2f(680, 1115);
	glVertex2f(660,1115);
	glEnd();


	glColor3f(0.0,0.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(720, 1090);
	glVertex2f(740, 1090);
	glVertex2f(740, 1115);
	glVertex2f(720,1115);
	glEnd();


	glColor3f(1.0,1.0,1.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(660, 990);
	glVertex2f(680, 990);
	glVertex2f(680, 1015);
	glVertex2f(660,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(720, 990);
	glVertex2f(740, 990);
	glVertex2f(740, 1015);
	glVertex2f(720,1015);
	glEnd();

	glColor3f(1.0,1.0,1.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(760, 990);
	glVertex2f(780, 990);
	glVertex2f(780, 1015);
	glVertex2f(760,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(820, 990);
	glVertex2f(840, 990);
	glVertex2f(840, 1015);
	glVertex2f(820,1015);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(760, 1090);
	glVertex2f(780, 1090);
	glVertex2f(780, 1115);
	glVertex2f(760,1115);
	glEnd();


	glColor3f(0.0,0.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(820, 1090);
	glVertex2f(840, 1090);
	glVertex2f(840, 1115);
	glVertex2f(820,1115);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 3
	glBegin(GL_POLYGON);
	glVertex2f(820, 1190);
	glVertex2f(840, 1190);
	glVertex2f(840, 1215);
	glVertex2f(820,1215);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(860, 1190);
	glVertex2f(880, 1190);
	glVertex2f(880, 1215);
	glVertex2f(860,1215);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(820, 990);
	glVertex2f(840, 990);
	glVertex2f(840, 1015);
	glVertex2f(820,1015);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(860, 1090);
	glVertex2f(880, 1090);
	glVertex2f(880, 1115);
	glVertex2f(860,1115);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(860, 990);
	glVertex2f(880, 990);
	glVertex2f(880, 1015);
	glVertex2f(860,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(820, 990);
	glVertex2f(840, 990);
	glVertex2f(840, 1015);
	glVertex2f(820,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 3
	glBegin(GL_POLYGON);
	glVertex2f(900, 1190);
	glVertex2f(920, 1190);
	glVertex2f(920, 1215);
	glVertex2f(900,1215);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(900, 1090);
	glVertex2f(920, 1090);
	glVertex2f(920, 1115);
	glVertex2f(900,1115);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(900, 990);
	glVertex2f(920, 990);
	glVertex2f(920, 1015);
	glVertex2f(900,1015);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(980, 990);
	glVertex2f(1000, 990);
	glVertex2f(1000, 1015);
	glVertex2f(980,1015);
	glEnd();

	glColor3f(1.0,1.0,1.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1020, 990);
	glVertex2f(1040, 990);
	glVertex2f(1040, 1015);
	glVertex2f(1020,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1020, 1090);
	glVertex2f(1040, 1090);
	glVertex2f(1040, 1115);
	glVertex2f(1020,1115);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(980, 1090);
	glVertex2f(1000, 1090);
	glVertex2f(1000, 1115);
	glVertex2f(980,1115);
	glEnd();

	//----------------------------------------

	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1120, 1090);
	glVertex2f(1140, 1090);
	glVertex2f(1140, 1115);
	glVertex2f(1120,1115);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1060, 1090);
	glVertex2f(1090, 1090);
	glVertex2f(1090, 1115);
	glVertex2f(1060,1115);
	glEnd();
	//-------------------------------------------------------------------long window
	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(1060, 990);
	glVertex2f(1090, 990);
	glVertex2f(1090, 1015);
	glVertex2f(1060,1015);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1060, 1090);
	glVertex2f(1080, 1090);
	glVertex2f(1080, 1115);
	glVertex2f(1060,1115);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1160, 1090);
	glVertex2f(1180, 1090);
	glVertex2f(1180, 1115);
	glVertex2f(1160,1115);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(1160, 990);
	glVertex2f(1180, 990);
	glVertex2f(1180, 1015);
	glVertex2f(1160,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1120, 990);
	glVertex2f(1140, 990);
	glVertex2f(1140, 1015);
	glVertex2f(1120,1015);
	glEnd();

	//--------------------------------------------------------
	glColor3f(1.0,1.0,0.0);  //Windows 3
	glBegin(GL_POLYGON);
	glVertex2f(1120, 1190);
	glVertex2f(1140, 1190);
	glVertex2f(1140, 1215);
	glVertex2f(1120,1215);
	glEnd();

	glColor3f(0.0,0.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1160, 1190);
	glVertex2f(1180, 1190);
	glVertex2f(1180, 1215);
	glVertex2f(1160,1215);
	glEnd();


	//------------------------------------------------


	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(1210, 990);
	glVertex2f(1230, 990);
	glVertex2f(1230, 1015);
	glVertex2f(1210,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1250, 990);
	glVertex2f(1270, 990);
	glVertex2f(1270, 1015);
	glVertex2f(1250,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1210, 1090);
	glVertex2f(1230, 1090);
	glVertex2f(1230, 1115);
	glVertex2f(1210,1115);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1250, 1090);
	glVertex2f(1270, 1090);
	glVertex2f(1270, 1115);
	glVertex2f(1250,1115);
	glEnd();

	//--------------------------------------------------

	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(1320, 990);
	glVertex2f(1340, 990);
	glVertex2f(1340, 1015);
	glVertex2f(1320,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1360, 990);
	glVertex2f(1380, 990);
	glVertex2f(1380, 1015);
	glVertex2f(1360,1015);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1360, 1070);
	glVertex2f(1380, 1070);
	glVertex2f(1380, 1095);
	glVertex2f(1360,1095);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1320, 1070);
	glVertex2f(1340, 1070);
	glVertex2f(1340, 1095);
	glVertex2f(1320,1095);
	glEnd();
	//-----------------------------------


	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(1420, 990);
	glVertex2f(1440, 990);
	glVertex2f(1440, 1015);
	glVertex2f(1420,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1460, 990);
	glVertex2f(1480, 990);
	glVertex2f(1480, 1015);
	glVertex2f(1460,1015);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1460, 1070);
	glVertex2f(1480, 1070);
	glVertex2f(1480, 1095);
	glVertex2f(1460,1095);
	glEnd();

	glColor3f(0.0,0.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1420, 1070);
	glVertex2f(1440, 1070);
	glVertex2f(1440, 1095);
	glVertex2f(1420,1095);
	glEnd();

	//-----------------------------------------------

	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(1520, 990);
	glVertex2f(1540, 990);
	glVertex2f(1540, 1015);
	glVertex2f(1520,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1560, 990);
	glVertex2f(1580, 990);
	glVertex2f(1580, 1015);
	glVertex2f(1560,1015);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1560, 1070);
	glVertex2f(1580, 1070);
	glVertex2f(1580, 1095);
	glVertex2f(1560,1095);
	glEnd();

	glColor3f(0.0,0.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1520, 1070);
	glVertex2f(1540, 1070);
	glVertex2f(1540, 1095);
	glVertex2f(1520,1095);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 3
	glBegin(GL_POLYGON);
	glVertex2f(1520, 1190);
	glVertex2f(1540, 1190);
	glVertex2f(1540, 1215);
	glVertex2f(1520,1215);
	glEnd();

	glColor3f(0.0,0.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1560, 1190);
	glVertex2f(1580, 1190);
	glVertex2f(1580, 1215);
	glVertex2f(1560,1215);
	glEnd();

	//-----------------------------------------------

	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(1620, 990);
	glVertex2f(1640, 990);
	glVertex2f(1640, 1015);
	glVertex2f(1620,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1660, 990);
	glVertex2f(1680, 990);
	glVertex2f(1680, 1015);
	glVertex2f(1660,1015);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1660, 1070);
	glVertex2f(1680, 1070);
	glVertex2f(1680, 1095);
	glVertex2f(1660,1095);
	glEnd();

	glColor3f(0.0,0.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1620, 1070);
	glVertex2f(1640, 1070);
	glVertex2f(1640, 1095);
	glVertex2f(1620,1095);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 3
	glBegin(GL_POLYGON);
	glVertex2f(1620, 1140);
	glVertex2f(1640, 1140);
	glVertex2f(1640, 1155);
	glVertex2f(1620,1155);
	glEnd();

	glColor3f(0.0,0.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1660, 1140);
	glVertex2f(1680, 1140);
	glVertex2f(1680, 1155);
	glVertex2f(1660,1155);
	glEnd();

	//------------------------------------------

	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(1710, 990);
	glVertex2f(1730, 990);
	glVertex2f(1730, 1015);
	glVertex2f(1710,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1760, 990);
	glVertex2f(1780, 990);
	glVertex2f(1780, 1015);
	glVertex2f(1760,1015);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1760, 1070);
	glVertex2f(1780, 1070);
	glVertex2f(1780, 1095);
	glVertex2f(1760,1095);
	glEnd();

	glColor3f(0.0,0.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1710, 1070);
	glVertex2f(1730, 1070);
	glVertex2f(1730, 1095);
	glVertex2f(1710,1095);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 3
	glBegin(GL_POLYGON);
	glVertex2f(1710, 1190);
	glVertex2f(1730, 1190);
	glVertex2f(1730, 1215);
	glVertex2f(1710,1215);
	glEnd();

	glColor3f(0.0,0.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1760, 1170);
	glVertex2f(1780, 1170);
	glVertex2f(1780, 1195);
	glVertex2f(1760,1195);
	glEnd();

	//----------------------------------------------------

	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(1810, 990);
	glVertex2f(1830, 990);
	glVertex2f(1830, 1015);
	glVertex2f(1810,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1860, 990);
	glVertex2f(1880, 990);
	glVertex2f(1880, 1015);
	glVertex2f(1860,1015);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1810, 1070);
	glVertex2f(1830, 1070);
	glVertex2f(1830, 1095);
	glVertex2f(1810,1095);
	glEnd();

	glColor3f(1.0,1.0,1.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1860, 1070);
	glVertex2f(1880, 1070);
	glVertex2f(1880, 1095);
	glVertex2f(1860,1095);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows 3
	glBegin(GL_POLYGON);
	glVertex2f(1810, 1170);
	glVertex2f(1830, 1170);
	glVertex2f(1830, 1195);
	glVertex2f(1810,1195);
	glEnd();

	glColor3f(0.0,0.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1860, 1170);
	glVertex2f(1880, 1170);
	glVertex2f(1880, 1195);
	glVertex2f(1860,1195);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows 1
	glBegin(GL_POLYGON);
	glVertex2f(1910, 990);
	glVertex2f(1930, 990);
	glVertex2f(1930, 1015);
	glVertex2f(1910,1015);
	glEnd();

	glColor3f(1.0,1.0,0.0);  //Windows
	glBegin(GL_POLYGON);
	glVertex2f(1960, 990);
	glVertex2f(1980, 990);
	glVertex2f(1980, 1015);
	glVertex2f(1960,1015);
	glEnd();


	glColor3f(1.0,1.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1960, 1070);
	glVertex2f(1980, 1070);
	glVertex2f(1980, 1095);
	glVertex2f(1960,1095);
	glEnd();

	glColor3f(0.0,0.0,0.0);  //Windows 2 building
	glBegin(GL_POLYGON);
	glVertex2f(1910, 1070);
	glVertex2f(1930, 1070);
	glVertex2f(1930, 1095);
	glVertex2f(1910,1095);
	glEnd();



	}





	//spin fan stand






	void megh(){

    glPushMatrix();
    glTranslatef(cx,0.0,0.0);
    glColor3f(meghR, meghG, meghB);
	DrawCircle(100, 1300, 60, 2000);//1
	DrawCircle(200,1300, 80, 2000);//2
	DrawCircle(300, 1300, 55, 2000);//3
	glPopMatrix();

    glPushMatrix();
    glTranslatef(cx,0.0,0.0);
    glColor3f(meghR, meghG, meghB);
	DrawCircle(700, 1300, 60, 2000);//1
	DrawCircle(800,1300, 80, 2000);//2
	DrawCircle(900, 1300, 55, 2000);//3
	glPopMatrix();

    glPushMatrix();
    glTranslatef(cx,0.0,0.0);
    glColor3f(meghR, meghG, meghB);
	DrawCircle(1100, 1300, 60, 2000);//1
	DrawCircle(1200,1300, 80, 2000);//2
	DrawCircle(1300, 1300, 55, 2000);//3
	glPopMatrix();

    glPushMatrix();
    glTranslatef(cx,0.0,0.0);
    glColor3f(meghR, meghG, meghB);
	DrawCircle(1700, 1300, 60, 2000);//1
	DrawCircle(1800,1300, 80, 2000);//2
	DrawCircle(1900, 1300, 55, 2000);//3
	glPopMatrix();


	}



	void sky(){

	glBegin(GL_POLYGON); //Sky
	glColor3f(skyR, skyG, skyB);
	glVertex2i(0, 1500);
	glVertex2i(2000, 1500);
	glColor3f(0.7, 0.7, 1.0);
	glVertex2i(2000, 0);
	glVertex2i(0, 0);
	glEnd();



	}
	void river(){


	glBegin(GL_POLYGON); // River
	glColor3f(riverR, riverG, riverB);
	//glVertex2i(0, 500);
	//glVertex2i(600, 350);
	//glVertex2i(1500, 550);
	//glVertex2i(1700, 350);
	glVertex2i(0, 450);
	glVertex2i(2000, 450);
	glVertex2i(2000, 850);///
	glVertex2i(750, 800);
	glVertex2i(600, 850);
	glVertex2i(0, 900);
	glEnd();
//river side
    glColor3f(0.4, 0.4, 0.3);
	glBegin(GL_POLYGON);
		glVertex2f(0, 900);
		glVertex2f(600, 850);
		glVertex2i(750, 800);
		glVertex2f(2000, 850);
		glVertex2f(2000, 950);
		glVertex2f(0,950);
	glEnd();




	}

void moveship(int x1)
	{


glBegin(GL_TRIANGLES);  // bottom left triangle
glColor3f (0.0, 0.0, 0.0);
glVertex2i(150+x, 50+y);
glVertex2i(100+x, 130+y);
glVertex2i(150+x, 130+y);
glEnd();

glColor3f (0.0, 0.0, 0.0); //bottom right triangle
glBegin(GL_TRIANGLES);
glVertex2i(500+x, 50+y);
glVertex2i(550+x, 130+y);
glVertex2i(500+x, 130+y);
glEnd();

glColor3i(0.0, 0.0, 1.0);
glBegin(GL_QUADS);   // ship bottom middle
glVertex2i(150+x, 50+y);
glVertex2i(500+x, 50+y);
glVertex2i(550+x, 130+y);
glVertex2i(150+x, 130+y);
glEnd();


glBegin(GL_QUADS);  //   ship upper level
glColor3f(0.65, 0.50, 0.39);
glVertex2i(180+x, 130+y);
glVertex2i(470+x, 130+y);
glVertex2i(470+x, 160+y);
glVertex2i(180+x, 160+y);
glEnd();


glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(220+x, 160+y);
glVertex2i(250+x, 160+y);
glVertex2i(250+x, 200+y);
glVertex2i(220+x, 200+y);
glEnd();



glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 1.0);  //chimnee white border
glVertex2i(220+x,200+y);
glVertex2i(250+x,200+y);
glVertex2i(250+x,220+y);
glVertex2i(220+x,220+y);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(280+x, 160+y);
glVertex2i(310+x, 160+y);
glVertex2i(310+x, 220+y);
glVertex2i(280+x, 220+y);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 1.0);  //chimnee white border
glVertex2i(280+x,200+y);
glVertex2i(310+x,200+y);
glVertex2i(310+x,220+y);
glVertex2i(280+x,220+y);
glEnd();


glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(340+x, 160+y);
glVertex2i(370+x, 160+y);
glVertex2i(370+x, 220+y);
glVertex2i(340+x, 220+y);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 1.0);  //chimnee white border
glVertex2i(340+x,200+y);
glVertex2i(370+x,200+y);
glVertex2i(370+x,220+y);
glVertex2i(340+x,220+y);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(400+x, 160+y);
glVertex2i(430+x, 160+y);
glVertex2i(430+x, 220+y);
glVertex2i(400+x, 220+y);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 1.0);  //chimnee white border
glVertex2i(400+x,200+y);
glVertex2i(430+x,200+y);
glVertex2i(430+x,220+y);
glVertex2i(400+x,220+y);
glEnd();
//Smoke

glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(230+x, 230+y);
glVertex2i(240+x, 230+y);
glVertex2i(240+x, 240+y);
glVertex2i(230+x, 240+y);
glEnd();

glBegin(GL_QUADS);
glVertex2i(240+x, 260+y);
glVertex2i(250+x, 260+y);
glVertex2i(250+x, 270+y);
glVertex2i(240+x, 270+y);
glEnd();

glBegin(GL_QUADS);
glVertex2i(290+x, 230+y);
glVertex2i(300+x, 230+y);
glVertex2i(300+x, 240+y);
glVertex2i(290+x, 240+y);
glEnd();

glBegin(GL_QUADS);
glVertex2i(300+x, 260+y);
glVertex2i(310+x, 260+y);
glVertex2i(310+x, 270+y);
glVertex2i(300+x, 270+y);
glEnd();



	}



	void moveship1(int x)
	{
glBegin(GL_TRIANGLES);  // bottom left triangle
glColor3f (0.0, 0.0, 0.0);
glVertex2i(150, 50+yy);
glVertex2i(100, 130+yy);
glVertex2i(150, 130+yy);
glEnd();

glColor3f (0.0, 0.0, 0.0); //bottom right triangle
glBegin(GL_TRIANGLES);
glVertex2i(500, 50+yy);
glVertex2i(550, 130+yy);
glVertex2i(500, 130+yy);
glEnd();

glColor3i(0.0, 0.0, 0.0);
glBegin(GL_QUADS);   // ship bottom middle
glVertex2i(150, 50+yy);
glVertex2i(500, 50+yy);
glVertex2i(550, 130+yy);
glVertex2i(150, 130+yy);
glEnd();


glBegin(GL_QUADS);  //   ship upper level
glColor3f(0.65, 0.50, 0.39);
glVertex2i(180, 130+yy);
glVertex2i(470, 130+yy);
glVertex2i(470, 160+yy);
glVertex2i(180, 160+yy);
glEnd();


glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(220, 160+yy);
glVertex2i(250, 160+yy);
glVertex2i(250, 200+yy);
glVertex2i(220, 200+yy);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 1.0);  //chimnee white border
glVertex2i(220,200+yy);
glVertex2i(250,200+yy);
glVertex2i(250,220+yy);
glVertex2i(220,220+yy);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(280, 160+yy);
glVertex2i(310, 160+yy);
glVertex2i(310, 220+yy);
glVertex2i(280, 220+yy);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 1.0);  //chimnee white border
glVertex2i(280,200+yy);
glVertex2i(310,200+yy);
glVertex2i(310,220+yy);
glVertex2i(280,220+yy);
glEnd();


glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(340, 160+yy);
glVertex2i(370, 160+yy);
glVertex2i(370, 220+yy);
glVertex2i(340, 220+yy);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 1.0);  //chimnee white border
glVertex2i(340,200+yy);
glVertex2i(370,200+yy);
glVertex2i(370,220+yy);
glVertex2i(340,220+yy);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(400, 160+yy);
glVertex2i(430, 160+yy);
glVertex2i(430, 220+yy);
glVertex2i(400, 220+yy);
glEnd();

glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 1.0);  //chimnee white border
glVertex2i(400,200+yy);
glVertex2i(430,200+yy);
glVertex2i(430,220+yy);
glVertex2i(400,220+yy);
glEnd();
//Smoke

glBegin(GL_QUADS);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(230, 230+yy);
glVertex2i(240, 230+yy);
glVertex2i(240, 240+yy);
glVertex2i(230, 240+yy);
glEnd();

glBegin(GL_QUADS);
glVertex2i(230, 260+yy);
glVertex2i(220, 260+yy);
glVertex2i(220, 270+yy);
glVertex2i(230, 270+yy);
glEnd();

glBegin(GL_QUADS);
glVertex2i(290, 230+yy);
glVertex2i(300, 230+yy);
glVertex2i(300, 240+yy);
glVertex2i(290, 240+yy);
glEnd();

glBegin(GL_QUADS);
glVertex2i(280, 260+yy);
glVertex2i(290, 260+yy);
glVertex2i(290, 270+yy);
glVertex2i(280, 270+yy);
glEnd();


	}





	void ship()
	{

		if (shipStatus == 1)
		{
			shipX -=1;
		}
		if (shipX<-2000)
		{
			shipX = 600;
		}
		glPushMatrix();
		glTranslatef(shipX, shipY, 0);
		moveship(1);
		glPopMatrix();
	}

	void ship1()
	{
		if (shipStatus1 == 1)
		{
			shipX1 +=1;

		}
	if (shipX1>2000)
	{
		shipX1 = -600;
	}
		glPushMatrix();
		glTranslatef(shipX1, shipY1, 0);
		moveship1(1);
		glPopMatrix();
	}



   void myDisplay(void)
	{
             sky();
			 drawSun();

            star();
			 town();

			 river();
			 megh();

			 ship();
			 ship1();
			 road();
			 car();



		/*	 glPushMatrix();
             glTranslatef(1745, 480, 0);
			 glRotatef(angle,0.0f,0.0f,-1.0f);
			 glTranslatef(-1745, -480, 0);
			 fan();
			 glPopMatrix();
			 */

			 glFlush();
			 glutPostRedisplay();
			 glutSwapBuffers();
			 angle +=0.2;


}

void update(int value)
{
    cx = cx + 1;

    if(cx>=2000){
        cx = 0;}

    glutPostRedisplay();
    glutTimerFunc(1, update, 0);

}
void update1(int value)
{
    carx = carx + 1;

    if(carx>=2000){
        carx = 0;}

    glutPostRedisplay();
    glutTimerFunc(1, update1, 0);

}
void keyDisplayAnimationDay()
{

			fieldgrassR=0.1,fieldgrassG=0.6,fieldgrassB=0.3;
            fieldgrassR1=0.7,fieldgrassG1=0.8,fieldgrassB1=0.2;
			skyR=0.4,skyG=0.5,skyB=1.0;
			meghR=1.0,meghG=1.0,meghB=1.0;
			meghR=1.0,meghG=1.0,meghB=1.0;
            moonR=3.0,moonG=1.0,moonB=0.5;
            riverR=0.2,riverG=0.3,riverB=1.1;
			grassR=0.0,grassG=0.6,grassB=0.3;
            mm=0;sy=0;



			 build1R=0.4,build1G=0.4,build1B=0.2;
             build2R=0.4,build2G=0.5,build2B=0.2;
             build3R=0.5,build3G=0.3,build3B=0.2;
             build4R=0.4,build4G=0.5,build4B=0.3;

    glutPostRedisplay();
}
void keyDisplayAnimationNight()
{
            skyR=0.0,skyG=0.0,skyB=0.0;
			meghR=0.75291,meghG=0.752941,meghB=0.752941;

            build1R=0.4,build1G=0.5,build1B=0.3;
             build2R=0.4,build2G=0.4,build2B=0.3;
             build3R=0.5,build3G=0.4,build3B=0.3;
             build4R=0.4,build4G=0.5,build4B=0.3;

             moonR=0.658824,moonG=0.658824,moonB=0.658824;
             mm=300;sy=800;
			riverR=0.137255,riverG=riverR,riverB=0.556863;
			grassR=0.184314,grassG=0.309804,grassB=grassR;


    glutPostRedisplay();
}
void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'd':
      keyDisplayAnimationDay();

        break;

    case 'n':

        keyDisplayAnimationNight();
        break;
    case 'c':
        glutTimerFunc(1, update, 0);
        break;

         case '1':
           shipStatus = 1;
            break;

         case '2':
           shipStatus = 0;
            break;

        case '3':
           shipStatus1 = 1;
            break;
        case '4':
           shipStatus1 = 0;
            break;


        default:
        break;
    }
}

void myInit(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 2000.0, 0.0, 1500.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(2000, 1500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("project");
	glutKeyboardFunc(keyboard);
	glutDisplayFunc(myDisplay);
	sndPlaySound("city_traffic.wav", SND_ASYNC);
	glutTimerFunc(0,timer,0);
    glutTimerFunc(1, update1, 0);


	myInit();
	glutMainLoop();
}
