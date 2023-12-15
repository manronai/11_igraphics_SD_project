/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"



int dc =244;
int px = 0;
int py = 0;
int i = 0;
int ix[3000] , iy[3000];
int t = 0;
/* 
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	//place your drawing codes here	

	if (t == 1)
	{
		for(int ii = 0; ii<3000; ii++ )
		{
           px = ix[ii];
		   py = iy[ii];
		   iSetColor(38, 28, 199);
	       iFilledCircle(px, py, 3);
		}
	}
	else if(t == 2)
	{
		for(int ii = 0; ii<3000; ii++ )
		{
           px = ix[ii];
		   py = iy[ii];
		   iSetColor(138, 228, 99);
	       iFilledCircle(px, py, 3);
		}
	}
	else if(t == 3)
	{
		for(int ii = 0; ii<3000; ii++ )
		{
           px = ix[ii];
		   py = iy[ii];
		   iSetColor(238, 128, 199);
	       iFilledCircle(px, py, 3);
		}
	}
	else
	{
		iSetColor(dc, dc, dc);
		iFilledCircle(px, py, 3);
	}

    
    //iFilledCircle(399, 399, 7);
	iSetColor(38, 28, 199);
	iFilledRectangle(60, 0, 40, 40);
	
	iSetColor(255, 255, 255);
	iText(61, 9, "Click");
	
	iSetColor(138, 228, 99);
	iFilledRectangle( 120, 0, 40, 40);

	iSetColor(255, 255, 255);
	iText(121, 9, "Click");

	iSetColor(238, 128, 199);
	iFilledRectangle( 180,0, 40, 40);
	
	iSetColor(255, 255, 255);
	iText(181, 9, "Click");
	//iSetColor(dc, dc, dc);
	//iText(10, 10, "Press p for pause, r for resume, END for exit.");
	
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
	px = mx;
	py = my;

	i++;
	printf("%d", i);
	ix[i]=mx;
	iy[i]=my;
	
}

/*
	function iPassiveMouse() is called when the user moves the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iPassiveMouse(int mx, int my)
{
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if((mx >=60 && my>=0 ) && (mx<=100 && my<=40))
	{
		t = 1;
	}
	if((mx >=120 && my>=0 ) && (mx<=160 && my<=40))
	{
		t = 2;
	}
	if((mx >=180 && my>=0 ) && (mx<=220 && my<=40))
	{
		t = 3;
	}
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 'p')
	{
		//do something with 'q'
		//iPauseTimer(0);
		t = 1;
	}
	if(key == 'r')
	{
		t = 2;
	}
	if(key == 's')
	{
		t = 3;
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	
}



int main()
{
	//place your own initialization codes here. 
	
	iInitialize(400, 400, "Change color");
	iStart();


	return 0;
}

