#include "UsInterface.h"

void UsInterface::Choice()		//дописать выборку
{
	while (true)
	{
		cout << "\n\nYou can choose one of the section:" << endl;
		cout << "0. Information about pets." << endl;
		cout << "1. Information about needments of shelter." << endl;
		cout << "2. Status of the chosen pet" << endl;
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
		/*case(3):
		{
			Request();
			break;
		}*/
		default:
		{
			cout << "You leave. Good bye!" << endl;
			exit(0);
		}
		}
		//system("cls");
	}
}

void UsInterface::info()
{
	Info info;
	info.show();
	/*info.ShowBirth();
	info.ShowDesc();
	info.ShowName();
	info.ShowPass();
	NameOfSearch = info.GetName();*/

}

void UsInterface::Needment()
{
	Needments need(1, 1);
	need.show_data();
}

void UsInterface::Status()
{
	Pet_status status(this->NameOfSearch, 1);
	status.show_data();
}

void UsInterface::Request()
{
	cout << "It's Request" << endl;
}
