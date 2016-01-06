
# include<graphics.h>
# include<conio.h>
# include<dos.h>
# include<stdlib.h>

void manuswitharrow();
void manuswithoutarrow();
void main()
{
     int gd=DETECT,gm;
     int m;
     int y;
     char ch;
     initgraph(&gd,&gm,"c:/turboc3/bgi");

     int i=420;
     int x=85;
     int z=530;

     manuswitharrow();
     settextstyle(0,0,2);
     outtextxy(30,240,"press w for shoot");
     delay(1000);
     if(kbhit)
     {
     ch=getch();
     if(ch=='w')
     {

     while(i>=60 && x<=580)
      {         //main code for the balloons with line moving down to up and arrow

      manuswithoutarrow();
      setcolor(16);
      settextstyle(0,0,2);
     outtextxy(30,240,"press w for shoot");

     setbkcolor(15);
     setcolor(14);
     setfillstyle(1,14);
     circle(z,i,20);
     floodfill(z,i,14);
     delay(0);
     setfillstyle(1,0);
     floodfill(z,i,0);

     setfillstyle(7,14);
     rectangle(z,i+20,z+2,i+50);
     floodfill(z+1,i+20,14);
     delay(1);

     setfillstyle(1,0);
     floodfill(z+1,i+20,0);
     delay(1);
     i--;

	setbkcolor(15);
	setcolor(4);

	setfillstyle(1,4);
	line(x,60,x+45,60);   // very important codes because it will move
	floodfill(x,60,4);

	setfillstyle(1,0);   // very important codes because it will move
	floodfill(x,60,0);

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

	if( x==i+370 )
	{
	  int a=80;
	  int b=550;
	  int c=510;
	  int d=40;
	  settextstyle(0,0,4);
	  outtextxy(320,240,"Boom");

	  while(a<=105 && b<=575 && c>=495 && d>=25)
	  {
	  setcolor(4);

	  line(530,a,530,a+10);
	  line(b,60,b+10,60);
	  line(c,60,c-10,60);
	  line(530,d,530,d-10);
	  delay(40);

	  a++;
	  b++;
	  c--;
	  d--;
	  }
	  delay(600);
	  setcolor(16);
	  settextstyle(0,0,4);
	  outtextxy(320,240,"Boom");
	  setcolor(2);
	  settextstyle(0,0,4);
	  outtextxy(300,340,"great job");
       }

	 x++;
     }
     }
     }

	getch();
	closegraph();
	}

       /*


	void arrow()
	{

	for(x=85;x<=580;x++)
	{
	setbkcolor(10);
	setcolor(4);

	setfillstyle(1,4);
	line(x,60,x+45,60);   // very important codes because it will move
	floodfill(x,60,4);

	setfillstyle(1,0);   // very important codes because it will move
	floodfill(x,60,0);

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

	if( x==i+370 )
	{
	  int a=80;
	  int b=550;
	  int c=510;
	  int d=40;

	  while(a<=100 && b<=570 && c>=500 && d>=30)
	  {
	  setcolor(4);

	  line(530,a,530,a+10);
	  line(b,60,b+10,60);
	  line(c,60,c-10,60);
	  line(530,d,530,d-10);
	  delay(40);

	  a++;
	  b++;
	  c--;
	  d--;


	  }
       }
       }
       */

       void manuswitharrow()
       {

	setbkcolor(15);      // manus
       setcolor(4);
	line(55,18,78,35);          //HAT
	line(55,18,55,25);
	line(63,32,60,30);
	line(60,30,58,27);
	line(58,27,55,25);
	line(55,25,50,23);
	line(50,23,46,21);
	line(46,21,41,19);
	line(41,19,38,17);
	line(60,30,58,31);
	line(58,31,55,29);
	line(55,29,50,27);
	line(50,27,45,24);
	line(45,24,38,17);
	line(55,29,55,35);
	line(55,35,78,35);

   setfillstyle(1,1);
  floodfill(56,25,4);


	line(55,35,53,39);          //HAIR
	line(53,39,53,42);
	line(53,42,56,39);
	line(56,39,59,44);
	line(59,44,63,40);
	line(63,40,77,43);
	line(77,43,79,41);
	line(79,41,77,38);
	line(77,38,76,35);
	setfillstyle(1,7);
	floodfill(56,37,4);




  line(53,42,53,45);    //FACE
  line(53,45,53,48);
  line(53,48,55,52);
  line(55,52,58,54);
  line(58,54,61,55);
  line(61,55,64,55);
  line(64,55,69,55);
  line(69,55,72,54);
  line(77,43,76,45);
  line(76,45,75,47);
  line(75,47,73,54);



			   //eyes
  setcolor(1);
  circle(64,45,1);        //left eye
  circle(71,45,1);        //right eye
  setfillstyle(1,2);
  floodfill(64,45,1);
  setfillstyle(1,2);
  floodfill(71,45,1);

  line(62,43,64,43);   // eye vru
  line(69,43,72,43);



 line(67,46,69,49);     //nose
 line(69,49,66,49);


  ellipse(66,52,180,0,2,1);  //lip



  setcolor(4);        //throught
  line(58,54,58,58);
  line(70,54,70,58);


  line(50,59,85,59);     //right_hand
  line(49,64,91,64);
  arc(85,89,137,145,45);




  line(85,59,89,58);      //fingers
  line(89,58,92,57);
  line(92,57,93,57);
  line(93,57,93,59);
  line(93,59,92,59);
  line(93,59,93,61);
  line(93,61,91,61);
  line(93,61,93,63);
  line(93,63,91,64);


  line(49,64,44,63);     //half_sleeves
  line(44,63,45,59);
  line(45,59,50,59);
  line(55,59,57,64);
  line(66,65,68,68);
  line(68,68,78,68);
  line(78,68,76,65);



  line(78,68,110,68);          //left hand
  line(93,63,105,63);


  line(105,63,109,62);        //fingers
  line(109,62,112,61);
  line(112,61,113,61);
  line(113,61,113,63);
  line(113,63,112,63);
  line(113,63,113,65);
  line(113,65,111,65);
  line(113,65,113,67);
  line(113,67,110,68);


  line(48,65,48,90);         //t_shirt
  line(75,68,75,93);
  line(48,90,52,93);
  line(52,93,55,95);
  line(55,95,69,95);
  line(69,95,75,93);
  setfillstyle(1,2);
  floodfill(49,67,4);

  line(53,81,58,82);         //pockets
  line(53,81,53,86);
  line(58,82,58,87);
  line(53,86,58,87);
  line(68,81,71,82);
  line(71,82,71,85);
  line(63,65,63,76);
  line(63,82,63,95);

  setcolor(1);     //buttons
  circle(61,69,1);
  circle(65,69,1);
  circle(65,76,1);
  circle(65,90,1);
  circle(61,90,1);
  circle(61,84,1);


  setcolor(4);            //pant
  line(50,92,43,115);
  line(61,95,57,113);
  line(59,103,63,111);
  line(72,95,76,113);
  line(43,115,57,113);
  line(63,111,76,113);
    setfillstyle(1,3);
  floodfill(52,94,4);
  setfillstyle(1,3);
  floodfill(70,99,4);

  line(48,115,46,125);      //legs
  line(56,113,54,124);
  line(75,113,77,125);
  line(68,111,70,127);

  line(50,115,49,124);      // muja
  line(52,115,51,124);
  line(70,113,72,125);
  line(73,113,75,125);




  line(44,125,54,124);     //left leg shoe
  line(77,125,68,127);
  line(44,125,42,131);
  line(54,124,55,137);
  line(55,137,35,138);
  line(35,138,33,133);
  line(33,133,36,135);
  line(36,135,54,124);

  line(68,127,70,140);     // right leg shoe
  line(77,125,79,133);
  line(70,140,90,141);
  line(90,141,92,136);
  line(92,136,89,138);
  line(89,138,68,127);


  line(46,130,49,134);   // jutar fita baam paa

  line(76,132,73,137);   // jutar fita daan paa

  setcolor(4);
  line(52,65,56,72);         //belt
  line(56,72,60,78);
  line(60,78,65,85);
  line(65,85,70,90);
  line(70,90,75,93);

  line(56,65,60,72);
  line(60,72,64,78);
  line(64,78,69,84);
  line(69,84,74,89);

   /* ellipse(380,100,270,0,10,30);
  ellipse(370,100,0,180,20,10);
  ellipse(360,100,180,270,10,30);*/
//

   ellipse(80,60,270,90,30,30); //dhonuk
  ellipse(85,60,270,90,30,30);
  setcolor(6);
  ellipse(75,60,270,90,20,30);
   setcolor(4);
   setfillstyle(1,6);//dhonuk ar color
   floodfill(110,50,4);
   setfillstyle(1,6);//dhonuk ar color
   floodfill(110,70,4);
	line(85,60,130,60);   // very important codes because it will move
	line(125,55,130,60);  // important code
	line(125,65,130,60);  // important code

	}

	void manuswithoutarrow()
	{

	setbkcolor(15);      // manus
       setcolor(4);
	line(55,18,78,35);          //HAT
	line(55,18,55,25);
	line(63,32,60,30);
	line(60,30,58,27);
	line(58,27,55,25);
	line(55,25,50,23);
	line(50,23,46,21);
	line(46,21,41,19);
	line(41,19,38,17);
	line(60,30,58,31);
	line(58,31,55,29);
	line(55,29,50,27);
	line(50,27,45,24);
	line(45,24,38,17);
	line(55,29,55,35);
	line(55,35,78,35);

   setfillstyle(1,1);
  floodfill(56,25,4);


	line(55,35,53,39);          //HAIR
	line(53,39,53,42);
	line(53,42,56,39);
	line(56,39,59,44);
	line(59,44,63,40);
	line(63,40,77,43);
	line(77,43,79,41);
	line(79,41,77,38);
	line(77,38,76,35);
	setfillstyle(1,7);
	floodfill(56,37,4);




  line(53,42,53,45);    //FACE
  line(53,45,53,48);
  line(53,48,55,52);
  line(55,52,58,54);
  line(58,54,61,55);
  line(61,55,64,55);
  line(64,55,69,55);
  line(69,55,72,54);
  line(77,43,76,45);
  line(76,45,75,47);
  line(75,47,73,54);



			   //eyes
  setcolor(1);
  circle(64,45,1);        //left eye
  circle(71,45,1);        //right eye
  setfillstyle(1,2);
  floodfill(64,45,1);
  setfillstyle(1,2);
  floodfill(71,45,1);

  line(62,43,64,43);   // eye vru
  line(69,43,72,43);



 line(67,46,69,49);     //nose
 line(69,49,66,49);


  ellipse(66,52,180,0,2,1);  //lip



  setcolor(4);        //throught
  line(58,54,58,58);
  line(70,54,70,58);


  line(50,59,85,59);     //right_hand
  line(49,64,91,64);
  arc(85,89,137,145,45);




  line(85,59,89,58);      //fingers
  line(89,58,92,57);
  line(92,57,93,57);
  line(93,57,93,59);
  line(93,59,92,59);
  line(93,59,93,61);
  line(93,61,91,61);
  line(93,61,93,63);
  line(93,63,91,64);


  line(49,64,44,63);     //half_sleeves
  line(44,63,45,59);
  line(45,59,50,59);
  line(55,59,57,64);
  line(66,65,68,68);
  line(68,68,78,68);
  line(78,68,76,65);



  line(78,68,110,68);          //left hand
  line(93,63,105,63);


  line(105,63,109,62);        //fingers
  line(109,62,112,61);
  line(112,61,113,61);
  line(113,61,113,63);
  line(113,63,112,63);
  line(113,63,113,65);
  line(113,65,111,65);
  line(113,65,113,67);
  line(113,67,110,68);


  line(48,65,48,90);         //t_shirt
  line(75,68,75,93);
  line(48,90,52,93);
  line(52,93,55,95);
  line(55,95,69,95);
  line(69,95,75,93);
  setfillstyle(1,2);
  floodfill(49,67,4);

  line(53,81,58,82);         //pockets
  line(53,81,53,86);
  line(58,82,58,87);
  line(53,86,58,87);
  line(68,81,71,82);
  line(71,82,71,85);
  line(63,65,63,76);
  line(63,82,63,95);

  setcolor(1);     //buttons
  circle(61,69,1);
  circle(65,69,1);
  circle(65,76,1);
  circle(65,90,1);
  circle(61,90,1);
  circle(61,84,1);


  setcolor(4);            //pant
  line(50,92,43,115);
  line(61,95,57,113);
  line(59,103,63,111);
  line(72,95,76,113);
  line(43,115,57,113);
  line(63,111,76,113);
    setfillstyle(1,3);
  floodfill(52,94,4);
  setfillstyle(1,3);
  floodfill(70,99,4);

  line(48,115,46,125);      //legs
  line(56,113,54,124);
  line(75,113,77,125);
  line(68,111,70,127);

  line(50,115,49,124);      // muja
  line(52,115,51,124);
  line(70,113,72,125);
  line(73,113,75,125);




  line(44,125,54,124);     //left leg shoe
  line(77,125,68,127);
  line(44,125,42,131);
  line(54,124,55,137);
  line(55,137,35,138);
  line(35,138,33,133);
  line(33,133,36,135);
  line(36,135,54,124);

  line(68,127,70,140);     // right leg shoe
  line(77,125,79,133);
  line(70,140,90,141);
  line(90,141,92,136);
  line(92,136,89,138);
  line(89,138,68,127);


  line(46,130,49,134);   // jutar fita baam paa

  line(76,132,73,137);   // jutar fita daan paa

  setcolor(4);
  line(52,65,56,72);         //belt
  line(56,72,60,78);
  line(60,78,65,85);
  line(65,85,70,90);
  line(70,90,75,93);

  line(56,65,60,72);
  line(60,72,64,78);
  line(64,78,69,84);
  line(69,84,74,89);

   /* ellipse(380,100,270,0,10,30);
  ellipse(370,100,0,180,20,10);
  ellipse(360,100,180,270,10,30);*/
//

   ellipse(80,60,270,90,30,30); //dhonuk
  ellipse(85,60,270,90,30,30);
  setcolor(6);
  ellipse(75,60,270,90,20,30);
   setcolor(4);
   setfillstyle(1,6);//dhonuk ar color
   floodfill(110,50,4);
   setfillstyle(1,6);//dhonuk ar color
   floodfill(110,70,4);


   }