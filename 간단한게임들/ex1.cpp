#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int Hand, Hand1, Hand2;
	int Number=rand();

	
	Hand = (Number % 6) + 5;
	cout << "맨손데미지 =" << Hand << endl;
	Hand1 = (Hand %11 )+15;
	cout << "강화1 = " << Hand1 << endl;
	Hand2 = (Hand1 % 21)+ 30;
	cout << "강화2 = " << Hand2 << endl;

		


	return 0;
}