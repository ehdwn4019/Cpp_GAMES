#include <iostream>
#include <time.h>

using namespace std;


int myNum[3], comNum[3],number[10];
int ballCount = 0, strikeCount = 0, gameCount = 0;



int main()
{

	srand(time(NULL));//�����õ� �ʱ�ȭ
	
	
	for (int i = 0; i < 10; i++) //��ǻ�� ���� ����
	{
		number[i] = i; // ���ʴ�� �ʱ�ȭ.
	}


	//���� 100��
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
	

	//���ѹݺ�
	while (true)
	{
		cout << "0~9������ ���ڸ� �Է��ض�" << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << i + 1 << "��° ���ڸ� �Է��ض�" << endl;
			cin >> myNum[i];
		}

		//����ī��Ʈ 1����
		gameCount++;
		ballCount = strikeCount = 0;

		for (int i = 0; i < 3; i++)//�ļ���
		{
			for (int j = 0; j < 3; j++)//������
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

		cout << strikeCount << "��Ʈ����ũ," << ballCount << "��" << endl;

		if (strikeCount == 3)
		{
			cout << "��������" << gameCount << "������ ����" << endl;
			break;
		}

		
	}
	//�Է� ���� ó�� 
	//1.���ڹ���
	//2.���� �Է��� ���� �ߺ�ó��

	




























	/*���� �ݺ��Է�
	for (int i = 0; i < 3; i++)
	{
		cout << i+1 << "�� ° ���ڸ� �Է��ϼ��� : " << endl;
		cin >> myNum[i];
		
		if (myNum[0]==myNum[1] || myNum[0]==myNum[2]||myNum[1]==myNum[0]||)
			{
				cout << "�ߺ��� ���� ���ͼ� ó������ ���ư��ϴ�" << endl;


		}
			
	}
	*/
		
		
		
		

		


	//�� ���ڿ� ��ǻ�� ���� ��
	//	

	/*for (int i = 0; i < 9; i++)
	{



		if (myNum[i] < 0 || comNum[i]>9) continue;

		cout << myNum[i] << comNum[i] << endl;
	}*/


	 
	return 0;
		

}

