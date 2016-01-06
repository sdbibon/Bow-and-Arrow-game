
# include<graphics.h>
# include<conio.h>
# include<dos.h>
# include<stdlib.h>

    void put();
void main()
{
     int gd=DETECT,gm;

     int m;
     int y;
     char ch;
     initgraph(&gd,&gm,"c:/turboc3/bgi");
     void *p;




     int i=420;
     int x=85;

      while(i>=60 && x<=580)
      {         //main code for the balloons with line moving down to up

     setbkcolor(10);
     setcolor(14);
     setfillstyle(1,14);
     circle(530,i,20);
     floodfill(530,i,14);
     delay(1);
     setfillstyle(1,0);
     floodfill(530,i,0);

     setfillstyle(7,14);
     rectangle(530,i+20,532,i+50);
     floodfill(531,i+20,14);
     delay(1);

     setfillstyle(1,0);
     floodfill(531,i+20,0);
     delay(1);
     i--;

	setbkcolor(10);
	setcolor(4);

	setfillstyle(1,4);
	line(x,60,x+45,60);   // very important codes because it will move
	floodfill(x,60,4);

	setfillstyle(1,0);   // very important codes because it will move
	floodfill(x,60,0);
	delay(10);

	setfillstyle(1,4);
	line(x+40,55,x+45,60);  // important code
	floodfill(x+40,55,4);

	setfillstyle(1,0);
	floodfill(x+40,55,0);

	setfillstyle(1,4);
	line(x+40,65,x+45,60);  // important code
	floodfill(x+40,65,4);

	setfillstyle(1,0);
	floodfill(x+40,65,0);

	if((x+10)==455)
	{
	   setcolor(4);

	  line(530,80,530,100);
	  line(550,60,570,60);
	  line(510,60,490,60);
	  line(530,40,530,20);
       }
	 x++;




     }

	getch();
	closegraph();
	}
	void put()
      {
      void *p;

      setcolor(0);
      rectangle(482,15,575,110);
      setcolor(4);
      line(530,80,530,100);
      line(550,60,570,60);
      line(510,60,490,60);
      line(530,40,530,20);

      int area=imagesize(483,16,574,109);
      p=malloc(area);
      getimage(483,16,574,109,p);
      putimage(320,240,p,0);
      }