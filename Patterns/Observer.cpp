//#include <iostream>
//#include <Windows.h>
//#include <conio.h>
//#include <ctime>
//#include <string>
//#include <list>
//#include <algorithm>
//#include <numeric>
//
//using namespace std;
//
//class Car 
//{
//	string name;
//	int price;
//	int old_price;
//public:
//	Car(string name, int price, int old_price)
//	{
//		this->name = name;
//		this->price = price;
//		this->old_price = old_price;
//	}
//
//	string& GetName() 
//	{
//		return this->name;
//	}
//
//	int& GetPrice() 
//	{
//		return this->price;
//	}
//
//	int& GetOldPrice() 
//	{
//		return this->old_price;
//	}
//
//	void Show() 
//	{
//		cout << "Name: " << this->name << endl;
//		cout << "Price: " << this->price << endl;
//		cout << "Old Price: " << this->old_price <<endl;
//	}
//};
//
//class ISubscribes 
//{
//public:
//	virtual void Update(Car * c) = 0;
//};
//
//class BazaCar  
//{
//	list<ISubscribes*> sub;
//	list<Car*> cars;
//public:
//	//��������� ���������
//	void AddCars(Car * c) 
//	{
//		cars.push_back(c);
//	}
//	//��������� ���������
//	void DelCar(Car * c) 
//	{
//		this->cars.remove(c);
//	}
//	//��������� �볺���
//	void Attach(ISubscribes * s) 
//	{
//		this->sub.push_back(s);
//	}
//	//��������� �볺���
//	void Detach(ISubscribes* s)
//	{
//		this->sub.remove(s);
//	}
//	//���� ���� �� ��������� ���� ���������� ����������
//	void ChangePrice(Car * c, int new_price) 
//	{
//	list<Car*>::iterator it = find(this->cars.begin(), this->cars.end(), c);
//	(*it)->GetOldPrice() = (*it)->GetPrice();
//	(*it)->GetPrice() = new_price;
//
//	this->Notify(*it);
//	}
//	//����� �� ������ ����������� ��� ���� � ���
//	void Notify(Car * c) 
//	{
//		list<ISubscribes*>::iterator it = this->sub.begin();
//		while (it != this->sub.end()) 
//		{
//			(*it)->Update(c);
//			it++;
//		}
//
//	}
//
//};
//
//class BudgetCar : public ISubscribes
//{
//public:
//	void Update(Car* c) 
//	{
//		//�������� ���� ��������� ��� ����������� �볺���
//		if (c->GetPrice() <= 100000) 
//		{
//		    cout << "BudgetCar: " << endl;
//			c->Show();
//		}
//	}
//};
//
//class AllCars : public ISubscribes 
//{
//public:
//	void Update(Car* c) 
//	{
//		//³������������ �� �������� � ���� � ���� � ���
//		cout << "All Cars" << endl;
//		c->Show();
//	}
//};
//
//class LexusCars : public ISubscribes
//{
//public:
//	void Update(Car* c) 
//	{
//		//�������� ����� ���� ��� ����������� �볺��� ����
//		if (c->GetName() == "Lexus") 
//		{
//		cout << "Lexus car" << endl;
//			c->Show();
//		}
//	}
//};
//
//
//
//void main() 
//{
//	//��������� ���� ���������
//	BazaCar* bc = new BazaCar();
//	
//	//��������� ��i���i�
//	BudgetCar* b = new BudgetCar();
//	AllCars* c = new AllCars();
//	LexusCars* l = new LexusCars();
//	//��������� ���������
//	Car* car = new Car("Lexus", 100000, 100000);
//
//	//��������� �� ���� �볺���
//	bc->Attach(b);
//	bc->Attach(c);
//	bc->Attach(l);
//
//	//��������� �� ���� ���������
//	bc->AddCars(car);
//
//	//���� ���� �� ���������
//	bc->ChangePrice(car, 90000);
//
//	//��������� �����
//	delete bc, b, c, l;
//}