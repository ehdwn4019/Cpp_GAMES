#include <iostream>
#include <time.h>

using namespace std;

int totalnumber[45];//로또 번호 총 개수 
int lottoNumber[6];//로또 나올 번호 개수 
int bonnusNumber=0;//보너스 번호
int myLottoNumber[6];//나의 로또 번호 
int lottoCount = 0; // 로또 카운트


int main()
{
	srand(time(NULL));
	
    //나의 로또 번호 반복 
	

	//로또 번호 총개수 생성 
	for (int i = 0; i < 45; i++)
	{
		totalnumber[i] = i + 1;
		
	}

	//셔플횟수 섞는거 
	for (int i = 0; i < 100; i++)
	{
		int index1 = rand() % 45;
		int index2 = rand() % 45;
		int temp = totalnumber[index1];
		totalnumber[index1] = totalnumber[index2];
		totalnumber[index2] = temp;
		
	} 

	

	
	//로또 번호 6개 추출 
	for (int i = 0; i < 6; i++)
	{
		
		cout << i+1 <<"번째 로또 번호 : " << totalnumber[i] << endl;
		
	}
	//보너스 번호 추출
	int bonnusNumber = totalnumber[6];
	cout << "보너스 번호 : " << bonnusNumber << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << i+1 << "번째 로또 번호 입력" << endl;
		cin >> myLottoNumber[i];
		cout << endl;
	}

	//로또 번호 비교 
	for (int i = 0; i < 6; i++)//내숫자
	{
		for (int j = 0; j < 6; j++)//로또숫자
		{
			if (myLottoNumber[i] == totalnumber[j])
			{
				lottoCount++;
			}

		
		}
		if (bonnusNumber == myLottoNumber[i])
		{
			bonnusNumber++;
		
		}
	}
	

	if (lottoCount == 6)
	{
		cout << "1등입니다" << endl;
	}
	else if ((lottoCount == 5) && bonnusNumber==1)
	{
		cout << "2등입니다" << endl;
	}
	else if (lottoCount == 5)
	{
		cout << "3등입니다" << endl;
	}
	else if (lottoCount == 4)
	{
		cout << "4등입니다" << endl;
	}
	else if (lottoCount == 3)
	{
		cout << "5등입니다" << endl;
	}

	else
	{
		cout << "꽝입니다" << endl;
	}
	
    







	return 0;

	
}


