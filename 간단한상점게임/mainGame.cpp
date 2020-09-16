#include "mainGame.h"

mainGame::mainGame()
{

	_user = new user;
	_store = new store;

	//초기화

	_user->setAttdamage(100);
	_user->setDefdamage(100);
	_user->setHp(100);
	_user->setMp(100);
	_user->setMoney(50000);



	while (true)
	{
		cout << endl;
		cout << " 게임 ㄱㄱ" << endl;
		cout << "⑴. 인벤토리 ⑵. 상인 ⑶. 게임종료" << endl;
		cin >> _key;
		cout << endl;

		if (_key > 4 || _key < 1)
		{

			cout << endl;
			cout << "설명을 다시확인하자" << endl;
			cout << endl;
			Sleep(1000);
			system("cls");

			continue;

		}
		
		//인벤토리
		if (_key == 1)
		{
			if (_user->getMoney() < 0) _user->setMoney(_user->getMoney() == 0);

			_user->status();
			if (_user->getMoney() <= 0)
			{

				cout << endl;
				cout << "소지금이 부족하다" << endl;
				cout << endl;
				continue;
			}


			cout << endl;
			cout << "인벤토리 칸 " << endl;
			cout << endl;
			cout << "1번칸 : " << slot1 << endl;
			cout << endl;
			cout << "2번칸 : " << slot2 << endl;
			cout << endl;
			cout << "3번칸 : " << slot3 << endl;
			cout << endl;
			cout << "4번칸 : " << slot4 << endl;
			cout << endl;
			continue;
		}

		//상인
		if (_key == 2)
		{
			if (_user->getMoney() == 0)
			{
				cout << "소지금이 없어서 물건을 살 수 없다" << endl;
				continue;
			}
			cout << endl;
			cout << " <유사 리니지 상인 ㅋ>" << endl;
			cout << endl;
			cout << "⑴. 사기 ⑵.팔기 " << endl;
			cin >> _key;

			//물건 사기
			if (_key == 1)
			{
				cout << "어떤 아이템을 고를까?" << endl;
				cout << " ⑴.무기  ⑵.방어구 ⑶.장신구 ⑷.포션" << endl;
				cin >> _key;

				if (_key > 4 || _key < 1)
				{

					cout << endl;
					cout << "아이템을 잘못고름 다시고르자" << endl;
					cout << endl;
					Sleep(1000);
					system("cls");

					continue;

				}

				//무기 고름
				if (_key == 1)
				{
					cout << endl;
					cout << "어떤 무기를 고를까?" << endl;
					cout << endl;
					_store->longswrod1();
					cout << endl;
					_store->longbow1();
					cout << endl;
					_store->dama1();
					cout << endl;
					_store->ssaul1();
					cout << endl;
					_store->majok1();
					cout << endl;
					cout << endl;

					cin >> slotKey1;
					cout << endl;
					//무기 예외
					if (slotKey1 > 5 || slotKey1 < 1)
					{

						cout << endl;
						cout << "무기를 잘못고름 다시고르자" << endl;
						cout << endl;
						Sleep(1000);
						system("cls");

						continue;

					}
					//첫 번째 무기 
					if (slotKey1 == 1)
					{
						//if(_user->getMoney()<=_)

						cout << "롱소드를 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 1000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}
						cin >> _key;

						if (_key == 1)slot1 = "롱소드";
						if (_key == 2)slot2 = "롱소드";
						if (_key == 3)slot3 = "롱소드";
						if (_key == 4)slot4 = "롱소드";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//두 번째 무기 
					if (slotKey1 == 2)
					{

						cout << "롱보우를 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 1500);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}
						cin >> _key;

						if (_key == 1)slot1 = "롱보우";
						if (_key == 2)slot2 = "롱보우";
						if (_key == 3)slot3 = "롱보우";
						if (_key == 4)slot4 = "롱보우";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//세 번째 무기 
					if (slotKey1 == 3)
					{

						cout << "다마스커스를 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 3000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}
						cin >> _key;

						if (_key == 1)slot1 = "다마스커스";
						if (_key == 2)slot2 = "다마스커스";
						if (_key == 3)slot3 = "다마스커스";
						if (_key == 4)slot4 = "다마스커스";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//네 번째 무기 
					if (slotKey1 == 4)
					{

						cout << "싸울아비 장검을 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 5000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "싸울아비 장검";
						if (_key == 2)slot2 = "싸울아비 장검";
						if (_key == 3)slot3 = "싸울아비 장검";
						if (_key == 4)slot4 = "싸울아비 장검";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//다섯 번째 무기 
					if (slotKey1 == 5)
					{

						cout << "마족의검을 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 9000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "마족의 검";
						if (_key == 2)slot2 = "마족의 검";
						if (_key == 3)slot3 = "마족의 검";
						if (_key == 4)slot4 = "마족의 검";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
				}//무기 고름 끝

				//방어구 고름 
				if (_key == 2)
				{
					cout << endl;
					cout << "어떤 방어구를 고를까?" << endl;
					cout << endl;
					_store->helmet1();
					cout << endl;
					_store->armor1();
					cout << endl;
					_store->gloves1();
					cout << endl;
					_store->pants1();
					cout << endl;
					_store->boots1();
					cout << endl;
					cout << endl;

					cin >> slotKey2;
					cout << endl;
					if (slotKey2 > 5 || slotKey2 < 1)
					{

						cout << endl;
						cout << "방어구를 잘못고름 다시고르자" << endl;
						cout << endl;
						Sleep(1000);
						system("cls");

						continue;

					}
					//첫 번째 방어구 
					if (slotKey2 == 1)
					{

						cout << "기사의 면갑을 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 3000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "기사의 면갑";
						if (_key == 2)slot2 = "기사의 면갑";
						if (_key == 3)slot3 = "기사의 면갑";
						if (_key == 4)slot4 = "기사의 면갑";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//두 번째 방어구 
					if (slotKey2 == 2)
					{

						cout << "이계의 갑옷을 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 4000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "이계의 갑옷";
						if (_key == 2)slot2 = "이계의 갑옷";
						if (_key == 3)slot3 = "이계의 갑옷";
						if (_key == 4)slot4 = "이계으 갑옷";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//세 번째 방어구 
					if (slotKey2 == 3)
					{

						cout << "수정 장갑을 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 7000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "수정 장갑";
						if (_key == 2)slot2 = "수정 장갑";
						if (_key == 3)slot3 = "수정 장갑";
						if (_key == 4)slot4 = "수정 장갑";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//네 번째 방어구 
					if (slotKey2 == 4)
					{

						cout << "강철 각반을 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 8000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "강철 각반";
						if (_key == 2)slot2 = "강철 각반";
						if (_key == 3)slot3 = "강철 각반";
						if (_key == 4)slot4 = "강철 각반";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//다섯 번째 방어구 
					if (slotKey2 == 5)
					{

						cout << "신관의 부츠를 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 10000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "신관의 부츠";
						if (_key == 2)slot2 = "신관의 부츠";
						if (_key == 3)slot3 = "신관의 부츠";
						if (_key == 4)slot4 = "신관의 부츠";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
				}
				//방어구 고름 끝

				//반지 고름
				if (_key == 3)
				{
					cout << endl;
					cout << "어떤 반지를 고를까?" << endl;
					cout << endl;
					_store->attring1();
					cout << endl;
					_store->defring1();
					cout << endl;
					_store->strattring1();
					cout << endl;
					_store->strdering1();
					cout << endl;
					_store->specialring1();
					cout << endl;
					cout << endl;


					cin >> slotKey3;
					cout << endl;
					if (slotKey3 > 5 || slotKey3 < 1)
					{

						cout << endl;
						cout << "방어구를 잘못고름 다시고르자" << endl;
						cout << endl;
						Sleep(1000);
						system("cls");

						continue;

					}
					//첫 번째 반지
					if (slotKey3 == 1)
					{

						cout << "용맹 반지를 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 5000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "용맹 반지";
						if (_key == 2)slot2 = "용맹 반지";
						if (_key == 3)slot3 = "용맹 반지";
						if (_key == 4)slot4 = "용맹 반지";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//두 번째 반지
					if (slotKey3 == 2)
					{

						cout << "방어 반지를 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 5000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "방어 반지";
						if (_key == 2)slot2 = "방어 반지";
						if (_key == 3)slot3 = "방어 반지";
						if (_key == 4)slot4 = "방어 반지";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//세 번째 반지
					if (slotKey3 == 3)
					{

						cout << "강화된 용맹 반지를 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 10000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "강화된 용맹 반지";
						if (_key == 2)slot2 = "강화된 용맹 반지";
						if (_key == 3)slot3 = "강화된 용맹 반지";
						if (_key == 4)slot4 = "강화된 용맹 반지";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//네 번째 반지
					if (slotKey3 == 4)
					{

						cout << "강화된 방어 반지를 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 10000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "강화된 방어 반지";
						if (_key == 2)slot2 = "강화된 방어 반지";
						if (_key == 3)slot3 = "강화된 방어 반지";
						if (_key == 4)slot4 = "강회된 방어 반지";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//다섯 번째 반지
					if (slotKey3 == 5)
					{

						cout << "스페셜 반지를 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 15000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "스페셜 반지";
						if (_key == 2)slot2 = "스페셜 반지";
						if (_key == 3)slot3 = "스페셜 반지";
						if (_key == 4)slot4 = "스페셜 반지";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
				}

				//반지 고름 끝

				//포션 고름
				if (_key == 4)
				{
					cout << endl;
					cout << "어떤 포션을 고를까?" << endl;
					cout << endl;
					_store->attpotion1();
					cout << endl;
					_store->defpotion1();
					cout << endl;
					_store->mppotion1();
					cout << endl;
					_store->hppotion1();
					cout << endl;
					_store->strangepotion1();
					cout << endl;
					cout << endl;

					cin >> slotKey4;
					cout << endl;
					if (slotKey4 > 5 || slotKey4 < 1)
					{

						cout << endl;
						cout << "포션을 잘못고름 다시고르자" << endl;
						cout << endl;
						Sleep(1000);
						system("cls");

						continue;

					}
					//첫 번째 포션
					if (slotKey4 == 1)
					{

						cout << "공격력 + 포션을 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 8000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "공격력 + 포션";
						if (_key == 2)slot2 = "공격력 + 포션";
						if (_key == 3)slot3 = "공격력 + 포션";
						if (_key == 4)slot4 = "공격력 + 포션";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//두 번째 포션
					if (slotKey4 == 2)
					{

						cout << "방어력 + 포션을 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 8000);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "방어력 + 포션";
						if (_key == 2)slot2 = "방어력 + 포션";
						if (_key == 3)slot3 = "방어력 + 포션";
						if (_key == 4)slot4 = "방어력 + 포션";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//세 번째 포션
					if (slotKey4 == 3)
					{

						cout << "mp포션을 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 50);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "mp포션";
						if (_key == 2)slot2 = "mp포션";
						if (_key == 3)slot3 = "mp포션";
						if (_key == 4)slot4 = "mp포션";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//네 번째 포션
					if (slotKey4 == 4)
					{

						cout << "hp포션을 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 50);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "hp포션";
						if (_key == 2)slot2 = "hp포션";
						if (_key == 3)slot3 = "hp포션";
						if (_key == 4)slot4 = "hp포션";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//다섯 번째 포션
					if (slotKey4 == 5)
					{

						cout << "수상한 포션을 골랐다" << endl;
						_user->setMoney(_user->getMoney() - 200);
						cout << endl;
						cout << "몇 번 슬롯에 넣을까" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "슬롯을 잘못고름 다시고르자" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "수상한 포션";
						if (_key == 2)slot2 = "수상한 포션";
						if (_key == 3)slot3 = "수상한 포션";
						if (_key == 4)slot4 = "수상한 포션";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
				}
				//포션 고름 끝
			}//물건 사기 끝

			//물건 팔기
			if (_key == 2)
			{
				cout << endl;
				cout << "인벤토리 칸 " << endl;
				cout << endl;
				cout << "1번칸 : " << slot1 << endl;
				cout << endl;
				cout << "2번칸 : " << slot2 << endl;
				cout << endl;
				cout << "3번칸 : " << slot3 << endl;
				cout << endl;
				cout << "4번칸 : " << slot4 << endl;
				cout << endl;

				cout << "어떤 아이템을 팔까?" << endl;
				//slot1 판매
				cin >> slot1;

				//slot1 무기 판매
			    if(slot1 == "롱소드")
				{
					cout << endl;
					cout << "롱소드를 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 500);
					cout << endl;
					continue;
					
				}
				if (slot1 == "롱보우")
				{
					cout << endl;
					cout << "롱보우를 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 750) ;
					cout << endl;
					continue;
				}
				if (slot1 == "다마스커스")
				{
					cout << endl;
					cout << "다마스커스를 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot1 == "싸울아비장검")
				{
					cout << endl;
					cout << "싸울아비 장검을 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot1 == "마족의검")
				{
					cout << endl;
					cout << "마족의 검을 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				//slot1 무기판매 끝

				//slot1 방어구 판매
				if (slot1 == "기사의면갑")
				{
					cout << endl;
					cout << "기사의 면갑을 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot1 == "이계의갑옷")
				{
					cout << endl;
					cout << "이계의 갑옷을 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2000);
					cout << endl;
					continue;
				}
				if (slot1 == "수정장갑")
				{
					cout << endl;
					cout << "수정 장갑을 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				if (slot1 == "강철각반")
				{
					cout << endl;
					cout << "강철 각반을 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot1 == "신관의부츠")
				{
					cout << endl;
					cout << "신관의 부츠를 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 5000);
					cout << endl;
					continue;
				}
				//slot1 방어구 판매

				//slot1 반지 판매
				if (slot1 == "용맹반지")
				{
					cout << endl;
					cout << "용맹 반지를 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot1 == "방어반지")
				{
					cout << endl;
					cout << "방어 반지를 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot1 == "강화된용맹반지")
				{
					cout << endl;
					cout << "강화된 용맹 반지" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot1 == "강화된방어반지")
				{
					cout << endl;
					cout << "강화된 방어 반지를 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot1 == "스페셜반지")
				{
					cout << endl;
					cout << "스페셜 반지를 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 7500);
					cout << endl;
					continue;
				}//slot1 반지 판매

				//slot1 포션 판매
				if (slot1 == "공격력+포션")
				{
					cout << endl;
					cout << "공격력 + 포션을 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot1 == "방어력+포션")
				{
					cout << endl;
					cout << "방어력 + 포션을 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot1 == "hp포션")
				{
					cout << endl;
					cout << "hp포션을 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot1 == "mp포션")
				{
					cout << endl;
					cout << "mp포션을 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot1 == "수상한포션")
				{
					cout << endl;
					cout << "수상한 포션을 팔았다" << endl;
					slot1 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 100);
					cout << endl;
					continue;
				}//slot1 포션 판매

				//slot2 무기 판매
				if (slot2 == "롱소드")
				{
					cout << endl;
					cout << "롱소드를 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 500);
					cout << endl;
					continue;

				}
				if (slot2 == "롱보우")
				{
					cout << endl;
					cout << "롱보우를 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 750);
					cout << endl;
					continue;
				}
				if (slot2 == "다마스커스")
				{
					cout << endl;
					cout << "다마스커스를 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot2 == "싸울아비장검")
				{
					cout << endl;
					cout << "싸울아비 장검을 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot2 == "마족의검")
				{
					cout << endl;
					cout << "마족의 검을 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				//slot2 무기판매 끝

				//slot2 방어구 판매
				if (slot2 == "기사의면갑")
				{
					cout << endl;
					cout << "기사의 면갑을 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot2 == "이계의갑옷")
				{
					cout << endl;
					cout << "이계의 갑옷을 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2000);
					cout << endl;
					continue;
				}
				if (slot2 == "수정장갑")
				{
					cout << endl;
					cout << "수정 장갑을 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				if (slot2 == "강철각반")
				{
					cout << endl;
					cout << "강철 각반을 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot2 == "신관의부츠")
				{
					cout << endl;
					cout << "신관의 부츠를 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 5000);
					cout << endl;
					continue;
				}
				//slot2 방어구 판매

				//slot2 반지 판매
				if (slot2 == "용맹반지")
				{
					cout << endl;
					cout << "용맹 반지를 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot2 == "방어반지")
				{
					cout << endl;
					cout << "방어 반지를 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot2 == "강화된용맹반지")
				{
					cout << endl;
					cout << "강화된 용맹 반지" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot2 == "강화된방어반지")
				{
					cout << endl;
					cout << "강화된 방어 반지를 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot2 == "스페셜반지")
				{
					cout << endl;
					cout << "스페셜 반지를 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 7500);
					cout << endl;
					continue;
				}//slot2 반지 판매

				//slot2 포션 판매
				if (slot2 == "공격력+포션")
				{
					cout << endl;
					cout << "공격력 + 포션을 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot2 == "방어력+포션")
				{
					cout << endl;
					cout << "방어력 + 포션을 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot2 == "hp포션")
				{
					cout << endl;
					cout << "hp포션을 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot2 == "mp포션")
				{
					cout << endl;
					cout << "mp포션을 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot2 == "수상한포션")
				{
					cout << endl;
					cout << "수상한 포션을 팔았다" << endl;
					slot2 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 100);
					cout << endl;
					continue;
				}//slot2 포션 판매

				//slot3 무기 판매
				if (slot3 == "롱소드")
				{
					cout << endl;
					cout << "롱소드를 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 500);
					cout << endl;
					continue;

				}
				if (slot3 == "롱보우")
				{
					cout << endl;
					cout << "롱보우를 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 750);
					cout << endl;
					continue;
				}
				if (slot3 == "다마스커스")
				{
					cout << endl;
					cout << "다마스커스를 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot3 == "싸울아비장검")
				{
					cout << endl;
					cout << "싸울아비 장검을 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot3 == "마족의검")
				{
					cout << endl;
					cout << "마족의 검을 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				//slot3 무기판매 끝

				//slot3 방어구 판매
				if (slot3 == "기사의면갑")
				{
					cout << endl;
					cout << "기사의 면갑을 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot3 == "이계의갑옷")
				{
					cout << endl;
					cout << "이계의 갑옷을 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2000);
					cout << endl;
					continue;
				}
				if (slot3 == "수정장갑")
				{
					cout << endl;
					cout << "수정 장갑을 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				if (slot3 == "강철각반")
				{
					cout << endl;
					cout << "강철 각반을 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot3 == "신관의부츠")
				{
					cout << endl;
					cout << "신관의 부츠를 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 5000);
					cout << endl;
					continue;
				}
				//slot3 방어구 판매

				//slot3 반지 판매
				if (slot3 == "용맹반지")
				{
					cout << endl;
					cout << "용맹 반지를 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot3 == "방어반지")
				{
					cout << endl;
					cout << "방어 반지를 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot3 == "강화된용맹반지")
				{
					cout << endl;
					cout << "강화된 용맹 반지" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot3 == "강화된방어반지")
				{
					cout << endl;
					cout << "강화된 방어 반지를 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot3 == "스페셜반지")
				{
					cout << endl;
					cout << "스페셜 반지를 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 7500);
					cout << endl;
					continue;
				}//slot3 반지 판매

				//slot3 포션 판매
				if (slot3 == "공격력+포션")
				{
					cout << endl;
					cout << "공격력 + 포션을 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot3 == "방어력+포션")
				{
					cout << endl;
					cout << "방어력 + 포션을 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot3 == "hp포션")
				{
					cout << endl;
					cout << "hp포션을 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot3 == "mp포션")
				{
					cout << endl;
					cout << "mp포션을 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot3 == "수상한포션")
				{
					cout << endl;
					cout << "수상한 포션을 팔았다" << endl;
					slot3 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 100);
					cout << endl;
					continue;
				}//slot3 포션 판매

				//slot4 무기 판매
				if (slot4 == "롱소드")
				{
					cout << endl;
					cout << "롱소드를 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 500);
					cout << endl;
					continue;

				}
				if (slot4 == "롱보우")
				{
					cout << endl;
					cout << "롱보우를 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 750);
					cout << endl;
					continue;
				}
				if (slot4 == "다마스커스")
				{
					cout << endl;
					cout << "다마스커스를 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot4 == "싸울아비장검")
				{
					cout << endl;
					cout << "싸울아비 장검을 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot4 == "마족의검")
				{
					cout << endl;
					cout << "마족의 검을 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				//slot4 무기판매 끝

				//slot4 방어구 판매
				if (slot4 == "기사의면갑")
				{
					cout << endl;
					cout << "기사의 면갑을 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot4 == "이계의갑옷")
				{
					cout << endl;
					cout << "이계의 갑옷을 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2000);
					cout << endl;
					continue;
				}
				if (slot4 == "수정장갑")
				{
					cout << endl;
					cout << "수정 장갑을 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				if (slot4 == "강철각반")
				{
					cout << endl;
					cout << "강철 각반을 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot4 == "신관의부츠")
				{
					cout << endl;
					cout << "신관의 부츠를 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 5000);
					cout << endl;
					continue;
				}
				//slot4 방어구 판매

				//slot4 반지 판매
				if (slot4 == "용맹반지")
				{
					cout << endl;
					cout << "용맹 반지를 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot4 == "방어반지")
				{
					cout << endl;
					cout << "방어 반지를 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot4 == "강화된용맹반지")
				{
					cout << endl;
					cout << "강화된 용맹 반지" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot4 == "강화된방어반지")
				{
					cout << endl;
					cout << "강화된 방어 반지를 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot4 == "스페셜반지")
				{
					cout << endl;
					cout << "스페셜 반지를 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 7500);
					cout << endl;
					continue;
				}//slot4 반지 판매

				//slot4 포션 판매
				if (slot4 == "공격력+포션")
				{
					cout << endl;
					cout << "공격력 + 포션을 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot4 == "방어력+포션")
				{
					cout << endl;
					cout << "방어력 + 포션을 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot4 == "hp포션")
				{
					cout << endl;
					cout << "hp포션을 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot4 == "mp포션")
				{
					cout << endl;
					cout << "mp포션을 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot4 == "수상한포션")
				{
					cout << endl;
					cout << "수상한 포션을 팔았다" << endl;
					slot4 = "빈슬롯";
					_user->setMoney(_user->getMoney() + 100);
					cout << endl;
					continue;
				}//slot1 포션 판매
			}//물건 팔기 끝
		}

		if (_key == 3)
		{
			cout << endl;
			cout << "게임 종료됨..." << endl;
			cout << endl;
		}
		break;
	}
};

mainGame::~mainGame()
{
	delete _user;
	delete _store;
};
