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
	//이곳에 변수 선언
	image* _bgImg;
	//image* _player;
	//image* _ball;
	image* _small;



	RECT _rcImage;
	RECT _temp;

	tagPuzzle _puzzle[9];

	int _alpha;			//내가 변경시킬 알파값
	int _count;			//페이드인,아웃시 속도 조절용

	int temp1;

	int random;

	bool endGame;

	RECT _rc;

	

	
	

public:
	HRESULT init();
	void release();
	void update();
	void render(HDC hdc);
	//이곳에 함수 선언

	void move();
	


	mainGame() {}
	~mainGame() {}
};

