#pragma once
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string.h>

using namespace std;
class store 
{

	
	//무기
	int _longSword;
	int _longBow;
	int _dama;
	int _ssaul;
	int _majok;
	//방어구
	int _helmet;
	int _armor;
	int _gloves;
	int _pants;
	int _boots;
	//반지
	int _attRing;
	int _defRing;
	int _strattRing;
	int _strdefRing;
	int _specialRing;
	//포션
	int _attPotion;
	int _defPotion;
	int _mpPotion;
	int _hpPotion;
	int _strangePotion;
	//공격력
	int _attDamage;
	//방어력 
	int _defDamage;
	//Hp
	int _hp;
	//mp
	int _mp;

	
	
	

public:

	//기타 변수 
	int _key;
	

	//무기 겟함수
	int getLongsword() { return _longSword; }
	int getLongbow() { return _longBow; }
	int getDama() { return _dama; }
	int getSsaul() { return _ssaul; }
	int getMajok() { return _majok; }

	//방어구 겟함수
	int getHelmet() { return _helmet; }
	int getArmor() { return _armor; }
	int getGloves() { return _gloves; }
	int getPants() { return _pants; }
	int getBoots() { return _boots; }

	//반지 겟함수 
	int getAttring() { return _attRing; }
	int getDefring() { return _defRing; }
	int getStrattring() { return _strattRing; }
	int getStrdefring() { return _strdefRing; }
	int getSpecialring() { return _specialRing; }

	//포션 겟함수 
	int getAttpotion() { return _attPotion; }
	int getDefpotion() { return _defPotion; }
	int mpPotion() { return _mpPotion; }
	int hpPotion() { return _hpPotion; }
	int strangePotion() { return _strangePotion; }

	//무기 셋함수
	void setLongsword(int longSword) { _longSword = longSword; }
	void setLongbow(int longBow) { _longBow = longBow; }
	void setDama(int dama) { _dama = dama; }
	void setSsaul(int ssaul) { _ssaul = ssaul; }
	void setMajok(int majok) { _majok = majok; }
	//방어구 셋함수 
	void sethelmet(int helmet) { _helmet = helmet; }
	void setarmor(int armor) { _armor = armor; }
	void setgloves(int gloves) { _gloves = gloves; }
	void setpants(int pants) { _pants = pants; }
	void setboots(int boots) { _boots = boots; }
	//반지 셋함수
	void setattRing(int attRing) { _attRing = attRing; }
	void setdefRing(int defRing) { _defRing = defRing; }
	void setstrattRing(int strattRing) { _strattRing = strattRing; }
	void setstrdefRing(int strdefRing) { _strdefRing = strdefRing; }
	void setspecialRing(int specialRing) { _specialRing = specialRing; }
	//포션 셋함수
	void setattPotion(int attPotion) { _attPotion = attPotion; }
	void setdefPotion(int defPotion) { _defPotion = defPotion; }
	void setmpPotion(int mpPotion) { _mpPotion = mpPotion; }
	void sethpPotion(int hpPotion) { _hpPotion = hpPotion; }
	void strangePotion(int strangePotion) { _strangePotion = strangePotion; }

	//hp,mp 겟함수
	int getHp() { return _hp; }
	int getMp() { return _mp; }
	//hp,mp 셋함수
	void setHp(int hp) { _hp = hp; }
	void getMp(int mp) { _mp = mp; }

	//공격력,방어력 겟함수
	int getAttdamage() { return _attDamage; }
	int getDefdamage() { return _defDamage; }
	//공격력,방어력 셋함수
	int setAttdamage(int attdamage) { _attDamage = attdamage; }
	int setDefdamage(int defdamage) { _defDamage = defdamage; }












	store();
	~store();

	//무기 함수
	void longswrod1();
	void longbow1();
	void dama1();
	void ssaul1();
	void majok1();
	//방어구 함수
	void helmet1();
	void armor1();
	void gloves1();
	void pants1();
	void boots1();
	//반지 함수
	void attring1();
	void defring1();
	void strattring1();
	void strdering1();
	void specialring1();
	//포션 함수
	void attpotion1();
	void defpotion1();
	void mppotion1();
	void hppotion1();
	void strangepotion1();




};

