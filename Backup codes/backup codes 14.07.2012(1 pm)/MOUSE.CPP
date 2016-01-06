#include<stdio.h>

#include<conio.h>

#include<graphics.h>

#include<stdlib.h>

#include<dos.h>



 

union REGS in,out;

 

 

void load_mouse_driver()

{

 

 

out.x.cx=0;

out.x.bx=0;

in.x.ax=1;

int86(0x33,&in,&out);

 

 

in.x.ax=7;

in.x.cx=0;

in.x.dx=639;

int86(0x33,&in,&out);

in.x.ax=8;

in.x.cx=0;

in.x.dx=479;

int86(0x33,&in,&out);

 

 

 

}



 

void unload_mouse_driver()

{

in.x.ax=2;

int86(0x33,&in,&out);





}

 

 







void main()

{

int gd,gm,errorcode;

gd=DETECT;

initgraph(&gd,&gm,"c:/turboc3/bgi");

errorcode=graphresult();

if(errorcode!=grOk)

{

printf("Error intializing\n");

exit(1);

}

load_mouse_driver();

setbkcolor(BLACK);

setcolor(BLUE);

rectangle(100,100,200,200);





setfillstyle(6,10);

floodfill(101,101,BLUE);







 outtextxy(20,20,"Click on the Rectangle:");







while(1)

{

int x,y,cl,a;

 in.x.ax=3;

int86(0x33,&in,&out);





x=out.x.cx;      // To get x coordinate

y=out.x.dx;      // To get y coordinate

cl=out.x.bx;     // 1/0 ; 1 for mouse click









if(x>=100 && x<=200 && y>=100 && y<=200 && cl==1)

//checking if the mouse inside the rectangale and the user click on it...

{





    unload_mouse_driver();

cleardevice();





    outtextxy(200,200,"Enter number:");

gotoxy(39,13);

  scanf("%d",&a);





    outtextxy(200,210,"Thanks");









    //delay(5000);





    exit(1);
     }





}
}