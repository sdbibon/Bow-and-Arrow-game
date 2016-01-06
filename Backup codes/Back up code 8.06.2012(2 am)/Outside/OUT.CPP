#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<ctype.h>
# include<stdlib.h>

void main()

{
  int gdriver = DETECT , gmode;
  initgraph (&gdriver , &gmode, "C:/turboc3/bgi");
  setbkcolor(0);
  setcolor(4);
  int x=getmaxx()/8;
  int y=getmaxy()/3;
  settextstyle(0,0,4);
  outtextxy(x,y," BOW AND ARROW ");
  delay(5000);
  clearviewport();
  delay(500);

   setbkcolor(11);
  setcolor(1);
  settextstyle(0,0,4);
  x=getmaxx()/5;
  y=getmaxy()/5;
  outtextxy((x-45),y,"Project made by");
  settextstyle(0,0,2);
  setcolor(4);
  outtextxy(55,200,"1.Soumik Das Bibon(11.02.04.003)");
  outtextxy(55,245,"2.Mohammad Rezaunnobi(11.02.04.016)");
  outtextxy(55,290,"3.Foisal Tushar(11.02.04.020)");
   delay(6000);
  clearviewport();
   delay(400);

  setbkcolor(0);

  settextstyle(0,0,15);
  setcolor(4);
  outtextxy(290,200,"3");
  delay(2000);

  clearviewport();

  settextstyle(0,0,6);
  setcolor(4);
  outtextxy(290,200,"2");

  delay(2000);
  clearviewport();

  settextstyle(0,0,3);
  setcolor(4);
  outtextxy(290,200,"1");
  delay(2000);

  clearviewport();

  settextstyle(0,0,9);
  setcolor(14);
  outtextxy(290,200,"GO");
  delay(400);

  clearviewport();

				// code for the arrow with dhonuk
	setcolor(12);

	ellipse(282,240,270,90,150,160);
	ellipse(282,240,270,90,140,160);
	setcolor(14);
	ellipse(282,240,270,90,145,160);


	setcolor(14);
	line(290,80,290,400);

	int x1=290;
	int y1=650;
	int z1=290;
	while(x1>=100 && y1>=460 && z1>=100)
	{

	setcolor(4);
	setfillstyle(1,4);
	rectangle(z1,237,y1,243);
	floodfill(293,240,4);

	setfillstyle(1,4);
	line(y1,235,y1,245);
	line(y1,235,y1,240);
	line(y1,245,y1,240);
	floodfill(y1,240,4);

	setfillstyle(1,0);
	floodfill(y1,240,0);


	setcolor(6);
	setfillstyle(1,0);
	line(290,80,x1,239);
	floodfill(290,80,6);

	setfillstyle(1,0);
	floodfill(290,80,0);

	setfillstyle(1,0);
	line(290,400,x1,241);
	floodfill(290,400,6);

	setfillstyle(1,0);
	floodfill(290,400,0);

	line(290,80,290,400);

	delay(10);
	x1--;
	y1--;
	z1--;
	if(x1==100)
	{
	for(x1=100;x1<=290;x1++)
	{

	setcolor(4);
	setfillstyle(1,4);
	rectangle(x1+320,235,x1+450,245);
	floodfill(x1+320,240,4);

	setfillstyle(1,0);
	floodfill(x1+320,240,0);

	setfillstyle(1,4);
	line(x1+450,235,x1+450,245);
	line(x1+450,235,x1+454,240);
	line(x1+450,245,x1+454,240);
	floodfill(x1+452,240,4);

	setfillstyle(1,0);
	floodfill(x1+452,240,0);

	setcolor(6);
	setfillstyle(1,0);
	line(290,80,x1,240);
	floodfill(290,80,6);

	setfillstyle(1,0);
	floodfill(290,80,0);

	setfillstyle(1,0);
	line(290,400,x1,240);
	floodfill(290,400,6);

	setfillstyle(1,0);
	floodfill(290,400,0);

	line(290,80,290,400);

       }
       }
       if(x1==290)
       {
       break;
       }
    }

       clearviewport();

       int i;

	for(i=0;i<=220;i++)       // code for the arrow moving from left to right
	{
	setcolor(4);
	setfillstyle(1,4);
	rectangle(i,236,i+130,244);
	floodfill(i+2,240,4);

	setfillstyle(1,0);
	floodfill(i+2,240,0);

	setfillstyle(1,4);
	line(i+130,235,i+130,245);
	line(i+130,235,i+134,240);
	line(i+130,245,i+134,240);
	floodfill(i+132,240,4);

	setfillstyle(1,0);
	floodfill(i+132,240,0);

	delay(10);


	}

	clearviewport();


    int r=0;
    int c=0;
    int z=0;

    while(r<=240 && c<=15 && z<=15)  // code for the mitimiti circle
    {
    setcolor(c);
    setfillstyle(1,z);
    circle(320,240,r);
    floodfill(320,240,c);

    r++;
    c++;
    z++;

    if(c==15 && z==15)
    {
    c=0;
    z=0;
    }
    }
    clearviewport();

  setbkcolor(0);
  setcolor(4);
  int x2=getmaxx()/8;
  int y2=getmaxy()/3;
  settextstyle(0,0,4);
  outtextxy(x2,y2-135," BOW AND ARROW ");

	setcolor(12);
	ellipse(282,240,270,90,150,160);
	ellipse(282,240,270,90,140,160);
	setcolor(14);
	ellipse(282,240,270,90,145,160);

	setcolor(6);
	line(282,80,282,400);



	setcolor(4);
	setfillstyle(1,4);
	rectangle(100,239,460,241);
	floodfill(101,240,4);
	setfillstyle(1,4);
	line(460,235,460,245);
	line(460,235,464,240);
	line(460,245,464,240);
	floodfill(462,240,4);
  delay(7000);
  clearviewport();

  delay(600);



  setbkcolor(0);
  setcolor(6);
  settextstyle(0,0,4);
  x=getmaxx()/5;
  y=getmaxy()/5;
  outtextxy(x-80,y,"  Bow and arrow");
  setcolor(12);
  settextstyle(0,0,2);
  outtextxy(250,200,"New Game");
  outtextxy(250,228,"Save Game");
  outtextxy(250,255,"Load Game");
  outtextxy(250,284,"Exit");
  getch();



}