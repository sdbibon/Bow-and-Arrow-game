#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<ctype.h>

void main()

{
  int gdriver = DETECT , gmode;
  initgraph (&gdriver , &gmode, "C:\\tc\\bgi");
  setbkcolor(LIGHTBLUE);
  setcolor(RED);
  int x=getmaxx()/8;
  int y=getmaxy()/3;
  settextstyle(0,0,3);
  outtextxy(x,y,"'BOW AND ARROWS'");
  getch();
  clearviewport();
  setbkcolor(LIGHTBLUE);
  setcolor(RED);
  settextstyle(0,0,3);
  x=getmaxx()/5;
  y=getmaxy()/5;
  outtextxy(x,y,"INSTRUCTIONS:");
  settextstyle(0,0,2);
  outtextxy(20,200,"1.press any key of the keyboard to");
  outtextxy(45,220,"throw the arrows");
  outtextxy(20,250,"2.if u want to quit the game");
  outtextxy(45,270,"press escape");
  getch();
  clearviewport();
  setbkcolor(LIGHTBLUE);
  setcolor(RED);
  settextstyle(0,0,3);
  x=getmaxx()/5;
  y=getmaxy()/5;
  outtextxy(x,y,"PRESS");
  x=getmaxx()/2;
  y=getmaxy()/5;
  outtextxy(x,y,"ENTER");
  rectangle(300,90,500,127);
  rectangle(305,95,505,132);
  x=getmaxx()/10;
  y=getmaxy()/2;
  outtextxy(x,y,"TO START THE GAME");
  getch();
  clearviewport();

  setbkcolor(WHITE);

  setcolor(RED);
  line(55,18,78,35);          //HAT
  line(55,18,55,25);
  line(63,32,60,30);
  line(60,30,58,27);
  line(58,27,55,25);
  line(55,25,50,23);
  line(50,23,46,21);
  line(46,21,41,19);
  line(41,19,38,17);
  line(60,30,58,31);
  line(58,31,55,29);
  line(55,29,50,27);
  line(50,27,45,24);
  line(45,24,38,17);
  line(55,29,55,35);
  line(55,35,78,35);

   setfillstyle(SOLID_FILL,BLUE);
  floodfill(56,25,RED);


  line(55,35,53,39);          //HAIR
  line(53,39,53,42);
  line(53,42,56,39);
  line(56,39,59,44);
  line(59,44,63,40);
  line(63,40,77,43);
  line(77,43,79,41);
  line(79,41,77,38);
  line(77,38,76,35);
     setfillstyle(SOLID_FILL,RED);
  floodfill(56,37,RED);




  line(53,42,53,45);    //FACE
  line(53,45,53,48);
  line(53,48,55,52);
  line(55,52,58,54);
  line(58,54,61,55);
  line(61,55,64,55);
  line(64,55,69,55);
  line(69,55,72,54);
  line(77,43,76,45);
  line(76,45,75,47);
  line(75,47,76,47);
  line(76,47,76,48);
  line(76,48,77,49);
  line(77,49,77,50);
  line(77,50,75,52);
  line(75,52,73,53);


  setcolor(BLUE);            //eyes
  circle(64,45,1);
  circle(71,45,1);



 line(67,46,69,49);     //nose
 line(69,49,66,49);


 line(64,52,70,52);     //lip

  setcolor(RED);        //throught
  line(58,54,58,58);
  line(70,54,70,58);


  line(50,59,85,59);     //right_hand
  line(49,64,91,64);
/*  arc(85,89,137,145,45);
  line(49,64,44,63);
  line(44,63,45,59);
  line(45,59,50,59); */

  line(85,59,89,58);      //fingers
  line(89,58,92,57);
  line(92,57,93,57);
  line(93,57,93,59);
  line(93,59,92,59);
  line(93,59,93,61);
  line(93,61,91,61);
  line(93,61,93,63);
  line(93,63,91,64);


  line(49,64,44,63);     //half_sleeves
  line(44,63,45,59);
  line(45,59,50,59);
  line(55,59,57,64);
  line(66,65,68,68);
  line(68,68,78,68);
  line(78,68,76,65);



  line(78,68,110,68);          //left_hand
  line(93,63,105,63);


  line(105,63,109,62);        //fingers
  line(109,62,112,61);
  line(112,61,113,61);
  line(113,61,113,63);
  line(113,63,112,63);
  line(113,63,113,65);
  line(113,65,111,65);
  line(113,65,113,67);
  line(113,67,110,68);


  line(48,65,48,90);         //t_shirt
  line(75,68,75,93);
  line(48,90,52,93);
  line(52,93,55,95);
  line(55,95,69,95);
  line(69,95,75,93);
      setfillstyle(SOLID_FILL,GREEN);
  floodfill(49,67,RED);

  line(53,81,58,82);         //pockets
  line(53,81,53,86);
  line(58,82,58,87);
  line(53,86,58,87);
  line(68,81,71,82);
  line(71,82,71,85);
  line(63,65,63,76);
  line(63,82,63,95);

  setcolor(BLUE);     //buttons
  circle(61,69,1);
  circle(65,69,1);
  circle(65,76,1);
  circle(65,90,1);
  circle(61,90,1);
  circle(61,84,1);


  setcolor(RED);            //pant
  line(50,92,43,115);
  line(61,95,57,113);
  line(59,103,63,111);
  line(72,95,76,113);
  line(43,115,57,113);
  line(63,111,76,113);
    setfillstyle(SOLID_FILL,CYAN);
  floodfill(52,94,RED);
  setfillstyle(SOLID_FILL,CYAN);
  floodfill(70,99,RED);

  line(48,115,46,125);      //legs
  line(56,113,54,124);
  line(75,113,77,125);
  line(68,111,70,127);


  line(44,125,54,124);     //shoes
  line(77,125,68,127);
  line(44,125,42,131);
  line(54,124,55,137);
  line(55,137,35,138);
  line(35,138,33,133);
  line(33,133,36,135);
  line(36,135,54,124);

  line(68,127,70,140);
  line(77,125,79,133);
  line(70,140,90,141);
  line(90,141,92,136);
  line(92,136,89,138);
  line(89,138,68,127);
//  line();
//  line();*/


  setcolor(RED);
  line(52,65,56,72);         //belt
  line(56,72,60,78);
  line(60,78,65,85);
  line(65,85,70,90);
  line(70,90,75,93);

  line(56,65,60,72);
  line(60,72,64,78);
  line(64,78,69,84);
  line(69,84,74,89);
 /* ellipse(380,100,270,0,10,30);
  ellipse(370,100,0,180,20,10);
  ellipse(360,100,180,270,10,30);*/
//
  ellipse(570,400,270,269,20,30);//balloon
  line(570,430,570,450);//balloon suta
   ellipse(80,60,270,90,30,30); //bow
  ellipse(85,60,270,90,30,30);
  setcolor(BROWN);
  ellipse(75,60,270,90,20,30);
   setcolor(RED);
   setfillstyle(SOLID_FILL,BROWN);//bowcolor
   floodfill(110,50,RED);
   setfillstyle(SOLID_FILL,BROWN);//bowcolor
   floodfill(110,70,RED);
	line(85,60,130,60);
	line(125,55,130,60);
	line(125,65,130,60);
   int a,b,c,d,g,h,i,e,f;
   x=getmaxx()/3;
   y=getmaxy()/2;
   //outtextxy(x,y,"lets start throwing");
   //for(i=400,e=430,f=450;i>0,e>0,f>0;i--,e--,f--)
   /*while(1)
   {
		for(i=400,e=430,f=450;i>0,e>0,f>0;i--,e--,f--)
		{

			while(kbhit())
			{
				fflush(stdin);
				for(a=85,b=125,c=130,d=i,g=e,h=f;a<=300,b<=340,c<=700;a++,b++,c++,d--,g--,h--)
				{
					setcolor(RED);
					line(a,60,c,60);
					line(b,55,c,60);
					line(b,65,c,60);
					line(570,g,570,h);
					ellipse(570,d,270,269,20,30);
					delay(20);
					setcolor(WHITE);
					line(a,60,c,60);
					line(b,55,c,60);
					line(b,65,c,60);
					line(570,g,570,h);
					ellipse(570,d,270,269,20,30);

				}//getch();
				//outtextxy(x,y,"how many loops");
			 }

			setcolor(RED);
			ellipse(570,i,270,269,20,30);
			line(570,e,570,f);
			delay(20);
			setcolor(WHITE);
			ellipse(570,i,270,269,20,30);
			line(570,e,570,f);
		}
		setcolor(RED);
		line(85,60,130,60);
		line(125,55,130,60);
		line(125,65,130,60);
		char ch=getche();
		if(ch=='q')
			break;
   }*/
   int run=0,sc=0;

   char *res;
   i=480,e=510,f=545,a=85,b=125,c=130;
   do
   {
	if(kbhit())
	{
		if(toascii(getch())==27)break;
		run=1;
	}
	if(run==1)
	{
		setcolor(RED);
		line(a,60,c,60);
		line(b,55,c,60);
		line(b,65,c,60);
		delay(5);
		setcolor(WHITE);
		line(a,60,c,60);
		line(b,55,c,60);
		line(b,65,c,60);
		a++;
		b++;
		c++;
		if(a==590&&b==630&&c==635)
		{
			a=85;
			b=125;
			c=130;
			setcolor(RED);
			line(a,60,c,60);
			line(b,55,c,60);
			line(b,65,c,60);
			run=0;
			//kbhit();
		}

	}
	setcolor(RED);
	ellipse(570,i,270,269,20,30);
	line(570,e,570,f);
	delay(10);
	setcolor(WHITE);
	ellipse(570,i,270,269,20,30);
	line(570,e,570,f);
	i--;
	e--;
	f--;
	if(c==560&&(i<85&&i>35))
	{
		setcolor(1);
		rectangle(163,248,190,258);
		setfillstyle(1,15);
		floodfill(175,250,1);
		sc++;
		sprintf(res,"Score : %d",sc);
		setcolor(RED);
		settextstyle(0,0,1);
		outtextxy(100,250,res);


	}
	if(i==0)
	{
		i=480;
		e=510;
		f=545;
	}

   }while(1);

	//line(85,60,130,60);
	//line(125,55,130,60);
	//line(125,65,130,60);


  //getch();
  closegraph();
  }