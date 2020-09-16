#pragma once
#include "gameNode.h"
struct tagPuzzle
{
	RECT piece;
	int number;
	int position;
	char str[100];
	
	
};
class mainGame : public gameNode
{
private:
	//�̰��� ���� ����
	image* _bgImg;
	//image* _player;
	//image* _ball;
	image* _small;



	RECT _rcImage;
	RECT _temp;

	tagPuzzle _puzzle[9];

	int _alpha;			//���� �����ų ���İ�
	int _count;			//���̵���,�ƿ��� �ӵ� ������

	int temp1;

	int random;

	bool endGame;

	RECT _rc;

	

	
	

public:
	HRESULT init();
	void release();
	void update();
	void render(HDC hdc);
	//�̰��� �Լ� ����

	void move();
	


	mainGame() {}
	~mainGame() {}
};

