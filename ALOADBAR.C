       /********     A Loading Bar and is made with TurboC    *********/


#include"graphics.h"
#include"conio.h"
#include"stdio.h"
#include"dos.h"

void main()
{
	int gd=DETECT,gm,i=275,x=40,y=15,j,a;
	initgraph(&gd,&gm,"C:\\TC\\bgi");

	setcolor(RED);

	arc(274,270,90,270,10);
	arc(274,270,90,270,9);
	arc(274,270,90,270,8);

	arc(375,270,270,90,8);
	arc(375,270,270,90,9);
	arc(375,270,270,90,10);

	line(275,260,375,260);
	line(275,261,375,261);

	line(275,279,375,279);
	line(275,280,375,280);

	setcolor(WHITE);
	setfillstyle(1,GREEN);
	circle(275,270,8);
	floodfill(280,275,WHITE);

	for(j=1;j<=100;j++)
	{
		gotoxy(x,y);
		printf("%d %%",j);
		a=i++;
		setcolor(GREEN);
		circle(a,270,8);
		delay(100);
	}
	getch();
}