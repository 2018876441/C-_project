#pragma once


#define RATIO 61  //����ͼƬ�Ĵ�С
#define SCREEN_WIDTH 960 //��Ļ���
#define SCREEN_HEIGHT 780//��Ļ�߶�

#define LINE 9   //����
#define COLUMN 12//����

#define START_X 100 //��ʼ����
#define START_Y 150 //��ʼ����

#define KEY_UP  'w'
#define KEY_LEFT 'a'
#define KEY_RIGHT 'd'
#define KEY_DOWN 's'
#define KEY_QUIT 'q' //�˳�

//�жϺϷ���
#define isValid(next_pos) next_pos.x>=0 && next_pos.x<LINE && next_pos.y>=0 && next_pos.y<COLUMN 
#define isValidpd(BDS) BDS.x != 0 && BDS.y != 0 && map[BDS.x][BDS.y] != BOX && map[BDS.x][BDS.y] != HIT && map[BDS.x][BDS.y]!=MAN

struct _POS
{
	int x;//С�����ڶ�ά�������
	int y;//С�����ڶ�ά�������
}man;


//ö�ٵ�������
enum _PROPS {
	WALL,
	FLOOR,
	BOX_DES,
	MAN,
	BOX,
	HIT,
	ALL  //��ʾö�ٵĸ���
};

//��Ϸ���Ʒ���
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

POS BDS;//��¼��һ��������Ŀ���