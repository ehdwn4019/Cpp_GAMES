#include "stdafx.h"
#include "mainGame.h"

//=============================================================
//	## 초기화 ## init()
//=============================================================
HRESULT mainGame::init()
{

	gameNode::init();
	//이곳에서 초기화를 한다
	//Random.Range(,) => 유니티엔진

	count = 0;

	//불변수 초기화
	for (int i = 0; i < 10; i++)
	{
		open2[i] = false;
		open3[i] = false;
	}

	//카드 번호 초기화
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			number[i] = i+1;
		}
		else if (i >= 5)
		{
			number[i] = i - 4;
		}
	}



	//밑줄 카드 번호 초기화
	//for (int i = 0; i < 5; i++)
	//{
	//	number1[i] = i;
	//}

	//윗줄 카드 번호 셔플
	for (int i = 0; i < 100; i++)
	{
		int index1 = rand() % 5;
		int index2 = rand() % 5;
		int temp = number[index1];
		number[index1] = number[index2];
		number[index2] = temp;
	}

	//밑줄 카드 번호 셔플
	//for (int i = 0; i < 100; i++)
	//{
	//	int index1 = rand() % 5;
	//	int index2 = rand() % 5;
	//	int temp = number1[index1];
	//	number1[index1] = number1[index2];
	//	number1[index2] = temp;
	//}
	//사각형의 위치를 랜덤하게
	//_rc = RectMakeCenter(
	//	RANDOM->Range(100, WINSIZEX - 100),
	//	RANDOM->Range(100, WINSIZEY - 100),
	//	100, 100);

	//처음 카드 윗줄
	//for (int i = 0; i < 5; i++)
	//{
	//	_rc[i] = RectMake(100 + i * 130, 100, 100, 200);
	//	//open = false;
	//}
	//
	////처음 카드 밑줄
	//for (int i = 0; i < 5; i++)
	//{
	//	_rc1[i] = RectMake(100 + i * 130, 500, 100, 200);
	//	//open = false;
	//}

	//뒤집은 카드 

	for (int i = 0; i < 10; i++)
	{
		_rc[i] = RectMake(100 + i * 130, 100, 100, 200);

		if (i >= 5)
		{
			_rc[i] = RectMake(-550 + i * 130, 500, 100, 200);
		}
		
		//open = true;
	}

	//뒤집은 카드 밑줄

	//for (int i = 0; i < 5; i++)
	//{
	//	
	//	//open = true;
	//}
	


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

	//r = RANDOM->Range(256);
	//g = RANDOM->Range(256);
	//b = RANDOM->Range(256);

	//카드 비교 
	
		if (INPUT->GetKeyDown(VK_LBUTTON))
		{
			for (int i = 0; i < 10; i++)
			{
				if (PtInRect(&_rc[i], _ptMouse))
				{
					count++;
		
					if (count == 1)
					{
						open2[i] = true;
						choice = i;
						//count++;
					}
					else if (count == 2)
					{
						open2[i] = true;
						choice1 = i;
						count++;
					}
		        }
			}
		}
		
		if (count == 3)
		{
			if (number[choice] == number[choice1])
			{
				open2[choice] = true;
				open2[choice1] = true;
				open3[choice] = open2[choice];
				open3[choice1] = open2[choice1];
				count = 0;
			}
		
			if (number[choice] != number[choice1])
			{
				open2[choice] = false;
				open2[choice1] = false;
				count = 0;
			}
			
		}


	////밑줄
	//for (int i = 0; i < 5; i++)
	//{
	//	if (INPUT->GetKey(VK_LBUTTON) && (PtInRect(&_rc1[i], _ptMouse)))
	//	{
	//		open3[i] = true;
	//	}
	//}

	//for (int i = 0; i < 20; i++)
	//{
	//	open2[i] = false;
	//	open3[i] = false;
	//
	//	if (number[i] != number1[i])
	//	{
	//		open2[i] = false;
	//		open3[i] = false;
	//	}
	//}
	
	
	
	

		
	
}

//=============================================================
//	## 렌더 ## render()
//=============================================================
void mainGame::render(HDC hdc)
{
	//이곳에서 WM_PAINT에서 했던것을 처리하면 된다
	//wsprintf(str, "%d", number[0]);
	//TextOut(hdc, 10, 10, str, strlen(str));

	//처음카드
	for(int i=0; i<10; i++)
	{
		if (i < 5)
		{
			Rectangle(hdc, _rc[i]);
			
		}
		if (i >=5)
		{
			Rectangle(hdc, _rc[i]);
			
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (open2[i] == true || open3[i]==true )
		{
			//윗줄 뒤집은카드
			wsprintf(str, "%d", number[i]);
			//Rectangle(hdc, _rc[i]);
			if (i < 5)
			{
				TextOut(hdc, 145 + i * 130, 180, str, strlen(str));
			}
			if (i >= 5)
			{
				TextOut(hdc, -510 + i * 130, 590, str, strlen(str));
			}
		}
		else if (open2[i]==false && open3[i]==false || open2[i]==true&& open3[i]==false || open2[i]==false && open3[i]==true)
		{
			//Rectangle(hdc, _rc[i]);
			//wsprintf(str, "%d", number[i]);
			if (i < 5)
			{
				TextOut(hdc, 120 + i * 130, 180, "게임ㄱㄱ", strlen("게임ㄱㄱ"));
				//TextOut(hdc, 145 + i * 130, 180, str, strlen(str));
			}
			if (i >= 5)
			{
				TextOut(hdc, -530 + i * 130, 590, "게임ㄱㄱ", strlen("게임ㄱㄱ"));
				//TextOut(hdc, -500 + i * 130, 590, str, strlen(str));
			}
		}
	}

	//밑줄 뒤집은 카드
	//for (int i = 0; i < 5; i++)
	//{
	//	
	//}
	//}




	//도형에 색칠하기
	//HBRUSH brush = CreateSolidBrush(RGB(r, g, b));
	//FillRect(hdc, &_rc, brush);
	//DeleteObject(brush);
}
