
# include<graphics.h>
# include<conio.h>
# include<dos.h>


void main()
{
     int gd=DETECT,gm;

     int m;
     int y;
     int p;
     char ch;
     initgraph(&gd,&gm,"c:/turboc3/bgi");




     int i=420;
     int x=85;

      //while(i>=60 && x<=580)
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

	x++;

     }

	getch();
	closegraph();
	}