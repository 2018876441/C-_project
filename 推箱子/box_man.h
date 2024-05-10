#pragma once


#define RATIO 61  //道具图片的大小
#define SCREEN_WIDTH 960 //屏幕宽度
#define SCREEN_HEIGHT 780//屏幕高度

#define LINE 9   //行数
#define COLUMN 12//列数

#define START_X 100 //起始坐标
#define START_Y 150 //起始坐标

#define KEY_UP  'w'
#define KEY_LEFT 'a'
#define KEY_RIGHT 'd'
#define KEY_DOWN 's'
#define KEY_QUIT 'q' //退出

//判断合法性
#define isValid(next_pos) next_pos.x>=0 && next_pos.x<LINE && next_pos.y>=0 && next_pos.y<COLUMN 
#define isValidpd(BDS) BDS.x != 0 && BDS.y != 0 && map[BDS.x][BDS.y] != BOX && map[BDS.x][BDS.y] != HIT && map[BDS.x][BDS.y]!=MAN

struct _POS
{
	int x;//小人所在二维数组的行
	int y;//小人所在二维数组的列
}man;


//枚举道具类型
enum _PROPS {
	WALL,
	FLOOR,
	BOX_DES,
	MAN,
	BOX,
	HIT,
	ALL  //表示枚举的个数
};

//游戏控制方向
enum _DIRECTION
{
	UP,
	DOWN,
	LEFT,
	RIGHT
};
typedef enum _PROPS PROPS;
typedef struct _POS POS;
typedef enum _DIRECTION DIRECTION;

POS BDS;//记录上一个经过的目标点