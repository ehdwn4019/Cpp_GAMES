#pragma once
#include "gameNode.h"

class mainGame : public gameNode
{
private:
	//�̰��� ���� ����
	//HDC hdc;
	HWND hwnd;
	RECT _rc[10];//�� ī�� 
	//RECT _rc1[10];//�������� ī�� �Ʒ���
	//RECT _rc2[5];//�������� ī�� ����
	//RECT _rc3[5];//�������� ī�� �Ʒ���
	int number[10];//ī�� ��ȣ
	char str[2];
	//int r, g, b;
	//bool open[5];//���� �⺻ ī�� �¿���
	//bool open1[5]; //���� �⺻ ī�� �¿���
	bool open2[10]; //���� ������ ī�� �¿���
	bool open3[10]; //���� ������ ī�� �¿���
	
	int count; 
	int choice; 
	int choice1; 



public:
	HRESULT init();
	void release();
	void update();
	void render(HDC hdc);
	//�̰��� �Լ� ����

	mainGame() {}
	~mainGame() {}
};

