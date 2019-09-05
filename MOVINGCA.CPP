#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int i;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C://turboc3//BGI");
setcolor(RED);
setbkcolor(CYAN);
for(i=0;i<=100;i+=5)
		       {
		       initgraph(&gd,&gm,"C://turboc3//BGI");
		       setcolor(RED);
		       setbkcolor(CYAN);
		       rectangle(100+i,100,400+i,200);
		       setfillstyle(SLASH_FILL,RED);
		       floodfill(200+i,150,RED);
		       setcolor(BLUE);
		       circle(150+i,250,50);
		       circle(350+i,250,50);
		       if(i%2==0)
		       setfillstyle(SLASH_FILL,BLUE);
		       else
		       setfillstyle(BKSLASH_FILL,BLUE);
		       floodfill(350+i,250,BLUE);
		       floodfill(150+i,250,BLUE);
		       delay(500);
		       clrscr();
		       }
		       initgraph(&gd,&gm,"C://turboc3//BGI");
getch();
closegraph();
}