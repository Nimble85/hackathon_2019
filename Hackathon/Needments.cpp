#pragma warning(disable:4996)

#include "Needments.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;


Needments::Needments()
{
	interface();
}

Needments::Needments(int i, int j)
{

}

void Needments::interface() {
	cout << endl << endl;
	cout << "\nNEEDMENTS OF SHELTER" << endl;
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

void Needments::show_data() {
	ifstream show_file("D:\\Hackathon_project\\DB\\Needments.txt", ios::in );
	if (!show_file.is_open()) {
		exit(1);
	}
	setlocale(LC_ALL, "rus");
	cout << "\nNEEDMENTS FOR SHELTER: ";
	string subject;
	for (int i = 0; !show_file.eof(); i++) {
		getline(show_file, subject);
		cout << endl << subject;

	}

}

void Needments::create_data() {

}

void Needments::edit_data() {

}

void Needments::delete_data() {

}

void Needments::add_need()
{
	ofstream show_file("D:\\Hackathon_project\\DB\\Needments.txt", ios_base::app);
	if (!show_file.is_open()) {
		exit(1);
	}
	cout << "Enter the needment to add it to the list: ";
	string subj;
	cin >> subj;
	show_file << endl << subj;
	cout << "Would you like to see the whole list of needments?(1-yes;0-no):";
	int choise;
	cin >> choise;
	if (choise == 1) {
		Needments need(1, 1);
		need.show_data();
	}
	else {
		cout << "Ok" << endl;
	}
}

Needments::~Needments()
{
}
