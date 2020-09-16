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
		cout << "가위,바위,보중에서 내세요! <가위=1,바위=2,보=3>" << endl;
		cout << "========================================================" << endl;

		cin >> MyTurn;




		if ((MyTurn == 1) && (ComTurn == 2))
		{
			cout << " 나는 " << MyTurn << " 상대는 " << ComTurn << " 졌습니다!! " << endl;
			cout << "========================================================" << endl;

		}
		else if ((MyTurn == 1) && (ComTurn == 3))
		{
			cout << " 나는 " << MyTurn << " 상대는 " << ComTurn << " 이겼습니다!! " << endl;
			cout << "==========================================================" << endl;

		}
		else if ((MyTurn == 2) && (ComTurn == 1))
		{
			cout << " 나는 " << MyTurn << " 상대는 " << ComTurn << " 이겼습니다!! " << endl;
			cout << "==========================================================" << endl;

		}
		else if ((MyTurn == 2) && (ComTurn == 3))
		{
			cout << " 나는 " << MyTurn << " 상대는 " << ComTurn << " 졌습니다!! " << endl;
			cout << "========================================================" << endl;

		}
		else if ((MyTurn == 3) && (ComTurn == 1))
		{
			cout << " 나는 " << MyTurn << " 상대는 " << ComTurn << " 졌습니다!! " << endl;
			cout << "========================================================" << endl;

		}
		else if ((MyTurn == 3) && (ComTurn == 2))
		{
			cout << " 나는 " << MyTurn << " 상대는 " << ComTurn << " 이겼습니다!! " << endl;
			cout << "==========================================================" << endl;


		}
		else if (MyTurn == ComTurn)
		{
			cout << "비겼습니다." << endl;
			cout << "========================================================" << endl;


		}
		else
		{
			cout << "잘못냈습니다" << endl;
			cout << "========================================================" << endl;
		}

	}









	return 0;
}