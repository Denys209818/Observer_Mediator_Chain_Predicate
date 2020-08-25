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
//	//Додавання автомобіля
//	void AddCars(Car * c) 
//	{
//		cars.push_back(c);
//	}
//	//Видалення автомобіля
//	void DelCar(Car * c) 
//	{
//		this->cars.remove(c);
//	}
//	//Додавання клієнта
//	void Attach(ISubscribes * s) 
//	{
//		this->sub.push_back(s);
//	}
//	//Видалення клієнта
//	void Detach(ISubscribes* s)
//	{
//		this->sub.remove(s);
//	}
//	//Зміна ціни на автомобіль який передається параметром
//	void ChangePrice(Car * c, int new_price) 
//	{
//	list<Car*>::iterator it = find(this->cars.begin(), this->cars.end(), c);
//	(*it)->GetOldPrice() = (*it)->GetPrice();
//	(*it)->GetPrice() = new_price;
//
//	this->Notify(*it);
//	}
//	//Метод що відсилає повідомлення про зміни в ціні
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
//		//Перевірка ціни автомобіля для відображення клієнту
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
//		//Відображаються всі автомобілі в яких є зміни в ціні
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
//		//Перевірка марки авто для відображення клієнту зміни
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
//	//Створення бази автомобілів
//	BazaCar* bc = new BazaCar();
//	
//	//Створення клiєнтiв
//	BudgetCar* b = new BudgetCar();
//	AllCars* c = new AllCars();
//	LexusCars* l = new LexusCars();
//	//Створення автомобіля
//	Car* car = new Car("Lexus", 100000, 100000);
//
//	//додавання до бази клієнтів
//	bc->Attach(b);
//	bc->Attach(c);
//	bc->Attach(l);
//
//	//додавання до бази автомобілів
//	bc->AddCars(car);
//
//	//Зміна ціни на автомобіль
//	bc->ChangePrice(car, 90000);
//
//	//Видалення обєктів
//	delete bc, b, c, l;
//}