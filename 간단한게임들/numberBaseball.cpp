#include <iostream>
#include <time.h>

using namespace std;


int myNum[3], comNum[3],number[10];
int ballCount = 0, strikeCount = 0, gameCount = 0;



int main()
{

	srand(time(NULL));//랜덤시드 초기화
	
	
	for (int i = 0; i < 10; i++) //컴퓨터 숫자 생성
	{
		number[i] = i; // 차례대로 초기화.
	}


	//셔플 100번
	for (int i = 0; i < 1000; i++)
	{
		int index1 = rand() % 10;
		int index2 = rand() % 10;
		int temp = number[index1];
		number[index1] = number[index2];
		number[index2] = temp;
	}

	for (int i = 0; i < 3; i++)
	{
		comNum[i] = number[i];
		cout << comNum[i] << ".";
	}
	

	//무한반복
	while (true)
	{
		cout << "0~9까지의 숫자만 입력해라" << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << i + 1 << "번째 숫자를 입력해라" << endl;
			cin >> myNum[i];
		}

		//게임카운트 1증가
		gameCount++;
		ballCount = strikeCount = 0;

		for (int i = 0; i < 3; i++)//컴숫자
		{
			for (int j = 0; j < 3; j++)//내숫자
			{
				if (comNum[i] == myNum[j])
				{
					if (i = j)
					{
						strikeCount++;
					}
					else
					{
						ballCount++;
					}
				}
			}
		}

		cout << strikeCount << "스트라이크," << ballCount << "볼" << endl;

		if (strikeCount == 3)
		{
			cout << "게임종료" << gameCount << "번만에 맞춤" << endl;
			break;
		}

		
	}
	//입력 예외 처리 
	//1.숫자범위
	//2.내가 입력한 숫자 중복처리

	




























	/*숫자 반복입력
	for (int i = 0; i < 3; i++)
	{
		cout << i+1 << "번 째 숫자를 입력하세요 : " << endl;
		cin >> myNum[i];
		
		if (myNum[0]==myNum[1] || myNum[0]==myNum[2]||myNum[1]==myNum[0]||)
			{
				cout << "중복된 수가 나와서 처음으로 돌아갑니다" << endl;


		}
			
	}
	*/
		
		
		
		

		


	//내 숫자와 컴퓨터 숫자 비교
	//	

	/*for (int i = 0; i < 9; i++)
	{



		if (myNum[i] < 0 || comNum[i]>9) continue;

		cout << myNum[i] << comNum[i] << endl;
	}*/


	 
	return 0;
		

}

