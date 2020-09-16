#pragma once
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string.h>
#include <string>

using namespace std;
class user 
{
	//����
	int _longSword;
	int _longBow;
	int _dama;
	int _ssaul;
	int _majok;
	//��
	int _helmet;
	int _armor;
	int _gloves;
	int _pants;
	int _boots;
	//����
	int _attRing;
	int _defRing;
	int _strattRing;
	int _strdefRing;
	int _specialRing;
	//����
	int _attPotion;
	int _defPotion;
	int _mpPotion;
	int _hpPotion;
	int _strangePotion;
	//���ݷ�
	int _attDamage;
	//���� 
	int _defDamage;
	//Hp
	int _hp;
	//mp
	int _mp;
	////�κ��丮 ĭ 
	//int _slot1;
	//int _slot2;
	//int _slot3;
	//int _slot4;
	//��
	int _money;
	int _currentMoney;





public:

	//��Ÿ ���� 
	int _key;


	//���� ���Լ�
	int getLongsword() { return _longSword; }
	int getLongbow() { return _longBow; }
	int getDama() { return _dama; }
	int getSsaul() { return _ssaul; }
	int getMajok() { return _majok; }

	//�� ���Լ�
	int getHelmet() { return _helmet; }
	int getArmor() { return _armor; }
	int getGloves() { return _gloves; }
	int getPants() { return _pants; }
	int getBoots() { return _boots; }

	//���� ���Լ� 
	int getAttring() { return _attRing; }
	int getDefring() { return _defRing; }
	int getStrattring() { return _strattRing; }
	int getStrdefring() { return _strdefRing; }
	int getSpecialring() { return _specialRing; }

	//���� ���Լ� 
	int getAttpotion() { return _attPotion; }
	int getDefpotion() { return _defPotion; }
	int mpPotion() { return _mpPotion; }
	int hpPotion() { return _hpPotion; }
	int strangePotion() { return _strangePotion; }

	//���� ���Լ�
	void setLongsword(int longSword) { _longSword = longSword; }
	void setLongbow(int longBow) { _longBow = longBow; }
	void setDama(int dama) { _dama = dama; }
	void setSsaul(int ssaul) { _ssaul = ssaul; }
	void setMajok(int majok) { _majok = majok; }
	//�� ���Լ� 
	void sethelmet(int helmet) { _helmet = helmet; }
	void setarmor(int armor) { _armor = armor; }
	void setgloves(int gloves) { _gloves = gloves; }
	void setpants(int pants) { _pants = pants; }
	void setboots(int boots) { _boots = boots; }
	//���� ���Լ�
	void setattRing(int attRing) { _attRing = attRing; }
	void setdefRing(int defRing) { _defRing = defRing; }
	void setstrattRing(int strattRing) { _strattRing = strattRing; }
	void setstrdefRing(int strdefRing) { _strdefRing = strdefRing; }
	void setspecialRing(int specialRing) { _specialRing = specialRing; }
	//���� ���Լ�
	void setattPotion(int attPotion) { _attPotion = attPotion; }
	void setdefPotion(int defPotion) { _defPotion = defPotion; }
	void setmpPotion(int mpPotion) { _mpPotion = mpPotion; }
	void sethpPotion(int hpPotion) { _hpPotion = hpPotion; }
	void strangePotion(int strangePotion) { _strangePotion = strangePotion; }

	//hp,mp ���Լ�
	int getHp() { return _hp; }
	int getMp() { return _mp; }
	//hp,mp ���Լ�
	void setHp(int hp) { _hp = hp; }
	void setMp(int mp) { _mp = mp; }

	//���ݷ�,���� ���Լ�
	int getAttdamage() { return _attDamage; }
	int getDefdamage() { return _defDamage; }
	//���ݷ�,���� ���Լ�
	void setAttdamage(int attdamage) { _attDamage = attdamage; }
	void setDefdamage(int defdamage) { _defDamage = defdamage; }

	//�� ���Լ�
	int getMoney() { return _money; }
	int getCurrentmoney() { return _currentMoney; }
	//�� ���Լ�
	void setMoney(int money) { _money = money; }
	void setCurrentmoney(int currentMoney) { _currentMoney = currentMoney; }

	////�κ��丮ĭ ���Լ� 
	//int getSlot1() { return _slot1; }
	//int getSlot2() { return _slot2; }
	//int getSlot3() { return _slot3; }
	//int getSlot4() { return _slot4; }
	////�κ��丮ĭ ���Լ� 
	//void setSlot1(int slot1) { _slot1 = slot1; }
	//void setSlot2(int slot2) { _slot1 = slot2; }
	//void setSlot3(int slot3) { _slot1 = slot3; }
	//void setSlot4(int slot4) { _slot1 = slot4; }

	








public:

	user();
	~user();

	


	void status();
};

