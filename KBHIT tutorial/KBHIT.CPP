#include<stdio.h>
#include<conio.h>
#include<graphics.h>


char key=0; //to remove garbage key is set to 0


void keycheck();
main()
{
   int  gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\tc\\bgi"); 


   outtextxy(220,240,"press any key (right arrow,left arrow or ESC)");

   while(key!=27)

	{
	 if(kbhit()) //if any key is pressed then kbhit() returnshe true otherwise false (0)
	 keycheck();
	}

 getch();
 closegraph();
}


void keycheck()
{
  key=getch(); //getch() get the pressed key from the buffer and stores it in variable key


//now check for which key is pressed (can use switch or if else)


switch(key){

	     case 77://77 is for the right arrow key
		     //your code example
		     circle(400,100,50);
		     break;

	     case 75:circle(100,100,50);
		     break;

	     case 27: //ESC key which will exit the program
		     break;

	     default:
		     break;
	    } //switch ends
}//keycheck ends