#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int inputNumber= 0 ; //�Է¹�����
	int RandomNumber = rand() % 100; // ����
	int count = 0;

	
	



	while (1)
	{
		
		
		count++;
		cout << "�Է¹����� :";
		cin >> inputNumber;
		

		if (inputNumber > 100)
		{
			cout << "100���� �������ڸ� �Է����ּ���" << endl;
		}
		else if(inputNumber<0)
		{
			cout << "0���� ū���ڸ� �Է����ּ���" << endl;
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
			cout << "�����Դϴ�." << endl;
			cout << count << "������ ������ϴ�." << endl;
			break;
		}
	
		
		
	
	}


	

	return 0;
}