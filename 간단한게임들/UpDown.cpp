#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int inputNumber= 0 ; //입력받을값
	int RandomNumber = rand() % 100; // 난수
	int count = 0;

	
	



	while (1)
	{
		
		
		count++;
		cout << "입력받을값 :";
		cin >> inputNumber;
		

		if (inputNumber > 100)
		{
			cout << "100보다 작은숫자를 입력해주세요" << endl;
		}
		else if(inputNumber<0)
		{
			cout << "0보다 큰숫자를 입력해주세요" << endl;
		}


		if (RandomNumber > inputNumber)
		{
			cout << "Up" << endl;
			
		}
		else if (RandomNumber < inputNumber)
		{
			cout << "Down" << endl;
			
		}
		else if (inputNumber == RandomNumber)
		{
			cout << "정답입니다." << endl;
			cout << count << "번만에 맞췄습니다." << endl;
			break;
		}
	
		
		
	
	}


	

	return 0;
}