#include <iostream>
#include <time.h>
#include <Windows.h>



using namespace std;

//��������
int myMoney = 10000; //���ۼ�����
int currentMoney; //���� �����ݾ�
int bettingMoney;//���ñݾ�
int card[3]; //ī�尳��
int totalCard[52]; //�� ī�� ���� 
int turncount; //�� ī��Ʈ  

/*string Hshape[13]{ "��","��","��","��","��","��","��","��","��","��","��","��","��" };
string Cshape[13]{ "��","��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��"};
string Dshape[13]{"��","��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", };
string Sshape[13]{"��","��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", };
*/

/*void cardType()
{
	
	for (int i = 0; i < 13; i++)
	{
		
		if (card[i] > 0 && card[i] < 14)
		{
			
			 cout << "��A" << endl;
			 cout << "��" << totalCard[i] << endl;
			 cout << "��K" << endl;
			 cout << "��Q" << endl;
			 cout << "��J" << endl;
		}

	}
	for (int i = 13; i < 25; i++)
	{
		if (card[i] > 13 && card[i] < 26)
		{
			
			cout << "��A" << endl;
			cout << "��" << totalCard[i] << endl;
			cout << "��K" << endl;
			cout << "��Q" << endl;
			cout << "��J" << endl;
		}
	}
	for (int i = 25; i < 38; i++)
	{
		if (card[i] > 25 && card[i] < 39)
		{
			
			cout << "��A" << endl;
			cout << "��" << totalCard[i] << endl;
			cout << "��K" << endl;
			cout << "��Q" << endl;
			cout << "��J" << endl;
		}
	}
	for(int i=38; i<53; i++)
	{
		if (card[i] > 38 && card[i] < 54)
		{
			
			cout << "��A" << endl;
			cout << "��" << totalCard[i] << endl;
			cout << "��K" << endl;
			cout << "��Q" << endl;
			cout << "��J" << endl;
		}
	}
	
}
*/

/*void cardType()
{
		for (int i = 1; i < 53; i++)
		{
			if (totalCard[52] / 13 ==0 )
			{
				
			}
			if (totalCard[i] / 13 == 1 )
			{
				
			}
			if (totalCard[i] / 13 == 2 || card[i] % 13 == 2)
			{
				
			}
			if (totalCard[i] / 13 == 3 || card[i] % 13 == 3)
			{
				
			}
		}
		
		
	
	
}*/



int main()
{
	srand(unsigned(time(NULL)));
	
	for (int i = 1; i < 53; i++)//52�� ī�� �ʱ�ȭ
	{
		totalCard[i] = i+1;
		

	}
	
	
	
	
	for (int i = 0; i < 1000; i++)//52�� ī�� ����
	{

		int index1 = rand() % 12 + 1;
		int index2 = rand() % 12 + 1;
		int temp = totalCard[index1];
		totalCard[index1] = totalCard[index2];
		totalCard[index2] = temp;
		
	}
	

    
	while (1)//���ӽ���
	{
		Sleep(1000);

		for (int i = 1; i < 4; i++)
		{	
			card[i] = totalCard[i];

			if (card[i] == card[i] == card[i])
			{
				cout << "�ߺ��� ī�尡 ���ͼ� ī�带 �ٽ� �̽��ϴ�" << endl;
				continue;
				
			}
			
		}

		

			cout << endl;
			cout << "=============================" << endl;
			cout << "!������ ���� ����!" << endl;
			cout << "=============================" << endl;
			cout << endl;
			cout << "ù��° ī�� :�� " << card[1] << "       " << "�� ��° ī�� :�� " << card[2] << "       " << "���� ī�� :�� " << card[3] << endl;
			cout << endl;
			cout << "���� �����ݾ� : " << myMoney << endl;
			cout << endl;
			cout << "���ñݾ� : ";
			cin >> bettingMoney;

			if (bettingMoney<100 || bettingMoney>myMoney)
			{
				cout << "���� �ݾ��� �ٽ� �����ּ���" << endl;
				continue;
				
			}
			else if (card[3] > card[2] || card[3] < card[1])
			{
				cout << endl;
				cout << "�����մϴ�! ���ÿ� �����ϼ̽��ϴ�!" << endl;
				cout << endl;
				myMoney += bettingMoney;
				
				cout << endl;
				continue;
			}
			else if (card[3] <card[2] || card[3] > card[1])
			{
				cout << endl;
				cout << "�ƽ����ϴ٤Ф�.. ���� �Ҿ����ϴ٤Ф�.." << endl;
				cout << endl;
				myMoney -= bettingMoney;
				
				cout << endl;
				continue;
			}
			else if (myMoney == 0)
			{
				cout << "���� �ݾ��� 0���Դϴ�!" << endl;
				cout << "������ �ٽ� �����մϴ�!" << endl;
				continue;

			}
			
		



	}//end of while
	return 0;
}