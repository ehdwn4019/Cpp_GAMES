#include <iostream>
#include <time.h>

using namespace std;

int main()
{

	int MyTurn = 0, ComTurn = 0;



	while (1)
	{
		srand(time(NULL));
		ComTurn = rand() % 3 + 1;
		cout << "����,����,���߿��� ������! <����=1,����=2,��=3>" << endl;
		cout << "========================================================" << endl;

		cin >> MyTurn;




		if ((MyTurn == 1) && (ComTurn == 2))
		{
			cout << " ���� " << MyTurn << " ���� " << ComTurn << " �����ϴ�!! " << endl;
			cout << "========================================================" << endl;

		}
		else if ((MyTurn == 1) && (ComTurn == 3))
		{
			cout << " ���� " << MyTurn << " ���� " << ComTurn << " �̰���ϴ�!! " << endl;
			cout << "==========================================================" << endl;

		}
		else if ((MyTurn == 2) && (ComTurn == 1))
		{
			cout << " ���� " << MyTurn << " ���� " << ComTurn << " �̰���ϴ�!! " << endl;
			cout << "==========================================================" << endl;

		}
		else if ((MyTurn == 2) && (ComTurn == 3))
		{
			cout << " ���� " << MyTurn << " ���� " << ComTurn << " �����ϴ�!! " << endl;
			cout << "========================================================" << endl;

		}
		else if ((MyTurn == 3) && (ComTurn == 1))
		{
			cout << " ���� " << MyTurn << " ���� " << ComTurn << " �����ϴ�!! " << endl;
			cout << "========================================================" << endl;

		}
		else if ((MyTurn == 3) && (ComTurn == 2))
		{
			cout << " ���� " << MyTurn << " ���� " << ComTurn << " �̰���ϴ�!! " << endl;
			cout << "==========================================================" << endl;


		}
		else if (MyTurn == ComTurn)
		{
			cout << "�����ϴ�." << endl;
			cout << "========================================================" << endl;


		}
		else
		{
			cout << "�߸��½��ϴ�" << endl;
			cout << "========================================================" << endl;
		}

	}









	return 0;
}