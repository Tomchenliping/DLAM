#include<graphics.h>
#include<conio.h>

#define Width 640
#define Height 720
void drawHead()
{
	//设置圆点
	setorigin(320,240);

	//头部轮廓，使用有圆角的矩形来设置
	setfillcolor(LIGHTBLUE);
	fillroundrect(-120,-180,100,30,240,230);
	//画脸，椭圆 
	setfillcolor(WHITE);
	fillellipse(-100,-140,80,28);

	//画左右眼
	setfillcolor(WHITE);
	fillroundrect(-40,-160,0,-100,50,65);
	fillroundrect(40, -160, 0, -100, 50, 65);
	//画眼球
	setfillcolor(BLACK);
	fillcircle(-10,-120,5);
	fillcircle(10, -120, 5);
	//画鼻子
	setfillcolor(RED);
	fillcircle(0,-92,15);
	//画胡子
	line(0,-77,0,-18);
	line(-65,-85,-15,-70);
	line(65,-85,15,-70);
	line(-70,-60,-15,-60);
	line(70,-60,15,-60);
	line(-72,-40,-15,-50);
	line(72,-40,15,-50);
	arc(-70,-90,70,-18, 3.14,6.28);
}
void drawBody()
{//肚子部分
	
	circle(-5,80,55);
	//肚兜
	setfillcolor(WHITE);

	fillpie(-35,40,30,100,3.14,6.28);
	//画脖子
	setfillcolor(RED);
	fillrectangle(-65,18,48,30);
	//小铃铛
	setfillcolor(2552550);
	fillcircle(-5,38,15);
	line(-16,30,8,30);
	line(-20, 36, 10, 36);
	setfillcolor(BLACK);
	fillcircle(-5,38,2);
	line(-5,38,-5,53);
	
	//手掌手臂
	
	setfillcolor(WHITE);
	circle(-120,120,20);
	circle(110,120,20);
	//
	line(-64,30,-120,100);
	line(-70,70,-100,115);
	/*line(-120,100,-120,140);*/
	line(-70,65,-73,160);
	line(-73,160,60,160);
	line(60,160,60,60);

	line(60,70,90,120);
	/*line(110,140,110,100);*/
	line(110,100,49,30);
	setfillcolor(LIGHTBLUE);
	floodfill(0,155,BLACK);
	//脚
	setfillcolor(WHITE);
	fillroundrect(-90,160,-10,180,50,15);
	fillroundrect(0,160,80,180,50,15);
	
	
	
	
	



}

int main()
{
	initgraph(Width,Height);
	//设置背景颜色
	setbkcolor(WHITE);
	//清空屏幕之前的颜色，用新设置的背景颜色代替
	cleardevice();
	setcolor(BLACK);
	drawHead();
	drawBody();
	_getch();
	return 0;
}
