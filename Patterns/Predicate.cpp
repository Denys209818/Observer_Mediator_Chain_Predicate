//#include <iostream>
//#include <Windows.h>
//#include <conio.h>
//#include <ctime>
//#include <string>
//#include <array>
//#include <algorithm>
//#include <numeric>
//
//using namespace std;
//
//class Human;
//
//class PredicateName
//{
//public:
//	bool operator() (Human* h1, Human* h2);
//};
//
//class PredicateSurname 
//{
//public:
//	bool operator() (Human* h1, Human* h2);
//};
//
//class PredicateState 
//{
//public:
//	bool operator() (Human* h1, Human* h2);
//};
//
//class Human 
//{
//public:
//	string name;
//	string surname;
//	string state;
//
//	Human(string name, string surname, string state)
//	{
//		this->name = name;
//		this->surname = surname;
//		this->state = state;
//	}
//
//};
//
//bool PredicateName::operator() (Human* h1, Human* h2)
//{
//	return (int)h1->name.c_str()[0] < (int)h2->name.c_str()[0];
//}
//
//bool PredicateSurname::operator() (Human* h1, Human* h2)
//{
//	return (int)h1->surname.c_str()[0] < (int)h2->surname.c_str()[0];
//}
//
//bool PredicateState::operator() (Human* h1, Human* h2) 
//{
//	return (int)h1->state.c_str()[0] < (int)h2->state.c_str()[0];
//}
//
//void main() 
//{
//	array<Human*, 4> ar;
//
//	array<int, 6> a{3,4,5,1,5,1};
//	
//	ar[0] = new Human("Denys", "Kravchuk", "Petrovych");
//	ar[1] = new Human("Awdawd", "Qwerty", "Test");
//	ar[2] = new Human("Test", "Awdawd", "Qwerty");
//	ar[3] = new Human("Qwerty", "Test", "Awdawd");
//
//
//
//	cout << "Sort name:" << endl;
//	sort(ar.begin(), ar.end(), PredicateName());
//	for (int i = 0; i < ar.size(); i++) 
//	{
//		cout << ar[i]->name << endl;
//	}
//
//	cout << "Sort surname:" << endl;
//	sort(ar.begin(), ar.end(), PredicateSurname());
//	for (int i = 0; i < ar.size(); i++)
//	{
//		cout << ar[i]->name << endl;
//	}
//
//	cout << "Sort state:" << endl;
//	sort(ar.begin(), ar.end(), PredicateState());
//	for (int i = 0; i < ar.size(); i++)
//	{
//		cout << ar[i]->name << endl;
//	}
//
//}