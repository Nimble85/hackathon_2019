#include "Auth.h"
#include "AdInterface.h"
using namespace std;

Auth::Auth()
{
	is_admin=is_admin_func();
	if (is_admin)
		admin_autorization();
	else {
		//user interface

		UsInterface user;
		user.Choice();
	}
}

void Auth::admin_autorization(){
	ifstream admin_file("D:\\Hackathon_project\\DB\\Admin_data.txt", ios::in | ios::binary);
	if (!admin_file.is_open()){
		exit(1);
	}

	string file_password, file_login;
	admin_file >> file_login;
	admin_file >> file_password;


	admin_file.close();

	cout << "Введите логин:";
	string login;
	cin >> login;
	cout << "Введите пароль:";
	string password;
	cin >> password;
	cout << endl;
	if (file_login == login && file_password == password) {
		//Call interface here...

		AdInterface admin;
		admin.Choice();

	}
	else {
		cout << "Неверный логин или пароль. Попробуйте еще раз. \n";
		admin_autorization();
	}

}

bool Auth::is_admin_func(){
	std::cout << "Вы администратор?(1-да;0-нет):";
	int choise;
	cin >> choise;
	cout << endl;
	if (choise == 1){
		return true;
	}
	else{
		if (choise == 0){
			return false;//it means the person is user
		}
		else{
			cout << "Wrong answer! Try again." << endl;
			is_admin_func();
		}
	}

}

Auth::~Auth()
{
}
