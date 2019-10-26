#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "AdInterface.h"
#include "UsInterface.h"
class Auth
{
	bool is_admin;
public:
	Auth();
	bool is_admin_func();
	void admin_autorization();

	~Auth();
};
