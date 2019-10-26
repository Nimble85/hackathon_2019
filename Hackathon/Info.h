#pragma once
#include <iostream>
#include <string>
using namespace std;

class Info
{
protected:
	string NameOfSeacrh;
	int birth[3];
	int age;
	string desc;
	int id;
	string name;
	bool vacc;

public:
	void show();
	string GetName();
	void Inter();
	void SetName();
	void ShowName();
	void SetBirth();
	void ShowBirth();
	void SetDesñ();
	void ShowDesc();
	void SetPass();
	void ShowPass();
};


