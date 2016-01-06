
# include<graphics.h>
# include<conio.h>
# include<dos.h>
# include<stdio.h>
# include<stdlib.h>
void invalid();
void exit();
void main()
{
     int gd=DETECT,gm;
     int m;
     int y;
     char ch;
     int i;
     initgraph(&gd,&gm,"c:/turboc3/bgi");
     setcolor(10);
      setfillstyle(1,10);
      circle(20,20,20);
      floodfill(20,20,10);

      setcolor(10);
      setfillstyle(1,10);
      circle(619,20,20);
      floodfill(619,20,10);

      setcolor(10);
      setfillstyle(1,10);
      circle(619,458,20);
      floodfill(619,458,10);


      setcolor(10);
      setfillstyle(1,10);
      circle(20,458,20);
      floodfill(20,458,10);



  settextstyle(0,0,3);
  setcolor(10);
  outtextxy(25,200,"Enter the activation code");

  delay(2000);

  clearviewport();

     setcolor(4);
     setfillstyle(1,4);
     circle(320,240,40);
     floodfill(320,240,4);

     line(320,200,500,200);

     line(320,280,500,280);

     line(320,200,140,200);

     line(320,280,140,280);

     line(300,200,300,20);

     line(340,200,340,20);

     line(300,280,300,460);

     line(340,280,340,460);

     circle(280,180,20);

     circle(360,180,20);

     circle(280,300,20);

     circle(360,300,20);


     if(kbhit)
     {
     ch=getch();
     if(ch=='s')
     {
      setcolor(4);
     setfillstyle(1,4);
     circle(320,240,40);
     floodfill(320,240,4);

     line(320,200,500,200);

     line(320,280,500,280);

     line(320,200,140,200);

     line(320,280,140,280);

     line(300,200,300,20);

     line(340,200,340,20);

     line(300,280,300,460);

     line(340,280,340,460);

     setfillstyle(1,15);
     circle(280,180,20);
     floodfill(280,180,20);

     circle(360,180,20);

     circle(280,300,20);

     circle(360,300,20);
     }
     else
     {
     invalid();

     }
     }


     if(kbhit)
     {
     ch=getch();
     if(ch=='d')
     {
      setcolor(4);
     setfillstyle(1,4);
     circle(320,240,40);
     floodfill(320,240,4);

     line(320,200,500,200);

     line(320,280,500,280);

     line(320,200,140,200);

     line(320,280,140,280);

     line(300,200,300,20);

     line(340,200,340,20);

     line(300,280,300,460);

     line(340,280,340,460);

     setfillstyle(1,15);
     circle(280,180,20);
     floodfill(280,180,20);

     setfillstyle(1,15);
     circle(360,180,20);
     floodfill(360,180,20);


     circle(280,300,20);

     circle(360,300,20);
     }
      else
     {
     invalid();
     }
     }

      if(kbhit)
     {
     ch=getch();
     if(ch=='b')
     {
      setcolor(4);
     setfillstyle(1,4);
     circle(320,240,40);
     floodfill(320,240,4);

     line(320,200,500,200);

     line(320,280,500,280);

     line(320,200,140,200);

     line(320,280,140,280);

     line(300,200,300,20);

     line(340,200,340,20);

     line(300,280,300,460);

     line(340,280,340,460);

     setfillstyle(1,15);
     circle(280,180,20);
     floodfill(280,180,20);

     setfillstyle(1,15);
     circle(360,180,20);
     floodfill(360,180,20);


     setfillstyle(1,15);
     circle(280,300,20);
     floodfill(280,300,20);


     circle(360,300,20);
     }
	else
     {
     invalid();
     }
     }

      if(kbhit)
     {
     ch=getch();
     if(ch=='i')
     {
      setcolor(4);
     setfillstyle(1,4);
     circle(320,240,40);
     floodfill(320,240,4);

     line(320,200,500,200);

     line(320,280,500,280);

     line(320,200,140,200);

     line(320,280,140,280);

     line(300,200,300,20);

     line(340,200,340,20);

     line(300,280,300,460);

     line(340,280,340,460);

     setfillstyle(1,15);
     circle(280,180,20);
     floodfill(280,180,20);

     setfillstyle(1,15);
     circle(360,180,20);
     floodfill(360,180,20);


     setfillstyle(1,15);
     circle(280,300,20);
     floodfill(280,300,20);

     setfillstyle(1,15);
     circle(360,300,20);
     floodfill(360,300,20);

     }
	else
     {
     invalid();
     }
     }

     if(kbhit)
     {
     ch=getch();
     if(ch=='b')
     {
      setcolor(4);
     setfillstyle(1,4);
     circle(320,240,40);
     floodfill(320,240,4);

     line(320,200,500,200);

     line(320,280,500,280);

     line(320,200,140,200);

     line(320,280,140,280);

     line(300,200,300,20);

     line(340,200,340,20);

     line(300,280,300,460);

     line(340,280,340,460);

     setfillstyle(1,15);
     circle(280,180,20);
     floodfill(280,180,20);

     setfillstyle(1,15);
     circle(360,180,20);
     floodfill(360,180,20);


     setfillstyle(1,15);
     circle(280,300,20);
     floodfill(280,300,20);

     setfillstyle(1,15);
     circle(360,300,20);
     floodfill(360,300,20);

     for(i=0;i<=200;i++)
     {
      bar(305,i,335,i);
      delay(5);
     }

     }
	else
     {
     invalid();
     }
     }

      if(kbhit)
     {
     ch=getch();
     if(ch=='o')
     {
      setcolor(4);
     setfillstyle(1,4);
     circle(320,240,40);
     floodfill(320,240,4);

     line(320,200,500,200);

     line(320,280,500,280);

     line(320,200,140,200);

     line(320,280,140,280);

     line(300,200,300,20);

     line(340,200,340,20);

     line(300,280,300,460);

     line(340,280,340,460);

     setfillstyle(1,15);
     circle(280,180,20);
     floodfill(280,180,20);

     setfillstyle(1,15);
     circle(360,180,20);
     floodfill(360,180,20);


     setfillstyle(1,15);
     circle(280,300,20);
     floodfill(280,300,20);

     setfillstyle(1,15);
     circle(360,300,20);
     floodfill(360,300,20);


      bar(305,i,335,i);


      for(i=480;i>=280;i--)
     {
      bar(305,i,335,i);
      delay(5);
     }

     }
	else
     {
     invalid();
     }
     }

	 if(kbhit)
     {
     ch=getch();
     if(ch=='n')
     {
      setcolor(4);
     setfillstyle(1,4);
     circle(320,240,40);
     floodfill(320,240,4);

     line(320,200,500,200);

     line(320,280,500,280);

     line(320,200,140,200);

     line(320,280,140,280);

     line(300,200,300,20);

     line(340,200,340,20);

     line(300,280,300,460);

     line(340,280,340,460);

     setfillstyle(1,15);
     circle(280,180,20);
     floodfill(280,180,20);

     setfillstyle(1,15);
     circle(360,180,20);
     floodfill(360,180,20);


     setfillstyle(1,15);
     circle(280,300,20);
     floodfill(280,300,20);

     setfillstyle(1,15);
     circle(360,300,20);
     floodfill(360,300,20);


      bar(305,0,335,200);



      bar(305,480,335,280);

      int i=0;
      while(i<=280)
      {

      bar(i,225,i,255);
      delay(5);
      i++;
     }

     }
	else
     {
     invalid();
     }
     }
	 if(kbhit)
     {
     ch=getch();
     if(ch=='a')
     {
      setcolor(4);
     setfillstyle(1,4);
     circle(320,240,40);
     floodfill(320,240,4);

     line(320,200,500,200);

     line(320,280,500,280);

     line(320,200,140,200);

     line(320,280,140,280);

     line(300,200,300,20);

     line(340,200,340,20);

     line(300,280,300,460);

     line(340,280,340,460);

     setfillstyle(1,15);
     circle(280,180,20);
     floodfill(280,180,20);

     setfillstyle(1,15);
     circle(360,180,20);
     floodfill(360,180,20);


     setfillstyle(1,15);
     circle(280,300,20);
     floodfill(280,300,20);

     setfillstyle(1,15);
     circle(360,300,20);
     floodfill(360,300,20);

      bar(305,0,335,200);

      bar(305,480,335,280);

      bar(0,225,280,255);


      int i=640;
      while(i>=360)
      {

      bar(i,225,i,255);
      delay(5);
      i--;
     }

     }
	else
     {
     invalid();
     }
     }

     setcolor(4);
     setfillstyle(1,4);
     circle(320,240,40);
     floodfill(320,240,4);
     setcolor(4);



     line(320,200,500,200);

     line(320,280,500,280);

     line(320,200,140,200);

     line(320,280,140,280);

     line(300,200,300,20);

     line(340,200,340,20);

     line(300,280,300,460);

     line(340,280,340,460);

     setfillstyle(1,15);
     circle(280,180,20);
     floodfill(280,180,20);

     setfillstyle(1,15);
     circle(360,180,20);
     floodfill(360,180,20);


     setfillstyle(1,15);
     circle(280,300,20);
     floodfill(280,300,20);

     setfillstyle(1,15);
     circle(360,300,20);
     floodfill(360,300,20);

      bar(305,0,335,196);

      bar(305,480,335,282);

      bar(0,225,278,255);

      bar(0,225,280,225);




     setcolor(4);
     setfillstyle(1,4);
     circle(320,240,40);
     floodfill(320,240,4);
     setcolor(4);



     line(320,200,500,200);

     line(320,280,500,280);

     line(320,200,140,200);

     line(320,280,140,280);

     line(300,200,300,20);

     line(340,200,340,20);

     line(300,280,300,460);

     line(340,280,340,460);

     setfillstyle(1,15);
     circle(280,180,20);
     floodfill(280,180,20);

     setfillstyle(1,15);
     circle(360,180,20);
     floodfill(360,180,20);


     setfillstyle(1,15);
     circle(280,300,20);
     floodfill(280,300,20);

     setfillstyle(1,15);
     circle(360,300,20);
     floodfill(360,300,20);

      bar(305,0,335,196);

      bar(305,480,335,282);

      bar(0,225,278,255);

      bar(0,225,280,225);

      setcolor(10);
      setfillstyle(1,10);
      circle(20,20,20);
      floodfill(20,20,10);

      setcolor(10);
      setfillstyle(1,10);
      circle(619,20,20);
      floodfill(619,20,10);

      setcolor(10);
      setfillstyle(1,10);
      circle(619,458,20);
      floodfill(619,458,10);


      setcolor(10);
      setfillstyle(1,10);
      circle(20,458,20);
      floodfill(20,458,10);

      int t=20,j=20,t1=619,j1=20,t2=619,j2=458,t3=20,j3=458;

      while(t<=320 && j<=230 && t1>=280 &&j1<=230 && t2>=320 && j2>=230 && t3<=360 && j3>=250 )
      {
      line(20,20,t,j);
      line(619,20,t1,j1);
      line(619,458,t2,j2);
      line(20,458,t3,j3);
      t++;
      j++;
      t1--;
      j1++;
      t2--;
      j2--;
      t3++;
      j3--;
      delay(10);
      }




      delay(400);







     setcolor(10);
     setfillstyle(1,10);
     circle(320,240,40);
     floodfill(320,240,10);
     setcolor(4);



     line(320,200,500,200);

     line(320,280,500,280);

     line(320,200,140,200);

     line(320,280,140,280);

     line(300,200,300,20);

     line(340,200,340,20);

     line(300,280,300,460);

     line(340,280,340,460);

     setfillstyle(1,15);
     circle(280,180,20);
     floodfill(280,180,20);

     setfillstyle(1,15);
     circle(360,180,20);
     floodfill(360,180,20);


     setfillstyle(1,15);
     circle(280,300,20);
     floodfill(280,300,20);

     setfillstyle(1,15);
     circle(360,300,20);
     floodfill(360,300,20);

      bar(305,0,335,196);

      bar(305,480,335,282);

      bar(0,225,278,255);

      bar(0,225,280,225);




     setcolor(4);
     setfillstyle(1,4);
     circle(320,240,40);
     floodfill(320,240,4);
     setcolor(4);



     line(320,200,500,200);

     line(320,280,500,280);

     line(320,200,140,200);

     line(320,280,140,280);

     line(300,200,300,20);

     line(340,200,340,20);

     line(300,280,300,460);

     line(340,280,340,460);

     setfillstyle(1,15);
     circle(280,180,20);
     floodfill(280,180,20);

     setfillstyle(1,15);
     circle(360,180,20);
     floodfill(360,180,20);


     setfillstyle(1,15);
     circle(280,300,20);
     floodfill(280,300,20);

     setfillstyle(1,15);
     circle(360,300,20);
     floodfill(360,300,20);

      bar(305,0,335,196);

      bar(305,480,335,282);

      bar(0,225,278,255);

      bar(0,225,280,225);

      setcolor(10);
      setfillstyle(1,10);
      circle(20,20,20);
      floodfill(20,20,10);

      setcolor(10);
      setfillstyle(1,10);
      circle(619,20,20);
      floodfill(619,20,10);

      setcolor(10);
      setfillstyle(1,10);
      circle(619,458,20);
      floodfill(619,458,10);


      setcolor(10);
      setfillstyle(1,10);
      circle(20,458,20);
      floodfill(20,458,10);


      setcolor(10);
      line(20,20,619,20);
      line(619,20,619,458);
      line(619,458,20,458);
      line(20,458,20,20);

     delay(50);

     setcolor(10);
     setfillstyle(1,10);
     circle(320,240,40);
     floodfill(320,240,10);




delay(500);
int r=640;
int l=0;

while(r>=300 && l<=340)
{

setcolor(0);
setfillstyle(1,2);
rectangle(r,0,r-310,480);
delay(30);
floodfill(r,30,0);


setcolor(0);
setfillstyle(1,2);
rectangle(l,0,l+320,480);
floodfill(l,30,0);


exit();

r--;
l++;
 }

	setbkcolor(1);

	settextstyle(0,0,4);
	setcolor(4);
	outtextxy(220,200,"Welcome");




     getch();
     closegraph();

     }

     void invalid()
     {

	  clearviewport();
     settextstyle(0,0,4);
     outtextxy(120,240,"Invalid password");
     delay(1500);
     clearviewport();
     exit(0);

     }
     void exit()
{
     char ch;
     if(kbhit())
     {
     ch=getch();
     if(ch==27)
     {
     exit(0);
     }
     }
}
