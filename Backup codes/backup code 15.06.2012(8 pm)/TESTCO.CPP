
# include<graphics.h>
# include<conio.h>
# include<dos.h>
# include<stdio.h>
# include<stdlib.h>
void main()
{
     int gd=DETECT,gm;
     int m;

     char ch;
     initgraph(&gd,&gm,"c:/turboc3/bgi");

    int x=420;
     while(x>=20)
   {

     setcolor(14);
     setfillstyle(1,14);
     circle(530,x,20);
     floodfill(530,x,14);

     setfillstyle(1,0);
     floodfill(530,x,0);

     x--;

   }


   getch();
   closegraph();

   }