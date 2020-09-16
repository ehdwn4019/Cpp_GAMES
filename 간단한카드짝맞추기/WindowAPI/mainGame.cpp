#include "stdafx.h"
#include "mainGame.h"

//=============================================================
//	## �ʱ�ȭ ## init()
//=============================================================
HRESULT mainGame::init()
{

	gameNode::init();
	//�̰����� �ʱ�ȭ�� �Ѵ�
	//Random.Range(,) => ����Ƽ����

	count = 0;

	//�Һ��� �ʱ�ȭ
	for (int i = 0; i < 10; i++)
	{
		open2[i] = false;
		open3[i] = false;
	}

	//ī�� ��ȣ �ʱ�ȭ
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



	//���� ī�� ��ȣ �ʱ�ȭ
	//for (int i = 0; i < 5; i++)
	//{
	//	number1[i] = i;
	//}

	//���� ī�� ��ȣ ����
	for (int i = 0; i < 100; i++)
	{
		int index1 = rand() % 5;
		int index2 = rand() % 5;
		int temp = number[index1];
		number[index1] = number[index2];
		number[index2] = temp;
	}

	//���� ī�� ��ȣ ����
	//for (int i = 0; i < 100; i++)
	//{
	//	int index1 = rand() % 5;
	//	int index2 = rand() % 5;
	//	int temp = number1[index1];
	//	number1[index1] = number1[index2];
	//	number1[index2] = temp;
	//}
	//�簢���� ��ġ�� �����ϰ�
	//_rc = RectMakeCenter(
	//	RANDOM->Range(100, WINSIZEX - 100),
	//	RANDOM->Range(100, WINSIZEY - 100),
	//	100, 100);

	//ó�� ī�� ����
	//for (int i = 0; i < 5; i++)
	//{
	//	_rc[i] = RectMake(100 + i * 130, 100, 100, 200);
	//	//open = false;
	//}
	//
	////ó�� ī�� ����
	//for (int i = 0; i < 5; i++)
	//{
	//	_rc1[i] = RectMake(100 + i * 130, 500, 100, 200);
	//	//open = false;
	//}

	//������ ī�� 

	for (int i = 0; i < 10; i++)
	{
		_rc[i] = RectMake(100 + i * 130, 100, 100, 200);

		if (i >= 5)
		{
			_rc[i] = RectMake(-550 + i * 130, 500, 100, 200);
		}
		
		//open = true;
	}

	//������ ī�� ����

	//for (int i = 0; i < 5; i++)
	//{
	//	
	//	//open = true;
	//}
	


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

	//r = RANDOM->Range(256);
	//g = RANDOM->Range(256);
	//b = RANDOM->Range(256);

	//ī�� �� 
	
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


	////����
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
//	## ���� ## render()
//=============================================================
void mainGame::render(HDC hdc)
{
	//�̰����� WM_PAINT���� �ߴ����� ó���ϸ� �ȴ�
	//wsprintf(str, "%d", number[0]);
	//TextOut(hdc, 10, 10, str, strlen(str));

	//ó��ī��
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
			//���� ������ī��
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
				TextOut(hdc, 120 + i * 130, 180, "���Ӥ���", strlen("���Ӥ���"));
				//TextOut(hdc, 145 + i * 130, 180, str, strlen(str));
			}
			if (i >= 5)
			{
				TextOut(hdc, -530 + i * 130, 590, "���Ӥ���", strlen("���Ӥ���"));
				//TextOut(hdc, -500 + i * 130, 590, str, strlen(str));
			}
		}
	}

	//���� ������ ī��
	//for (int i = 0; i < 5; i++)
	//{
	//	
	//}
	//}




	//������ ��ĥ�ϱ�
	//HBRUSH brush = CreateSolidBrush(RGB(r, g, b));
	//FillRect(hdc, &_rc, brush);
	//DeleteObject(brush);
}
