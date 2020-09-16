#include "stdafx.h"
#include "mainGame.h"

//=============================================================
//	## �ʱ�ȭ ## init()
//=============================================================
HRESULT mainGame::init()
{
	gameNode::init();
	//�̰����� �ʱ�ȭ�� �Ѵ�

	_bgImg = new image;
	_bgImg->init("��������׶���.bmp", 1600, 800);

	_small = new image;
	_small->init("������.bmp", 600, 600,true, RGB(255, 0, 255));

	//_ball = new image;
	//_ball->init("������.bmp", 200, 200, true, RGB(255, 0, 255));

	_rc = RectMakeCenter(WINSIZEX / 2, WINSIZEY / 2, 150, 150);

	_rcImage = RectMake(1000, 100, 600, 600);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			_puzzle[i * 3 + j].piece = RectMake(100 + j*200, 100 + i * 200, 200, 200);
		}
	}

	for (int i = 0; i < 9; i++)
	{
		_puzzle[i].number = i;
		_puzzle[i].position = i;
	}
	
	_alpha = 255;

	random = 0;
	temp1 = 0;
	endGame = false;

	return S_OK;
}

//=============================================================
//	## ���� ## release()
//=============================================================
void mainGame::release()
{
	gameNode::release();
	//�̹��� Ŭ������ ���������� ����� �� ����
	//�����Ҵ� new�� ����ߴٸ� �̰����� SAFE_DELETE() ����Ѵ�

	SAFE_DELETE(_bgImg);
	SAFE_DELETE(_small);

	
	
}

//=============================================================   
//	## ������Ʈ ## update()   
//=============================================================   
void mainGame::update()
{
	gameNode::update();
	//�̰����� ����, Ű����, ���콺��� ������Ʈ�� �Ѵ�
	//�����ϰ� �̰����� �ڵ��Ѵٰ� �����ϸ� �ȴ�
	//�浹ó��


	
	//����
	if (INPUT->GetKeyDown(VK_SPACE))
	{
		for (int i = 0; i < 1000; i++)
		{
			random = RANDOM->Range(1, 4);
			this->move();
			if (_puzzle[8].number == 8 && i>500)
			{
				random = 0;
				break;
			}
		}
	}

	this->move();

	for (int i = 0; i < 9; i++)
	{
		if (_puzzle[i].number == i)
		{
			temp1++;
		}
	}
	if (temp1 == 9)
	{
		endGame = true;

		if (endGame == true)
		{
			this->init();
		}
	}
	else if (temp1 != 9)
	{
		temp1 = 0;
	}


	_count++;
	if (_count % 2 == 0)
	{
		_alpha--;
		if (_alpha < 0) _alpha = 0;
	}
}

//=============================================================   
//	## ���� ## render()  
//=============================================================   
void mainGame::render(HDC hdc)
{
	//����� ��������(�̰� ������ �α�)
	HDC memDC = this->getBackBuffer()->getMemDC();
	//��� �� ��Ʈ�� (�̰͵� ������ �׳� �α�)
	PatBlt(memDC, 0, 0, WINSIZEX, WINSIZEY, WHITENESS);
//=============================================================	
	//�̰����� WM_PAINT���� �ߴ����� ó���ϸ� �ȴ�
	
	//_bgImg->render(memDC);
	//_bgImg->render(memDC, 500, 500, 150, 100, 150, 150);
	_bgImg->render(memDC);
	//Rectangle(memDC, _rcImage);

	//for (int i = 0; i < 9; i++)
	//{
	//	Rectangle(memDC, _puzzle[i].piece);
	//	sprintf(_puzzle[i].str, "%d", _puzzle[i].number);
	//	TextOut(memDC, _puzzle[i].piece.left + 100, _puzzle[i].piece.top + 100,_puzzle[i].str, strlen(_puzzle[i].str));
	//} 

	_small->render(memDC,_rcImage.left,_rcImage.top);

	_small->render(memDC, _puzzle[0].piece.left,_puzzle[0].piece.top, 0,0, 200, 200);
	_small->render(memDC, _puzzle[1].piece.left, _puzzle[1].piece.top, 200,0, 200, 200);
	_small->render(memDC, _puzzle[2].piece.left, _puzzle[2].piece.top, 400, 0, 200, 200);
	_small->render(memDC, _puzzle[3].piece.left, _puzzle[3].piece.top, 0, 200, 200, 200);
	_small->render(memDC, _puzzle[4].piece.left, _puzzle[4].piece.top, 200, 200, 200, 200);
	_small->render(memDC, _puzzle[5].piece.left, _puzzle[5].piece.top, 400,200, 200, 200);
	_small->render(memDC, _puzzle[6].piece.left, _puzzle[6].piece.top, 0, 400, 200, 200);
	_small->render(memDC, _puzzle[7].piece.left, _puzzle[7].piece.top, 200, 400, 200, 200);
	//_small->render(memDC, _puzzle[8].piece.left, _puzzle[8].piece.top, 400, 400, 200, 200);
	

	_small->alphaRender(memDC, _puzzle[8].piece.left, _puzzle[8].piece.top, 400, 400, 200, 200,_alpha);
	if (endGame == true)
	{
		_small->alphaRender(memDC, _puzzle[8].piece.left, _puzzle[8].piece.top, 400, 400, 200, 200, 0);
	}
	
	

	
	
	//_ball->render(memDC, _rc.left, _rc.top);
	//_ball->alphaRender(memDC, 100);


//=============================================================
	//������� ������ ȭ��DC�� �׸��� (�̰͵� ������ �׳� �α�)
	this->getBackBuffer()->render(hdc);
}

void mainGame::move()
{

	if (INPUT->GetKeyDown(VK_LEFT) || random==1)
	{
		for (int i = 0; i < 9; i++)
		{
			if (_puzzle[i].number == _puzzle[8].number - 1)
			{
				if (_puzzle[8].number == 3 || _puzzle[8].number==6)
				{
					break;
				}
				_temp=_puzzle[i].piece;
				_puzzle[i].piece = _puzzle[8].piece;
				_puzzle[8].piece = _temp;

				_puzzle[8].number -= 1;
				_puzzle[i].number += 1;
				break;
			}
		}
	}

	if (INPUT->GetKeyDown(VK_RIGHT) || random==2)
	{
		for (int i = 0; i < 9; i++)
		{
			if (_puzzle[i].number == _puzzle[8].number + 1)
			{
				if (_puzzle[8].number == 5 || _puzzle[8].number == 2)
				{
					break;
				}
				_temp = _puzzle[i].piece;
				_puzzle[i].piece = _puzzle[8].piece;
				_puzzle[8].piece = _temp;

				_puzzle[8].number += 1;
				_puzzle[i].number -= 1;
				break;
			}
		}
	}

	if (INPUT->GetKeyDown(VK_UP) || random==3)
	{
		for (int i = 0; i < 9; i++)
		{
			if (_puzzle[i].number == _puzzle[8].number - 3)
			{
				//if (_puzzle[8].number == 1 || _puzzle[8].number == 2 || _puzzle[8].number == 0)
				//{
				//	break;
				//}
				_temp = _puzzle[i].piece;
				_puzzle[i].piece = _puzzle[8].piece;
				_puzzle[8].piece = _temp;

				_puzzle[8].number -= 3;
				_puzzle[i].number += 3;
				break;
			}
		}
	}

	if (INPUT->GetKeyDown(VK_DOWN) || random==4)
	{
		for (int i = 0; i < 9; i++)
		{
			if (_puzzle[i].number == _puzzle[8].number +3)
			{
				//if (_puzzle[8].number == 7 || _puzzle[8].number == 8 || _puzzle[8].number == 6)
				//{
				//	break;
				//}
				_temp = _puzzle[i].piece;
				_puzzle[i].piece = _puzzle[8].piece;
				_puzzle[8].piece = _temp;

				_puzzle[8].number += 3;
				_puzzle[i].number -= 3;
				break;
			}
		}
	}
}

