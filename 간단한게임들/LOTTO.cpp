#include <iostream>
#include <time.h>

using namespace std;

int totalnumber[45];//�ζ� ��ȣ �� ���� 
int lottoNumber[6];//�ζ� ���� ��ȣ ���� 
int bonnusNumber=0;//���ʽ� ��ȣ
int myLottoNumber[6];//���� �ζ� ��ȣ 
int lottoCount = 0; // �ζ� ī��Ʈ


int main()
{
	srand(time(NULL));
	
    //���� �ζ� ��ȣ �ݺ� 
	

	//�ζ� ��ȣ �Ѱ��� ���� 
	for (int i = 0; i < 45; i++)
	{
		totalnumber[i] = i + 1;
		
	}

	//����Ƚ�� ���°� 
	for (int i = 0; i < 100; i++)
	{
		int index1 = rand() % 45;
		int index2 = rand() % 45;
		int temp = totalnumber[index1];
		totalnumber[index1] = totalnumber[index2];
		totalnumber[index2] = temp;
		
	} 

	

	
	//�ζ� ��ȣ 6�� ���� 
	for (int i = 0; i < 6; i++)
	{
		
		cout << i+1 <<"��° �ζ� ��ȣ : " << totalnumber[i] << endl;
		
	}
	//���ʽ� ��ȣ ����
	int bonnusNumber = totalnumber[6];
	cout << "���ʽ� ��ȣ : " << bonnusNumber << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << i+1 << "��° �ζ� ��ȣ �Է�" << endl;
		cin >> myLottoNumber[i];
		cout << endl;
	}

	//�ζ� ��ȣ �� 
	for (int i = 0; i < 6; i++)//������
	{
		for (int j = 0; j < 6; j++)//�ζǼ���
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
		cout << "1���Դϴ�" << endl;
	}
	else if ((lottoCount == 5) && bonnusNumber==1)
	{
		cout << "2���Դϴ�" << endl;
	}
	else if (lottoCount == 5)
	{
		cout << "3���Դϴ�" << endl;
	}
	else if (lottoCount == 4)
	{
		cout << "4���Դϴ�" << endl;
	}
	else if (lottoCount == 3)
	{
		cout << "5���Դϴ�" << endl;
	}

	else
	{
		cout << "���Դϴ�" << endl;
	}
	
    







	return 0;

	
}


