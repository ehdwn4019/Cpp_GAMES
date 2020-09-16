#pragma once
#include "gameNode.h"

class mainGame : public gameNode
{
private:
	//이곳에 변수 선언
	//HDC hdc;
	HWND hwnd;
	RECT _rc[10];//총 카드 
	//RECT _rc1[10];//뒤집기전 카드 아랫줄
	//RECT _rc2[5];//뒤집고난후 카드 윗줄
	//RECT _rc3[5];//뒤집고난후 카드 아랫줄
	int number[10];//카드 번호
	char str[2];
	//int r, g, b;
	//bool open[5];//윗줄 기본 카드 온오프
	//bool open1[5]; //밑줄 기본 카드 온오프
	bool open2[10]; //윗줄 뒤집은 카드 온오프
	bool open3[10]; //밑줄 뒤집은 카드 온오프
	
	int count; 
	int choice; 
	int choice1; 



public:
	HRESULT init();
	void release();
	void update();
	void render(HDC hdc);
	//이곳에 함수 선언

	mainGame() {}
	~mainGame() {}
};

