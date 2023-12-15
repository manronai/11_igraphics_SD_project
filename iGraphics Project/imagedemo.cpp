# include "iGraphics.h"
# include "myheader.h"

int image1, image2, image3;
int lft = 0, rit = 0;
int wleft[9], wright[9];
int wc = 0, wl = 0;
int y = 0, w = 0;
int front;
int j = 0;
int h = 0;
int jc = 7;
int neg = 1;
int iiiii;
int spx = 0;
int spy = 0;
int spx1 = 400;
int spy1 = 400;
int stand = 1;
int corx , cory = 60;
bool fly = false;
int frontfly;

/*
function iDraw() is called again and again by the system.
*/


void iDraw()
{
	//place your drawing codes here
	if (spx1==0){spx1 = 400;
	spx = 0;
	}
	iClear();
	//iLine(cx, cy, mcx, mcy);

	/* iShowImage():
	Here, first 2 parameters are the lower left
	corner position of image you want to put.
	3rd and 4th parameters are the widht and the height
	of the image.
	Last parameter is the id of the image you want to put.
	*/
	iShowImage(spx,spy, 400, 400, image3);
	iShowImage(spx1,spy, 400, 400, image2);
	if(fly){

		iShowImage(corx, cory, 80, 80,front);
	}  
	if (!fly){
	if (lft && (rit== 0) ){

			wc = 0;
			iShowImage(w, y + 60, 80,80,wleft[wl]);
        if (wl < 8){
			wl += 1;}
        else{
            wl = 0;
		}
		
		}

    else if (rit && (lft == 0) ) {

        wl = 0;
			iShowImage(w, y + 60, 80,80 ,wright[wc]);
        if (wc < 8){
		wc += 1;}
        else{
			wc = 0;}
	stand = 0;
	}
    else if ( !(rit == 0 )&& (lft == 0)){
        wc = 0;
        wl = 0;
		iShowImage(w, y + 60, 80,80,front);}
    else if  ((rit == 0 )&& (lft == 0) ) {
        wc = 0;
        wl = 0;
		iShowImage(w, y + 60, 80,80,frontfly);}
	if(j){
	   if( jc >= -7){
            neg = 1;
            if (jc < 0){
                neg = -1;
            }
			for(iiiii= 0; iiiii< 3999;iiiii++){iiiii;}
			y +=(jc*(jc))*neg/2;
			jc-= 1;}
        else{
            jc = 7;
			j = 0;}
	
	}
	}}
	/*
	iShowImage(0, 20, 200, 200, image2);
	iRotate(pic_x,pic_y,45); /*angle in degree*

	iShowImage(pic_x, pic_y, 100, 100, image1);

    iUnRotate();
	iSetColor(0, 0, 0);
	iText(10, 10, "Press p for pause, r for resume, END for exit.");*/


/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
	

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
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
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
	
	if (key == 'p')
	{
		//do something with 'q'
		spx--;
		spx1 = spx1 -1;
		
		
	}
	if (key == 'r')
	{
		iResumeTimer(0);
	}

	//place your codes for other keys here
}
void movesrc(){
	spx--;
		spx1 = spx1 -1;
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

	if(key == GLUT_KEY_LEFT){
		 lft = 1;
		 rit = 0;
		 w -=9;
		
	
	
	}
	if(key == GLUT_KEY_UP){
		lft = 02;
		rit =02;
		corx = w;
	}
	
	//if(!(key == GLUT_KEY_LEFT)&&!(key == GLUT_KEY_RIGHT)){
		//lft = 0;
		//rit =0;
		
	
	//}
	if(key == GLUT_KEY_RIGHT){
		 lft = 0;
		 rit = 1;
		 w +=9;
		 fly = true;
		 corx = w;
		
	
	}
	    

        if (key== GLUT_KEY_UP){
            fly = true;
            rit = 1;
			lft = 1;
			corx = corx +9;
			cory = cory +9;
		}
		
   /* else{
        if( jc >= -7){
            neg = 1;
            if (jc < 0){
                neg = -1;
            y +=(jc*jc)*2*neg/2;
			jc-= 1;}}
        else{
            jc = 7;
			j = 0;}}*/
	
	if (key == GLUT_KEY_END)
	{
		exit(0);
	}

	//place your codes for other keys here
}



int main()
{
	//place your own initialization codes here.


	iInitialize(400, 400, "Animation with image");

	//iSetTimer(20, objectChange);

	dx = 5;
	dy = 7;

	pic_x = 0;
	pic_y = 0;

	// loading images.
	/* iLoadImage() will return an interger type id
	   for each image you load.
	*/
	iSetTimer(5, movesrc);
	wleft[0] = iLoadImage("images\\L1.png");
	wleft[1] = iLoadImage("images\\L2.png");
	wleft[2] = iLoadImage("images\\L3.png");
	wleft[3] = iLoadImage("images\\L4.png");
	wleft[4] = iLoadImage("images\\L5.png");
	wleft[5] = iLoadImage("images\\L6.png");
	wleft[6] = iLoadImage("images\\L7.png");
	wleft[7] = iLoadImage("images\\L8.png");
	wleft[8] = iLoadImage("images\\L9.png");
	wright[0] = iLoadImage("images\\R1.png");
	wright[1] = iLoadImage("images\\R2.png");
	wright[2] = iLoadImage("images\\R3.png");
	wright[3] = iLoadImage("images\\R4.png");
	wright[4] = iLoadImage("images\\R5.png");
	wright[5] = iLoadImage("images\\R6.png");
	wright[6] = iLoadImage("images\\R7.png");
	wright[7] = iLoadImage("images\\R8.png");
	wright[8] = iLoadImage("images\\R9.png");
		//,iLoadImage("images\\L2.png"),iLoadImage("images\\L3png"),iLoadImage("images\\L4.png"),iLoadImage("images\\L5.png"),iLoadImage("images\\L6.png"),iLoadImage("images\\L7.png"),iLoadImage("images\\L8.png"),iLoadImage("images\\L9.png")};
	
	//wright[] = {iLoadImage("images\\R1.png"),iLoadImage("images\\R2.png"),iLoadImage("images\\R3png"),iLoadImage("images\\R4.png"),iLoadImage("images\\R5.png"),iLoadImage("images\\R6.png"),iLoadImage("images\\R7.png"),iLoadImage("images\\R8.png"),iLoadImage("images\\R9.png")};
	image3 = iLoadImage("images\\img.jpg");
	image2 = iLoadImage("images\\img.jpg");
	front = iLoadImage("images\\standing.png");
	frontfly = iLoadImage("images\\standing.png");
	/*image1 = iLoadImage("images\\bird.png");
	image2 = iLoadImage("images\\tree.png");
	*/

	iStart(); // it will start drawing

	return 0;
}


