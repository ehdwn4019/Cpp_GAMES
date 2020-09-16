#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));

	int number;
	number = rand();
	cout << "number=" << number << endl;
	number = rand() % 5;
	cout << "number=" << number << endl;

	
	
	

	
	return 0;

	
}



