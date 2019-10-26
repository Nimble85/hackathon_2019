#pragma once
#include <string>
#include <iostream>
using namespace std;

class Pet_status
{
	string status;
public:
	Pet_status(string status_c);
	Pet_status(string status_c, int i);
	void show_data();
	void create_data();
	void edit_data();
	void delete_data();
	void interface();

	~Pet_status();
};

