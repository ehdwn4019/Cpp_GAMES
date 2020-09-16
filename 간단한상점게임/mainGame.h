#pragma once
#include "store.h"
#include "user.h"


class mainGame
{
	
	store* _store;
	user* _user;
	
	//¹«±â ¼±ÅÃ Å°
	int _key;

	//½½·Ô ¼±ÅÃÅ°
	int slotKey1;
	int slotKey2;
	int slotKey3;
	int slotKey4;

	////½½·Ô °í¸£´Â Å°
	//int slotChoice1;
	//int slotChoice2;
	//int slotChoice3;
	//int slotChoice4;

	//½½·Ôº¯°æ º¯¼ö
	string slot1 = "ºó½½·Ô";
	string slot2 = "ºó½½·Ô";
	string slot3 = "ºó½½·Ô";
	string slot4 = "ºó½½·Ô";






public:
	mainGame();
	~mainGame();

	
};

