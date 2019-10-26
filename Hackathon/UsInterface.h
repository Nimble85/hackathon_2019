
#pragma once
#include <iostream>
#include "Info.h"
#include "Needments.h"
#include "Pet_status.h"

using namespace std;

class UsInterface
{
	int ans;
	string NameOfSearch;
public:
	void Choice();
	void info();
	void Needment();
	void Status();
	void Request();
};
