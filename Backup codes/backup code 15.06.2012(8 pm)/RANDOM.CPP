
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

      setcolor(2);
      setfillstyle(1,14);
      circle(320,240,100);
      floodfill(320,240,2);



      if((getpixel(419,240))==14)
      {
      line(20,40,200,100);

       }


     /*
     setbkcolor(15);

     int i=420;
     int x=85;
     //int i1=420;
     int y=20;



     if(kbhit)
     {
     ch=getch();
     if(ch=='w')
     {


     while(i>=60 && x<=580 && y<=540)
      {         //main code for the balloons with line moving down to up and arrow


     setbkcolor(15);
     setcolor(4);
     setfillstyle(1,4);
     circle(530,i,20);
     floodfill(530,i,4);

     setfillstyle(1,0);
     floodfill(530,i,0);

     setfillstyle(7,4);
     rectangle(530,i+20,532,i+50);
     floodfill(531,i+20,4);


     setfillstyle(1,0);
     floodfill(531,i+20,0);


     i--;


     setcolor(4);            // arrow
     setfillstyle(1,4);
     line(y,240,y+80,240);
     floodfill(y+30,240,4);
     delay(50);

     setfillstyle(1,0);
     floodfill(y+30,240,0);
     /*
     if((getpixel(y+80,240))==14)
     {
     line(20,20,100,100);

     }
     */  /*
     y++;

     if(i==200)
     {
      int i1=420;
     while(i1>=60)
     {
     setbkcolor(15);
     setcolor(14);
     setfillstyle(1,14);
     circle(500,i1,20);
     floodfill(500,i1,14);
     //delay(0);
     setfillstyle(1,0);
     floodfill(500,i1,0);

     setfillstyle(7,14);
     rectangle(500,i1+20,502,i1+50);
     floodfill(501,i1+20,14);
     //delay(1);

     setfillstyle(1,0);
     floodfill(501,i1+20,0);
     //delay(1);
     i1--;
     }
     }
   }
   }
   }


   /*


      int i1=420;

    while(i1>=60 && x<=580)
      {         //main code for the balloons with line moving down to up and arrow


     setbkcolor(15);
     setcolor(14);
     setfillstyle(1,14);
     circle(500,i1,20);
     floodfill(500,i1,14);
     delay(0);
     setfillstyle(1,0);
     floodfill(500,i1,0);

     setfillstyle(7,14);
     rectangle(500,i1+20,502,i1+50);
     floodfill(501,i1+20,14);
     delay(1);

     setfillstyle(1,0);
     floodfill(501,i1+20,0);
     delay(1);
     i1--;
   }


	int i2=420;

    while(i2>=60 && x<=580)
      {         //main code for the balloons with line moving down to up and arrow


     setbkcolor(15);
     setcolor(14);
     setfillstyle(1,14);
     circle(500,i2,20);
     floodfill(500,i2,14);
     delay(0);
     setfillstyle(1,0);
     floodfill(500,i2,0);

     setfillstyle(7,14);
     rectangle(500,i2+20,502,i2+50);
     floodfill(501,i2+20,14);
     delay(1);

     setfillstyle(1,0);
     floodfill(501,i2+20,0);
     delay(1);
     i2--;
   }



	int i3=420;

    while(i3>=60 && x<=580)
      {         //main code for the balloons with line moving down to up and arrow


     setbkcolor(15);
     setcolor(14);
     setfillstyle(1,14);
     circle(560,i3,20);
     floodfill(560,i3,14);
     delay(0);
     setfillstyle(1,0);
     floodfill(560,i3,0);

     setfillstyle(7,14);
     rectangle(560,i3+20,562,i3+50);
     floodfill(561,i3+20,14);
     delay(1);

     setfillstyle(1,0);
     floodfill(561,i3+20,0);
     delay(1);
     i3--;
   }
   */

   getch();
   closegraph();
   }


