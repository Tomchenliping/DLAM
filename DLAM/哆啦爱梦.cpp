#include<graphics.h>
#include<conio.h>

#define Width 640
#define Height 720
void drawHead()
{
	//����Բ��
	setorigin(320,240);

	//ͷ��������ʹ����Բ�ǵľ���������
	setfillcolor(LIGHTBLUE);
	fillroundrect(-120,-180,100,30,240,230);
	//��������Բ 
	setfillcolor(WHITE);
	fillellipse(-100,-140,80,28);

	//��������
	setfillcolor(WHITE);
	fillroundrect(-40,-160,0,-100,50,65);
	fillroundrect(40, -160, 0, -100, 50, 65);
	//������
	setfillcolor(BLACK);
	fillcircle(-10,-120,5);
	fillcircle(10, -120, 5);
	//������
	setfillcolor(RED);
	fillcircle(0,-92,15);
	//������
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
{//���Ӳ���
	
	circle(-5,80,55);
	//�Ƕ�
	setfillcolor(WHITE);

	fillpie(-35,40,30,100,3.14,6.28);
	//������
	setfillcolor(RED);
	fillrectangle(-65,18,48,30);
	//С����
	setfillcolor(2552550);
	fillcircle(-5,38,15);
	line(-16,30,8,30);
	line(-20, 36, 10, 36);
	setfillcolor(BLACK);
	fillcircle(-5,38,2);
	line(-5,38,-5,53);
	
	//�����ֱ�
	
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
	//��
	setfillcolor(WHITE);
	fillroundrect(-90,160,-10,180,50,15);
	fillroundrect(0,160,80,180,50,15);
	
	
	
	
	



}

int main()
{
	initgraph(Width,Height);
	//���ñ�����ɫ
	setbkcolor(WHITE);
	//�����Ļ֮ǰ����ɫ���������õı�����ɫ����
	cleardevice();
	setcolor(BLACK);
	drawHead();
	drawBody();
	_getch();
	return 0;
}
