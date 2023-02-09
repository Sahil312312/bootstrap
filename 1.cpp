#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()

{
   int gd=DETECT,gm;
   int x,y,i,flag=0;
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");
   x=getmaxx()/2;
   y=30;
   setbkcolor(9);
   moveto(100,300);
   while(!kbhit())
   {
   if(y>=getmaxy()-30||y<=30)flag=!flag;
   setcolor(4);
   setfillstyle(3,7);
   circle(x,y,70);
   moveto(300,700);

   floodfill(x,y,RED);
   delay(5);
   cleardevice();
   if(flag)
   {
   y=y+5;
   }
   else
   {
   y=y-5;
   }
   }
   getch();
   closegraph();
   return 0;
   }