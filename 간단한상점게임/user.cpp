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
	cout << "<��� �������� �� ĳ����...>" << endl;
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "ĳ���� ����â" << endl; 
	cout <<"���ݷ� : "<<_attDamage<< endl;
	cout <<"���� : " << _defDamage << endl;
	cout << "ü�� : " << _hp << endl;
	cout << "���� : " << _mp << endl;
	cout << "���� �ݾ� : " << _money <<endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
}




