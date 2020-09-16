#include "stdafx.h"
#include "mainGame.h"

//=============================================================
//	## 초기화 ## init()
//=============================================================
HRESULT mainGame::init()
{
	gameNode::init();
	//이곳에서 초기화를 한다

	_bgImg = new image;
	_bgImg->init("마리오백그라운드.bmp", 1600, 800);

	_small = new image;
	_small->init("개구리.bmp", 600, 600,true, RGB(255, 0, 255));

	//_ball = new image;
	//_ball->init("개구리.bmp", 200, 200, true, RGB(255, 0, 255));

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
//	## 해제 ## release()
//=============================================================
void mainGame::release()
{
	gameNode::release();
	//이미지 클래스를 나갈때까진 사용할 일 없다
	//동적할당 new를 사용했다면 이곳에서 SAFE_DELETE() 사용한다

	SAFE_DELETE(_bgImg);
	SAFE_DELETE(_small);

	
	
}

//=============================================================   
//	## 업데이트 ## update()   
//=============================================================   
void mainGame::update()
{
	gameNode::update();
	//이곳에서 계산식, 키보드, 마우스등등 업데이트를 한다
	//간단하게 이곳에서 코딩한다고 생각하면 된다
	//충돌처리


	
	//셔플
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
//	## 렌더 ## render()  
//=============================================================   
void mainGame::render(HDC hdc)
{
	//백버퍼 가져오기(이건 렌더에 두기)
	HDC memDC = this->getBackBuffer()->getMemDC();
	//흰색 빈 비트맵 (이것도 렌더에 그냥 두기)
	PatBlt(memDC, 0, 0, WINSIZEX, WINSIZEY, WHITENESS);
//=============================================================	
	//이곳에서 WM_PAINT에서 했던것을 처리하면 된다
	
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
	//백버퍼의 내용을 화면DC에 그린다 (이것도 렌더에 그냥 두기)
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

