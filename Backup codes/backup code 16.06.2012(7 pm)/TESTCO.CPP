
# include<graphics.h>
# include<conio.h>
# include<dos.h>
# include<stdio.h>
# include<stdlib.h>
# include<math.h>
void main()
{
     int gd=DETECT,gm;
     int m;


     char ch;
     initgraph(&gd,&gm,"c:/turboc3/bgi");



    setcolor(14);

    int y1=420;
    int x2=150;

     while(y1>=0 && x2<=530)
   {


     setfillstyle(1,14);
     circle(550,y1,20);
     floodfill(550,y1,14);

     setfillstyle(1,0);
     floodfill(550,y1,0);
     delay(10);

     y1--;

     setfillstyle(1,14);
     line(x2,52,x2+30,52);
     floodfill(x2+2,52,14);



      x2++;

      if(((pow((x2-550),2))+ (pow((52-y1),2))) < (pow(24,2))  )
      {

      printf("hello");
      }

   }


   getch();
   closegraph();

   }