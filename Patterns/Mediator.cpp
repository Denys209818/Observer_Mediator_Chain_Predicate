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
//class Server;
//
//class Chater 
//{
//	string name;
//	Server* s;
//public:
//	//����� ������ ��� ����
//	Chater(Server* s)
//	{
//		this->s = s;
//	}
//	//³������� ������������ �����������
//	void _SendMessage(string message);
//	//������� ��� �����������
//	string& GetName() 
//	{
//		return this->name;
//	}
//};
//
//class Server 
//{
//	list<string> messages;
//
//	Chater* chater1;
//	Chater* chater2;
//	Chater* chater3;
//	Chater* chater4;
//
//public:
//	//����������� ���������� ������������ ����
//	Server()
//	{
//		this->chater1 = new Chater(this);
//		this->chater2 = new Chater(this);
//		this->chater3 = new Chater(this);
//		this->chater4 = new Chater(this);
//	}
//	//���� ���������� �� ����
//	void AddMessage(string message) 
//	{
//		messages.push_back(message);
//	}
//	//������� ����������� ���� �� �������� ��������
//	Chater* GetChater(int counter, string name) 
//	{
//		switch (counter) 
//		{
//		case 1: { this->chater1->GetName() = name; return this->chater1; break; }
//		case 2: { this->chater2->GetName() = name; return this->chater2; break; }
//		case 3: { this->chater3->GetName() = name; return this->chater3; break; }
//		case 4: { this->chater4->GetName() = name; return this->chater4; break; }
//		}
//	}
//	//���������� �����������
//	void ShowMessages() 
//	{
//		list<string>::iterator it = this->messages.begin();
//		while (it != this->messages.end()) 
//		{
//			cout << (*it) << endl;
//			it++;
//		}
//	}
//};
//
//
//void Chater::_SendMessage(string message)
//{
//	string mess = this->name;
//	mess += ": ";
//	mess += message;
//	this->s->AddMessage(mess);
//}
//
//void main() 
//{
//	//��������� ������� ��� ����
//	Server* server = new Server();
//
//	//����������� ������������ ��� ������������ � ����
//	Chater* chater1 = server->GetChater(1, "User1");
//	Chater* chater2 = server->GetChater(2, "User2");
//	Chater* chater3 = server->GetChater(3, "User3");
//	Chater* chater4 = server->GetChater(4, "User4");
//	int counter = 1;
//
//	while (true) 
//	{
//		//���������� ������� �����������
//		system("cls");
//	    char message[255];
//		cout << "Enter message: ";
//		cin.getline(message, 255);
//		system("cls");
//		
//		
//		switch (counter) 
//		{
//		case 1: chater1->_SendMessage(message); break;
//		case 2: chater2->_SendMessage(message); break;
//		case 3: chater3->_SendMessage(message); break;
//		case 4: chater4->_SendMessage(message); break;
//
//		}
//		
//		//�������� ����������
//		server->ShowMessages();
//		_getch();
//
//		//�������� ����������
//		counter < 4 ? counter++ : counter = 1;
//
//	}
//
//	delete chater1, chater2, chater3, chater4, server;
//
//
//}