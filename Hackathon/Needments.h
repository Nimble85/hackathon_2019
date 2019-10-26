#pragma once
#include <iostream>

using namespace std;

class Needments
{
public:
	Needments();
	Needments(int i , int j);
	void create_data();
	void edit_data();
	void delete_data();
	void show_data();
	void interface();
	void add_need();
	~Needments();
};

