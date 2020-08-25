//#include <iostream>
//#include <Windows.h>
//#include <conio.h>
//#include <ctime>
//#include <string>
//#include <list>
//#include <algorithm>
//#include <numeric>
//#include <iomanip>
//
//using namespace std;
//
//class Item 
//{
//public:
//	string name;
//	string color;
//	int money;
//	int count;
//
//	Item(string name, string color, int money, int count)
//	{
//		this->name = name;
//		this->color = color;
//		this->money = money;
//		this->count = count;
//	}
//};
//
//class Seller 
//{
//protected:
//	Seller* s;
//	Item* it;
//	int price;
//public:
//	virtual void Handle(Item * it) = 0;
//
//	void Show()
//	{
//		if (this->it != nullptr) 
//		{
//		cout << "Name: " << this->it->name << endl;
//		cout << "Color: " << this->it->color << endl;
//		cout << "Money: " << this->it->money << endl;
//		}
//	}
//};
//
//class SellerPrincess : public Seller
//{
//	int count;
//public:
//	SellerPrincess(Seller * s)
//	{
//		this->s = s;
//		this->count = 10;
//		this->price = 100;
//	}
//
//	void Handle(Item* it)override
//	{
//		if (it->name != "Princess")
//		{
//			this->s->Handle(it);
//		}
//		else 
//		{
//			int money = 0;
//			int count = 0;
//			for (int i = 0; i < it->count; i++)
//			{
//				money += this->price;
//				count++;
//			}
//
//			it->money -= money;
//			if (it->money >= 0)
//			{
//				this->count -= count;
//				if (this->count >= 0)
//				{
//					this->it = it;
//				}
//				else
//				{
//					cout << "not enought items" << endl;
//				}
//			}
//			else
//			{
//				cout << "You do not have enough money!" << endl;
//			}
//		} 
//	}
//};
//
//class SellerGoblin : public Seller
//{
//	int count;
//public:
//	SellerGoblin(Seller * s)
//	{
//		this->s = s;
//		this->count = 10;
//		this->price = 100;
//	}
//
//	void Handle(Item* it)override
//	{
//		if (it->name != "Goblin")
//		{
//			this->s->Handle(it);
//		}
//		else
//		{
//			int money = 0;
//			int count = 0;
//			for (int i = 0; i < it->count; i++)
//			{
//				money += this->price;
//				count++;
//			}
//			it->money -= money;
//			if (it->money >= 0)
//			{
//				this->count -= count;
//				if (this->count >= 0) 
//				{
//				  this->it = it;
//				}
//				else 
//				{
//					cout << "not enought items" << endl;
//				}
//			}
//			else
//			{
//				cout << "You do not have enough money!" << endl;
//			}
//		}
//	}
//};
//
//class SellerRaket : public Seller
//{
//	int count;
//public:
//	SellerRaket(Seller * s)
//	{
//		this->s = s;
//		this->count = 10;
//		this->price = 100;
//	}
//
//	void Handle(Item* it)override
//	{
//		if (it->name != "Raket")
//		{
//			this->s->Handle(it);
//		}
//		else
//		{
//			int money = 0;
//			int count = 0;
//			for (int i = 0; i < it->count; i++)
//			{
//				money += this->price;
//				count++;
//			}
//			it->money -= money;
//			if (it->money >= 0)
//			{
//				this->count -= count;
//				if (this->count >= 0)
//				{
//					this->it = it;
//				}
//				else
//				{
//					cout << "not enought items" << endl;
//				}
//			}
//			else
//			{
//				cout << "You do not have enough money!" << endl;
//			}
//		}
//	}
//};
//
//class SellerStone : public Seller
//{
//	int count;
//public:
//	SellerStone(Seller * s)
//	{
//		this->s = s;
//		this->count = 10;
//		this->price = 100;
//	}
//
//	void Handle(Item* it)override
//	{
//		if (it->name != "Stone") 
//		{
//			this->s->Handle(it);
//		}
//		else
//		{
//			int money = 0;
//			int count = 0;
//			for (int i = 0; i < it->count; i++)
//			{
//				money += this->price;
//				count++;
//			}
//			it->money -= money;
//			if (it->money >= 0)
//			{
//				this->count -= count;
//				if (this->count >= 0)
//				{
//					this->it = it;
//					
//				}
//				else
//				{
//					cout << "not enought items" << endl;
//				}
//			}
//			else
//			{
//				cout << "You do not have enough money!" << endl;
//			}
//		}
//	}
//};
//
//
//void main() 
//{
//	Seller* sp = new SellerPrincess(nullptr);
//	Seller* sg = new SellerGoblin(sp);
//	Seller* sr = new SellerRaket(sg);
//	Seller* ss = new SellerStone(sr);
//
//	Item* it1 = new Item("Princess", "Red", 1000, 10);
//	Item* it2 = new Item("Goblin", "Blue", 1000, 10);
//	Item* it3 = new Item("Raket", "Yellow", 1000, 10);
//	Item* it4 = new Item("Stone", "Green", 1000, 10);
//
//
//	ss->Handle(it1);
//	ss->Handle(it2);
//	ss->Handle(it3);
//	ss->Handle(it4);
//
//
//	
//	cout << "=====Princesses=====" << endl;
//	sp->Show();
//	cout << "=====Goblins=====" << endl;
//	sg->Show();
//	cout << "=====Raket=====" << endl;
//	sr->Show();
//	cout << "=====Stone=====" << endl;
//	ss->Show();
//
//	delete sp, sg, sr, ss, it1, it2, it3,it4;
//}
