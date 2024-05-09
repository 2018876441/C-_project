#include<iostream>
#include<easyx.h>
#include<string>
#include<conio.h>//热键头文件
#include"box_man.h"
using namespace std;
ExMessage msg = { 0 };//定义消息结构体变量，就是反馈鼠标和键盘操作

IMAGE  images[ALL];//图片数组，来表示图片
//用数字来表示道具：墙：0，地板：1，箱子目的地：2，人：3，箱子：4，命中目标：5；
//游戏地图
int map[9][12] = {
	{0,0,0,0,0,0,0,0,0,0,0,0},
	{0,1,0,1,1,1,1,1,1,1,0,0},
	{0,1,4,1,0,2,1,0,2,1,0,0},
	{0,1,0,1,0,1,0,0,1,1,1,0},
	{0,1,0,2,0,1,1,4,1,1,1,0},
	{0,1,1,1,0,3,1,1,1,4,1,0},
	{0,1,2,1,1,4,1,1,1,1,1,0},
	{0,1,0,0,1,0,1,1,0,0,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0},
};
//改变道具位置
void changeMap(POS *pos,PROPS prop)
{
	map[pos->x][pos->y] = prop;
	putimage(START_X + RATIO * pos->y, START_Y + RATIO * pos->x, &images[prop]);
}

//实现游戏四个方向的控制
void gameControl(DIRECTION direct)
{
	
	POS next_pos = man;
	POS next_next_pos = man;
	switch (direct)
	{
	case UP:next_pos.x--;
		next_next_pos.x -= 2;
		break;
	case DOWN:next_pos.x++;
		next_next_pos.x += 2;
		break;
	case LEFT:next_pos.y--;
		next_next_pos.y -= 2;
		break;
	case RIGHT:next_pos.y++;
		next_next_pos.y += 2;
		break;
	}
	
	if (isValid(next_pos) && map[next_pos.x][next_pos.y] == FLOOR)
	{
		changeMap(&next_pos, MAN);//小人前移
		changeMap(&man ,FLOOR);//更新地板的位置，到小人之前的位置
		man = next_pos;//更新小人位置坐标
	}
	else if (isValid(next_next_pos) && map[next_pos.x][next_pos.y] == BOX)
	{//如果人的前方是箱子
		//两种情况，前面是地板或者是箱子目的地
		if (map[next_next_pos.x][next_next_pos.y] == FLOOR)
		{
			changeMap(&next_next_pos, BOX);
			changeMap(&next_pos, MAN);
			changeMap(&man, FLOOR);
			man = next_pos;
		}
		else if(map[next_next_pos.x][next_next_pos.y]==BOX_DES) {
			changeMap(&next_next_pos, HIT);
			changeMap(&next_pos, MAN);
			changeMap(&man, FLOOR);
			man = next_pos;
		}

	}
	
	
	
}

//判断游戏结束
bool isGameOver()
{
	for(int i=0;i<LINE;i++)
		for (int j = 0; j < COLUMN; j++)
			if (map[i][j] == BOX_DES) return false;
	return true;
}

void centerText()//居中文本
{
	//来个矩形
	int rx = SCREEN_WIDTH/2-100;
	int ry = SCREEN_HEIGHT/2-100;
	int rw = 200;
	int rh = 200;
	setfillcolor(YELLOW);
	fillrectangle(rx, ry, rx + rw, ry + rh);

	//绘制文字
	settextcolor(RED);
	setbkmode(TRANSPARENT);
	char str[] = "恭喜通关游戏";
	//居中的公式
	int hSpace = (rw - textwidth(str)) / 2;
	int vSpace = (rh - textheight(str)) / 2;
	outtextxy(rx + hSpace, ry + vSpace, str);
}

//结束场景
void GameOver()
{
	IMAGE bg;
	loadimage(&bg, _T("access/blackground.bmp"), SCREEN_WIDTH, SCREEN_HEIGHT, true);
	putimage(0, 0, &bg);
	setfillcolor(BLACK);
	centerText();
}

int main()
{
	IMAGE bg_img;//定义背景图片
	//加载背景
	initgraph(SCREEN_WIDTH,SCREEN_HEIGHT);
	loadimage(&bg_img, _T("access/blackground.bmp"), SCREEN_WIDTH, SCREEN_HEIGHT,true);//导入图片
	putimage(0, 0, &bg_img);//打印图片
	//加载道具
	loadimage(&images[WALL], _T("access/wall_right.bmp"), RATIO, RATIO, true);
	loadimage(&images[FLOOR], _T("access/floor.bmp"), RATIO, RATIO, true);
	loadimage(&images[BOX_DES], _T("access/des.bmp"), RATIO, RATIO, true);
	loadimage(&images[MAN], _T("access/man.bmp"), RATIO, RATIO, true);
	loadimage(&images[BOX], _T("access/box.bmp"), RATIO, RATIO, true);
	loadimage(&images[HIT], _T("access/box.bmp"), RATIO, RATIO, true);

	for (int i = 0; i < LINE; i++)
	{
		for (int j = 0; j < COLUMN; j++)
		{
			if (map[i][j] == MAN)
			{
				man.x = i;
				man.y = j;
			}
			putimage(START_X+RATIO*j, START_Y+RATIO*i, &images[map[i][j]]);
		}
	}

	//游戏环节
	bool quit = false;//是否退出

	do 
	{
		//另一种识别键鼠方法
		//if (_kbhit()) //玩家按键
		//{
		//	char ch = _getch();
		//	if (ch == KEY_UP) {
		//		gameControl(UP);
		//	}
		//	else if (ch == KEY_DOWN) {
		//		gameControl(DOWN);
		//	}
		//	else if (ch == KEY_LEFT) {
		//		gameControl(LEFT);
		//	}
		//	else if (ch == KEY_RIGHT) {
		//		gameControl(RIGHT);
		//	}
		//	else if (ch == KEY_QUIT) {
		//		quit = true;
		//	}	
		//}
		
		//easyx的键盘识别
		if (peekmessage(&msg, EX_KEY));

		if (msg.message == WM_KEYDOWN)
		{
			switch (msg.vkcode)
			{
			case 'W':
				gameControl(UP);
				break;
			case 'S':
				gameControl(DOWN);
				break;
			case 'A':
				gameControl(LEFT);
				break;
			case 'D':
				gameControl(RIGHT);
				break;
			case 'Q':
				quit = true;
				break;
			}
		}
		if (isGameOver()==true)
		{
			GameOver();
		}
		Sleep(100);//休眠0.1秒
	} while (quit == false);

	//游戏结束,释放资源
	closegraph();
	system("pause");
	return 0;
}
