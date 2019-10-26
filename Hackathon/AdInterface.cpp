#include "AdInterface.h"

void AdInterface::Choice()		//дописать выборку
{

	while (true)
	{
		cout << "\n\nYou can choose one of the section:" << endl;
		cout << "0. Add pets." << endl;
		cout << "1. Add needments of shelter." << endl;
		cout << "2. Status of the chosen pet" << endl;
		cout << "3. Info about all pets" << endl;
		cout << "10. Leave." << endl;
		cout << "Your choise:";
		cin >> this->ans;

		switch (this->ans)
		{
		case(0):
		{
			info(); //work with sql + search
			break;
		}
		case(1):
		{
			Needment(); //sql
			break;
		}
		case(2):
		{
			Status();
			break;
		}
		case(3):
		{
			Info info;
			info.show();
			break;
		}
		default:
		{
			cout << "You leave. Good bye!" << endl;
			exit(0);
		}
		}
	}
	system("cls");
}

void AdInterface::info()
{
	Info info;
	info.Inter();
	NameOfSearch = info.GetName();
}

void AdInterface::Needment()
{
	Needments need(1,1);
	need.add_need();
}

void AdInterface::Status()
{
	Pet_status status(this->NameOfSearch);
}

void AdInterface::Request()
{
	cout << "It's Request" << endl;
}
