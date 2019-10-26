#include "Info.h"
#include <fstream>
#include <iomanip>


void Info::show()
{
	ifstream show_file("D:\\Hackathon_project\\DB\\PetsInformation.txt", ios::in | ios::binary);
	if (!show_file.is_open()) {
		exit(1);
	}
	int num, id,day,mounth,year;
	string status,name,description;
	bool is_vaccinated;

	cout << endl << setw(4) << " Num:" << setw(8) << "Id:" << setw(18) << "Status:" << setw(16);
	cout<< "Date of birth:" << "  "<< setw(10) << "Nickname:" <<setw(15)<<"Description:";


	for (int i = 0; !show_file.eof(); i++) {
		show_file >> num;
		show_file >> id;
		show_file >> status;
		show_file >> day;
		show_file >> mounth;
		show_file >> year;
		show_file >> is_vaccinated;
		show_file >> name;
		show_file >> description;

		cout << endl << setw(3) << num<<"  " << setw(8) << id  << setw(18)<<status;
		cout <<"    "<< setw(2) << day << " " << setw(2) << mounth << " " << setw(5) << year;
		cout << "  " << setw(10) << name << "  " << setw(12) << description;
	}

	cout << endl<<endl;

}

string Info::GetName()
{
	return this->NameOfSeacrh;
}

void Info::Inter()
{
	SetBirth();
	ShowBirth();
	SetDesñ();
	ShowDesc();
	SetPass();
	ShowPass();
}

void Info::SetName()
{
	cout << "Who are looking for?";
	cin >> this->NameOfSeacrh;
}

void Info::ShowName()
{
	cout << "Name of pet: " << NameOfSeacrh << endl;
}

void Info::SetBirth()
{
	cout << "Enter date of birth." << endl;
	cout << "Day: ";
	cin >> birth[0];
	cout << "Month: ";
	cin >> birth[1];
	cout << "Year: ";
	cin >> birth[2];
	cout << "Age of animal: ";		//ìîæíî ñ÷èòàòü
	cin >> age;
}

void Info::ShowBirth()
{
	cout << "Date of birth: " << this->birth[0] << "." << this->birth[1] << "." << this->birth[2] << endl;
	cout << "Age of animal: " << this->age << endl;
}

void Info::SetDesñ()
{
	cout << "Enter description about animal: " << endl;
	cin.ignore(32767, '\n');
	getline(cin, desc);
}

void Info::ShowDesc()
{
	cout << "Description about " << this->NameOfSeacrh << ": " << this->desc << endl;
}

void Info::SetPass()
{

}

void Info::ShowPass()
{
}
