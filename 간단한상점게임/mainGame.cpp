#include "mainGame.h"

mainGame::mainGame()
{

	_user = new user;
	_store = new store;

	//�ʱ�ȭ

	_user->setAttdamage(100);
	_user->setDefdamage(100);
	_user->setHp(100);
	_user->setMp(100);
	_user->setMoney(50000);



	while (true)
	{
		cout << endl;
		cout << " ���� ����" << endl;
		cout << "��. �κ��丮 ��. ���� ��. ��������" << endl;
		cin >> _key;
		cout << endl;

		if (_key > 4 || _key < 1)
		{

			cout << endl;
			cout << "������ �ٽ�Ȯ������" << endl;
			cout << endl;
			Sleep(1000);
			system("cls");

			continue;

		}
		
		//�κ��丮
		if (_key == 1)
		{
			if (_user->getMoney() < 0) _user->setMoney(_user->getMoney() == 0);

			_user->status();
			if (_user->getMoney() <= 0)
			{

				cout << endl;
				cout << "�������� �����ϴ�" << endl;
				cout << endl;
				continue;
			}


			cout << endl;
			cout << "�κ��丮 ĭ " << endl;
			cout << endl;
			cout << "1��ĭ : " << slot1 << endl;
			cout << endl;
			cout << "2��ĭ : " << slot2 << endl;
			cout << endl;
			cout << "3��ĭ : " << slot3 << endl;
			cout << endl;
			cout << "4��ĭ : " << slot4 << endl;
			cout << endl;
			continue;
		}

		//����
		if (_key == 2)
		{
			if (_user->getMoney() == 0)
			{
				cout << "�������� ��� ������ �� �� ����" << endl;
				continue;
			}
			cout << endl;
			cout << " <���� ������ ���� ��>" << endl;
			cout << endl;
			cout << "��. ��� ��.�ȱ� " << endl;
			cin >> _key;

			//���� ���
			if (_key == 1)
			{
				cout << "� �������� ����?" << endl;
				cout << " ��.����  ��.�� ��.��ű� ��.����" << endl;
				cin >> _key;

				if (_key > 4 || _key < 1)
				{

					cout << endl;
					cout << "�������� �߸��� �ٽð���" << endl;
					cout << endl;
					Sleep(1000);
					system("cls");

					continue;

				}

				//���� ��
				if (_key == 1)
				{
					cout << endl;
					cout << "� ���⸦ ����?" << endl;
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
					//���� ����
					if (slotKey1 > 5 || slotKey1 < 1)
					{

						cout << endl;
						cout << "���⸦ �߸��� �ٽð���" << endl;
						cout << endl;
						Sleep(1000);
						system("cls");

						continue;

					}
					//ù ��° ���� 
					if (slotKey1 == 1)
					{
						//if(_user->getMoney()<=_)

						cout << "�ռҵ带 �����" << endl;
						_user->setMoney(_user->getMoney() - 1000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}
						cin >> _key;

						if (_key == 1)slot1 = "�ռҵ�";
						if (_key == 2)slot2 = "�ռҵ�";
						if (_key == 3)slot3 = "�ռҵ�";
						if (_key == 4)slot4 = "�ռҵ�";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�� ��° ���� 
					if (slotKey1 == 2)
					{

						cout << "�պ��츦 �����" << endl;
						_user->setMoney(_user->getMoney() - 1500);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}
						cin >> _key;

						if (_key == 1)slot1 = "�պ���";
						if (_key == 2)slot2 = "�պ���";
						if (_key == 3)slot3 = "�պ���";
						if (_key == 4)slot4 = "�պ���";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�� ��° ���� 
					if (slotKey1 == 3)
					{

						cout << "�ٸ���Ŀ���� �����" << endl;
						_user->setMoney(_user->getMoney() - 3000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}
						cin >> _key;

						if (_key == 1)slot1 = "�ٸ���Ŀ��";
						if (_key == 2)slot2 = "�ٸ���Ŀ��";
						if (_key == 3)slot3 = "�ٸ���Ŀ��";
						if (_key == 4)slot4 = "�ٸ���Ŀ��";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�� ��° ���� 
					if (slotKey1 == 4)
					{

						cout << "�ο�ƺ� ����� �����" << endl;
						_user->setMoney(_user->getMoney() - 5000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "�ο�ƺ� ���";
						if (_key == 2)slot2 = "�ο�ƺ� ���";
						if (_key == 3)slot3 = "�ο�ƺ� ���";
						if (_key == 4)slot4 = "�ο�ƺ� ���";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�ټ� ��° ���� 
					if (slotKey1 == 5)
					{

						cout << "�����ǰ��� �����" << endl;
						_user->setMoney(_user->getMoney() - 9000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "������ ��";
						if (_key == 2)slot2 = "������ ��";
						if (_key == 3)slot3 = "������ ��";
						if (_key == 4)slot4 = "������ ��";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
				}//���� �� ��

				//�� �� 
				if (_key == 2)
				{
					cout << endl;
					cout << "� ���� ����?" << endl;
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
						cout << "���� �߸��� �ٽð���" << endl;
						cout << endl;
						Sleep(1000);
						system("cls");

						continue;

					}
					//ù ��° �� 
					if (slotKey2 == 1)
					{

						cout << "����� �鰩�� �����" << endl;
						_user->setMoney(_user->getMoney() - 3000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "����� �鰩";
						if (_key == 2)slot2 = "����� �鰩";
						if (_key == 3)slot3 = "����� �鰩";
						if (_key == 4)slot4 = "����� �鰩";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�� ��° �� 
					if (slotKey2 == 2)
					{

						cout << "�̰��� ������ �����" << endl;
						_user->setMoney(_user->getMoney() - 4000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "�̰��� ����";
						if (_key == 2)slot2 = "�̰��� ����";
						if (_key == 3)slot3 = "�̰��� ����";
						if (_key == 4)slot4 = "�̰��� ����";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�� ��° �� 
					if (slotKey2 == 3)
					{

						cout << "���� �尩�� �����" << endl;
						_user->setMoney(_user->getMoney() - 7000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "���� �尩";
						if (_key == 2)slot2 = "���� �尩";
						if (_key == 3)slot3 = "���� �尩";
						if (_key == 4)slot4 = "���� �尩";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�� ��° �� 
					if (slotKey2 == 4)
					{

						cout << "��ö ������ �����" << endl;
						_user->setMoney(_user->getMoney() - 8000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "��ö ����";
						if (_key == 2)slot2 = "��ö ����";
						if (_key == 3)slot3 = "��ö ����";
						if (_key == 4)slot4 = "��ö ����";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�ټ� ��° �� 
					if (slotKey2 == 5)
					{

						cout << "�Ű��� ������ �����" << endl;
						_user->setMoney(_user->getMoney() - 10000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "�Ű��� ����";
						if (_key == 2)slot2 = "�Ű��� ����";
						if (_key == 3)slot3 = "�Ű��� ����";
						if (_key == 4)slot4 = "�Ű��� ����";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
				}
				//�� �� ��

				//���� ��
				if (_key == 3)
				{
					cout << endl;
					cout << "� ������ ����?" << endl;
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
						cout << "���� �߸��� �ٽð���" << endl;
						cout << endl;
						Sleep(1000);
						system("cls");

						continue;

					}
					//ù ��° ����
					if (slotKey3 == 1)
					{

						cout << "��� ������ �����" << endl;
						_user->setMoney(_user->getMoney() - 5000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "��� ����";
						if (_key == 2)slot2 = "��� ����";
						if (_key == 3)slot3 = "��� ����";
						if (_key == 4)slot4 = "��� ����";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�� ��° ����
					if (slotKey3 == 2)
					{

						cout << "��� ������ �����" << endl;
						_user->setMoney(_user->getMoney() - 5000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "��� ����";
						if (_key == 2)slot2 = "��� ����";
						if (_key == 3)slot3 = "��� ����";
						if (_key == 4)slot4 = "��� ����";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�� ��° ����
					if (slotKey3 == 3)
					{

						cout << "��ȭ�� ��� ������ �����" << endl;
						_user->setMoney(_user->getMoney() - 10000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "��ȭ�� ��� ����";
						if (_key == 2)slot2 = "��ȭ�� ��� ����";
						if (_key == 3)slot3 = "��ȭ�� ��� ����";
						if (_key == 4)slot4 = "��ȭ�� ��� ����";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�� ��° ����
					if (slotKey3 == 4)
					{

						cout << "��ȭ�� ��� ������ �����" << endl;
						_user->setMoney(_user->getMoney() - 10000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "��ȭ�� ��� ����";
						if (_key == 2)slot2 = "��ȭ�� ��� ����";
						if (_key == 3)slot3 = "��ȭ�� ��� ����";
						if (_key == 4)slot4 = "��ȸ�� ��� ����";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�ټ� ��° ����
					if (slotKey3 == 5)
					{

						cout << "����� ������ �����" << endl;
						_user->setMoney(_user->getMoney() - 15000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "����� ����";
						if (_key == 2)slot2 = "����� ����";
						if (_key == 3)slot3 = "����� ����";
						if (_key == 4)slot4 = "����� ����";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
				}

				//���� �� ��

				//���� ��
				if (_key == 4)
				{
					cout << endl;
					cout << "� ������ ����?" << endl;
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
						cout << "������ �߸��� �ٽð���" << endl;
						cout << endl;
						Sleep(1000);
						system("cls");

						continue;

					}
					//ù ��° ����
					if (slotKey4 == 1)
					{

						cout << "���ݷ� + ������ �����" << endl;
						_user->setMoney(_user->getMoney() - 8000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "���ݷ� + ����";
						if (_key == 2)slot2 = "���ݷ� + ����";
						if (_key == 3)slot3 = "���ݷ� + ����";
						if (_key == 4)slot4 = "���ݷ� + ����";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�� ��° ����
					if (slotKey4 == 2)
					{

						cout << "���� + ������ �����" << endl;
						_user->setMoney(_user->getMoney() - 8000);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "���� + ����";
						if (_key == 2)slot2 = "���� + ����";
						if (_key == 3)slot3 = "���� + ����";
						if (_key == 4)slot4 = "���� + ����";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�� ��° ����
					if (slotKey4 == 3)
					{

						cout << "mp������ �����" << endl;
						_user->setMoney(_user->getMoney() - 50);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "mp����";
						if (_key == 2)slot2 = "mp����";
						if (_key == 3)slot3 = "mp����";
						if (_key == 4)slot4 = "mp����";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�� ��° ����
					if (slotKey4 == 4)
					{

						cout << "hp������ �����" << endl;
						_user->setMoney(_user->getMoney() - 50);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "hp����";
						if (_key == 2)slot2 = "hp����";
						if (_key == 3)slot3 = "hp����";
						if (_key == 4)slot4 = "hp����";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
					//�ټ� ��° ����
					if (slotKey4 == 5)
					{

						cout << "������ ������ �����" << endl;
						_user->setMoney(_user->getMoney() - 200);
						cout << endl;
						cout << "�� �� ���Կ� ������" << endl;
						if (_key > 4 || _key < 1)
						{

							cout << endl;
							cout << "������ �߸��� �ٽð���" << endl;
							cout << endl;
							Sleep(1000);
							system("cls");

							continue;

						}

						cin >> _key;

						if (_key == 1)slot1 = "������ ����";
						if (_key == 2)slot2 = "������ ����";
						if (_key == 3)slot3 = "������ ����";
						if (_key == 4)slot4 = "������ ����";

						cout << endl;
						Sleep(1000);
						system("cls");
						continue;
					}
				}
				//���� �� ��
			}//���� ��� ��

			//���� �ȱ�
			if (_key == 2)
			{
				cout << endl;
				cout << "�κ��丮 ĭ " << endl;
				cout << endl;
				cout << "1��ĭ : " << slot1 << endl;
				cout << endl;
				cout << "2��ĭ : " << slot2 << endl;
				cout << endl;
				cout << "3��ĭ : " << slot3 << endl;
				cout << endl;
				cout << "4��ĭ : " << slot4 << endl;
				cout << endl;

				cout << "� �������� �ȱ�?" << endl;
				//slot1 �Ǹ�
				cin >> slot1;

				//slot1 ���� �Ǹ�
			    if(slot1 == "�ռҵ�")
				{
					cout << endl;
					cout << "�ռҵ带 �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 500);
					cout << endl;
					continue;
					
				}
				if (slot1 == "�պ���")
				{
					cout << endl;
					cout << "�պ��츦 �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 750) ;
					cout << endl;
					continue;
				}
				if (slot1 == "�ٸ���Ŀ��")
				{
					cout << endl;
					cout << "�ٸ���Ŀ���� �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot1 == "�ο�ƺ����")
				{
					cout << endl;
					cout << "�ο�ƺ� ����� �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot1 == "�����ǰ�")
				{
					cout << endl;
					cout << "������ ���� �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				//slot1 �����Ǹ� ��

				//slot1 �� �Ǹ�
				if (slot1 == "����Ǹ鰩")
				{
					cout << endl;
					cout << "����� �鰩�� �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot1 == "�̰��ǰ���")
				{
					cout << endl;
					cout << "�̰��� ������ �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2000);
					cout << endl;
					continue;
				}
				if (slot1 == "�����尩")
				{
					cout << endl;
					cout << "���� �尩�� �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				if (slot1 == "��ö����")
				{
					cout << endl;
					cout << "��ö ������ �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot1 == "�Ű��Ǻ���")
				{
					cout << endl;
					cout << "�Ű��� ������ �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 5000);
					cout << endl;
					continue;
				}
				//slot1 �� �Ǹ�

				//slot1 ���� �Ǹ�
				if (slot1 == "��͹���")
				{
					cout << endl;
					cout << "��� ������ �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot1 == "������")
				{
					cout << endl;
					cout << "��� ������ �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot1 == "��ȭ�ȿ�͹���")
				{
					cout << endl;
					cout << "��ȭ�� ��� ����" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot1 == "��ȭ�ȹ�����")
				{
					cout << endl;
					cout << "��ȭ�� ��� ������ �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot1 == "����ȹ���")
				{
					cout << endl;
					cout << "����� ������ �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 7500);
					cout << endl;
					continue;
				}//slot1 ���� �Ǹ�

				//slot1 ���� �Ǹ�
				if (slot1 == "���ݷ�+����")
				{
					cout << endl;
					cout << "���ݷ� + ������ �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot1 == "����+����")
				{
					cout << endl;
					cout << "���� + ������ �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot1 == "hp����")
				{
					cout << endl;
					cout << "hp������ �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot1 == "mp����")
				{
					cout << endl;
					cout << "mp������ �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot1 == "����������")
				{
					cout << endl;
					cout << "������ ������ �ȾҴ�" << endl;
					slot1 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 100);
					cout << endl;
					continue;
				}//slot1 ���� �Ǹ�

				//slot2 ���� �Ǹ�
				if (slot2 == "�ռҵ�")
				{
					cout << endl;
					cout << "�ռҵ带 �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 500);
					cout << endl;
					continue;

				}
				if (slot2 == "�պ���")
				{
					cout << endl;
					cout << "�պ��츦 �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 750);
					cout << endl;
					continue;
				}
				if (slot2 == "�ٸ���Ŀ��")
				{
					cout << endl;
					cout << "�ٸ���Ŀ���� �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot2 == "�ο�ƺ����")
				{
					cout << endl;
					cout << "�ο�ƺ� ����� �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot2 == "�����ǰ�")
				{
					cout << endl;
					cout << "������ ���� �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				//slot2 �����Ǹ� ��

				//slot2 �� �Ǹ�
				if (slot2 == "����Ǹ鰩")
				{
					cout << endl;
					cout << "����� �鰩�� �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot2 == "�̰��ǰ���")
				{
					cout << endl;
					cout << "�̰��� ������ �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2000);
					cout << endl;
					continue;
				}
				if (slot2 == "�����尩")
				{
					cout << endl;
					cout << "���� �尩�� �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				if (slot2 == "��ö����")
				{
					cout << endl;
					cout << "��ö ������ �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot2 == "�Ű��Ǻ���")
				{
					cout << endl;
					cout << "�Ű��� ������ �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 5000);
					cout << endl;
					continue;
				}
				//slot2 �� �Ǹ�

				//slot2 ���� �Ǹ�
				if (slot2 == "��͹���")
				{
					cout << endl;
					cout << "��� ������ �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot2 == "������")
				{
					cout << endl;
					cout << "��� ������ �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot2 == "��ȭ�ȿ�͹���")
				{
					cout << endl;
					cout << "��ȭ�� ��� ����" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot2 == "��ȭ�ȹ�����")
				{
					cout << endl;
					cout << "��ȭ�� ��� ������ �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot2 == "����ȹ���")
				{
					cout << endl;
					cout << "����� ������ �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 7500);
					cout << endl;
					continue;
				}//slot2 ���� �Ǹ�

				//slot2 ���� �Ǹ�
				if (slot2 == "���ݷ�+����")
				{
					cout << endl;
					cout << "���ݷ� + ������ �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot2 == "����+����")
				{
					cout << endl;
					cout << "���� + ������ �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot2 == "hp����")
				{
					cout << endl;
					cout << "hp������ �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot2 == "mp����")
				{
					cout << endl;
					cout << "mp������ �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot2 == "����������")
				{
					cout << endl;
					cout << "������ ������ �ȾҴ�" << endl;
					slot2 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 100);
					cout << endl;
					continue;
				}//slot2 ���� �Ǹ�

				//slot3 ���� �Ǹ�
				if (slot3 == "�ռҵ�")
				{
					cout << endl;
					cout << "�ռҵ带 �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 500);
					cout << endl;
					continue;

				}
				if (slot3 == "�պ���")
				{
					cout << endl;
					cout << "�պ��츦 �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 750);
					cout << endl;
					continue;
				}
				if (slot3 == "�ٸ���Ŀ��")
				{
					cout << endl;
					cout << "�ٸ���Ŀ���� �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot3 == "�ο�ƺ����")
				{
					cout << endl;
					cout << "�ο�ƺ� ����� �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot3 == "�����ǰ�")
				{
					cout << endl;
					cout << "������ ���� �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				//slot3 �����Ǹ� ��

				//slot3 �� �Ǹ�
				if (slot3 == "����Ǹ鰩")
				{
					cout << endl;
					cout << "����� �鰩�� �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot3 == "�̰��ǰ���")
				{
					cout << endl;
					cout << "�̰��� ������ �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2000);
					cout << endl;
					continue;
				}
				if (slot3 == "�����尩")
				{
					cout << endl;
					cout << "���� �尩�� �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				if (slot3 == "��ö����")
				{
					cout << endl;
					cout << "��ö ������ �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot3 == "�Ű��Ǻ���")
				{
					cout << endl;
					cout << "�Ű��� ������ �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 5000);
					cout << endl;
					continue;
				}
				//slot3 �� �Ǹ�

				//slot3 ���� �Ǹ�
				if (slot3 == "��͹���")
				{
					cout << endl;
					cout << "��� ������ �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot3 == "������")
				{
					cout << endl;
					cout << "��� ������ �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot3 == "��ȭ�ȿ�͹���")
				{
					cout << endl;
					cout << "��ȭ�� ��� ����" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot3 == "��ȭ�ȹ�����")
				{
					cout << endl;
					cout << "��ȭ�� ��� ������ �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot3 == "����ȹ���")
				{
					cout << endl;
					cout << "����� ������ �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 7500);
					cout << endl;
					continue;
				}//slot3 ���� �Ǹ�

				//slot3 ���� �Ǹ�
				if (slot3 == "���ݷ�+����")
				{
					cout << endl;
					cout << "���ݷ� + ������ �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot3 == "����+����")
				{
					cout << endl;
					cout << "���� + ������ �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot3 == "hp����")
				{
					cout << endl;
					cout << "hp������ �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot3 == "mp����")
				{
					cout << endl;
					cout << "mp������ �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot3 == "����������")
				{
					cout << endl;
					cout << "������ ������ �ȾҴ�" << endl;
					slot3 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 100);
					cout << endl;
					continue;
				}//slot3 ���� �Ǹ�

				//slot4 ���� �Ǹ�
				if (slot4 == "�ռҵ�")
				{
					cout << endl;
					cout << "�ռҵ带 �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 500);
					cout << endl;
					continue;

				}
				if (slot4 == "�պ���")
				{
					cout << endl;
					cout << "�պ��츦 �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 750);
					cout << endl;
					continue;
				}
				if (slot4 == "�ٸ���Ŀ��")
				{
					cout << endl;
					cout << "�ٸ���Ŀ���� �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot4 == "�ο�ƺ����")
				{
					cout << endl;
					cout << "�ο�ƺ� ����� �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot4 == "�����ǰ�")
				{
					cout << endl;
					cout << "������ ���� �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				//slot4 �����Ǹ� ��

				//slot4 �� �Ǹ�
				if (slot4 == "����Ǹ鰩")
				{
					cout << endl;
					cout << "����� �鰩�� �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 1500);
					cout << endl;
					continue;
				}
				if (slot4 == "�̰��ǰ���")
				{
					cout << endl;
					cout << "�̰��� ������ �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2000);
					cout << endl;
					continue;
				}
				if (slot4 == "�����尩")
				{
					cout << endl;
					cout << "���� �尩�� �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4500);
					cout << endl;
					continue;
				}
				if (slot4 == "��ö����")
				{
					cout << endl;
					cout << "��ö ������ �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot4 == "�Ű��Ǻ���")
				{
					cout << endl;
					cout << "�Ű��� ������ �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 5000);
					cout << endl;
					continue;
				}
				//slot4 �� �Ǹ�

				//slot4 ���� �Ǹ�
				if (slot4 == "��͹���")
				{
					cout << endl;
					cout << "��� ������ �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot4 == "������")
				{
					cout << endl;
					cout << "��� ������ �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot4 == "��ȭ�ȿ�͹���")
				{
					cout << endl;
					cout << "��ȭ�� ��� ����" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot4 == "��ȭ�ȹ�����")
				{
					cout << endl;
					cout << "��ȭ�� ��� ������ �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 2500);
					cout << endl;
					continue;
				}
				if (slot4 == "����ȹ���")
				{
					cout << endl;
					cout << "����� ������ �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 7500);
					cout << endl;
					continue;
				}//slot4 ���� �Ǹ�

				//slot4 ���� �Ǹ�
				if (slot4 == "���ݷ�+����")
				{
					cout << endl;
					cout << "���ݷ� + ������ �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot4 == "����+����")
				{
					cout << endl;
					cout << "���� + ������ �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 4000);
					cout << endl;
					continue;
				}
				if (slot4 == "hp����")
				{
					cout << endl;
					cout << "hp������ �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot4 == "mp����")
				{
					cout << endl;
					cout << "mp������ �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 25);
					cout << endl;
					continue;
				}
				if (slot4 == "����������")
				{
					cout << endl;
					cout << "������ ������ �ȾҴ�" << endl;
					slot4 = "�󽽷�";
					_user->setMoney(_user->getMoney() + 100);
					cout << endl;
					continue;
				}//slot1 ���� �Ǹ�
			}//���� �ȱ� ��
		}

		if (_key == 3)
		{
			cout << endl;
			cout << "���� �����..." << endl;
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
