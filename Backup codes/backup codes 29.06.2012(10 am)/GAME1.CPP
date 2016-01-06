#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

void arrow(int x);
void ballon(int y);
//void man();
void key();
int flag=0,flag2=0,flag3=0;
int a=1,b2=1,b3=1;

void main()
  {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:/TurboC3/bgi");
    int i;
    for(i=1;i<=640;i++)
      {

	 if(kbhit())
	 { key(); }
	 if(flag==1)
	   {
	     arrow(a);
	     a++;
	   }
	 ballon(i);
      }
    getch();
    closegraph();
  }

void ballon(int y)
   {
       setcolor(2);
       setfillstyle(1,2);
       circle(550,480-y,30);
       floodfill(550,480-y,2);
       delay(8);
       setfillstyle(1,0);
       floodfill(550,480-y,0);
       if(y==100)
	 { flag2=1;}
       if(flag2==1)
	 {
	   setcolor(2);
	   setfillstyle(1,2);
	   circle(600,480-b2,30);
	   floodfill(600,480-b2,2);
	   delay(8);
	   setfillstyle(1,0);
	   floodfill(600,480-b2,0);
	   b2++;
	 }
       if(y==200)
	 { flag3=1;}
       if(flag3==1)
	 {
	   setcolor(2);
	   setfillstyle(1,2);
	   circle(500,480-b3,30);
	   floodfill(500,480-b3,2);
	   delay(8);
	   setfillstyle(1,0);
	   floodfill(500,480-b3,0);
	   b3++;
	 }
   }
void arrow(int x)
  {
      setcolor(4);
      line(x,100,x+100,100);
      delay(8);
      setfillstyle(1,0);
      floodfill(x,100,0);
  }
void key()
  {
      char ch;
      ch=getch();
      if(ch=='q')
	{ exit(0); }
      if(ch=='d')
	{ flag=1; }

  }