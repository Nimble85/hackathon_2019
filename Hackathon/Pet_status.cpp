#include "Pet_status.h"



Pet_status::Pet_status(string status_c):status(status_c)
{
	interface();
}

Pet_status::Pet_status(string status_c, int i)
{
	this->status = status_c;
}

void Pet_status::show_data()
{

}

void Pet_status::interface() {
	cout << "\nSTATE OF PET" << endl;
	cout << "1.Add information." << endl;
	cout << "2.Edit information." << endl;
	cout << "3.Delete information." << endl;
	cout << "Your choise:";
	int choise;
	cin >> choise;
	if (choise == 1) {
		create_data();
	}
	else if (choise == 2) {
		edit_data();
	}
	else if (choise == 3) {
		delete_data();
	}
}

void Pet_status::create_data() {

}

void Pet_status::edit_data() {

}

void Pet_status::delete_data() {

}


Pet_status::~Pet_status()
{
}
