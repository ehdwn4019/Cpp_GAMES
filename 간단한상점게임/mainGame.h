#pragma once
#include "store.h"
#include "user.h"


class mainGame
{
	
	store* _store;
	user* _user;
	
	//���� ���� Ű
	int _key;

	//���� ����Ű
	int slotKey1;
	int slotKey2;
	int slotKey3;
	int slotKey4;

	////���� ���� Ű
	//int slotChoice1;
	//int slotChoice2;
	//int slotChoice3;
	//int slotChoice4;

	//���Ժ��� ����
	string slot1 = "�󽽷�";
	string slot2 = "�󽽷�";
	string slot3 = "�󽽷�";
	string slot4 = "�󽽷�";






public:
	mainGame();
	~mainGame();

	
};

