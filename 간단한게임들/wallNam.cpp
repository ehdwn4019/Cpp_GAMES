#include <iostream>
#include <time.h>
#include <Windows.h>



using namespace std;

//변수선언
int myMoney = 10000; //시작소지금
int currentMoney; //현재 보유금액
int bettingMoney;//베팅금액
int card[3]; //카드개수
int totalCard[52]; //총 카드 개수 
int turncount; //턴 카운트  

/*string Hshape[13]{ "♥","♥","♥","♥","♥","♥","♥","♥","♥","♥","♥","♥","♥" };
string Cshape[13]{ "♣","♣", "♣", "♣", "♣", "♣", "♣", "♣", "♣", "♣", "♣", "♣", "♣"};
string Dshape[13]{"◆","◆", "◆", "◆", "◆", "◆", "◆", "◆", "◆", "◆", "◆", "◆", "◆", };
string Sshape[13]{"♠","♠", "♠", "♠", "♠", "♠", "♠", "♠", "♠", "♠", "♠", "♠", "♠", };
*/

/*void cardType()
{
	
	for (int i = 0; i < 13; i++)
	{
		
		if (card[i] > 0 && card[i] < 14)
		{
			
			 cout << "♥A" << endl;
			 cout << "♥" << totalCard[i] << endl;
			 cout << "♥K" << endl;
			 cout << "♥Q" << endl;
			 cout << "♥J" << endl;
		}

	}
	for (int i = 13; i < 25; i++)
	{
		if (card[i] > 13 && card[i] < 26)
		{
			
			cout << "♣A" << endl;
			cout << "♣" << totalCard[i] << endl;
			cout << "♣K" << endl;
			cout << "♣Q" << endl;
			cout << "♣J" << endl;
		}
	}
	for (int i = 25; i < 38; i++)
	{
		if (card[i] > 25 && card[i] < 39)
		{
			
			cout << "◆A" << endl;
			cout << "◆" << totalCard[i] << endl;
			cout << "◆K" << endl;
			cout << "◆Q" << endl;
			cout << "◆J" << endl;
		}
	}
	for(int i=38; i<53; i++)
	{
		if (card[i] > 38 && card[i] < 54)
		{
			
			cout << "♠A" << endl;
			cout << "♠" << totalCard[i] << endl;
			cout << "♠K" << endl;
			cout << "♠Q" << endl;
			cout << "♠J" << endl;
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
	
	for (int i = 1; i < 53; i++)//52장 카드 초기화
	{
		totalCard[i] = i+1;
		

	}
	
	
	
	
	for (int i = 0; i < 1000; i++)//52장 카드 셔플
	{

		int index1 = rand() % 12 + 1;
		int index2 = rand() % 12 + 1;
		int temp = totalCard[index1];
		totalCard[index1] = totalCard[index2];
		totalCard[index2] = temp;
		
	}
	

    
	while (1)//게임시작
	{
		Sleep(1000);

		for (int i = 1; i < 4; i++)
		{	
			card[i] = totalCard[i];

			if (card[i] == card[i] == card[i])
			{
				cout << "중복된 카드가 나와서 카드를 다시 뽑습니다" << endl;
				continue;
				
			}
			
		}

		

			cout << endl;
			cout << "=============================" << endl;
			cout << "!월남뽕 게임 시작!" << endl;
			cout << "=============================" << endl;
			cout << endl;
			cout << "첫번째 카드 :♥ " << card[1] << "       " << "두 번째 카드 :♥ " << card[2] << "       " << "나의 카드 :♥ " << card[3] << endl;
			cout << endl;
			cout << "나의 소지금액 : " << myMoney << endl;
			cout << endl;
			cout << "배팅금액 : ";
			cin >> bettingMoney;

			if (bettingMoney<100 || bettingMoney>myMoney)
			{
				cout << "베팅 금액을 다시 적어주세요" << endl;
				continue;
				
			}
			else if (card[3] > card[2] || card[3] < card[1])
			{
				cout << endl;
				cout << "축하합니다! 베팅에 성공하셨습니다!" << endl;
				cout << endl;
				myMoney += bettingMoney;
				
				cout << endl;
				continue;
			}
			else if (card[3] <card[2] || card[3] > card[1])
			{
				cout << endl;
				cout << "아쉽습니다ㅠㅠ.. 돈을 잃었습니다ㅠㅠ.." << endl;
				cout << endl;
				myMoney -= bettingMoney;
				
				cout << endl;
				continue;
			}
			else if (myMoney == 0)
			{
				cout << "가진 금액이 0원입니다!" << endl;
				cout << "게임을 다시 시작합니다!" << endl;
				continue;

			}
			
		



	}//end of while
	return 0;
}