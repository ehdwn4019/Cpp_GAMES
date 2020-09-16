#include "user.h"


user::user()
{
}

user::~user()
{
}

void user::status()
{
	cout << endl;
	cout << "<어설픈 리니지의 한 캐릭터...>" << endl;
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "캐릭터 정보창" << endl; 
	cout <<"공격력 : "<<_attDamage<< endl;
	cout <<"방어력 : " << _defDamage << endl;
	cout << "체력 : " << _hp << endl;
	cout << "마나 : " << _mp << endl;
	cout << "소지 금액 : " << _money <<endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
}




