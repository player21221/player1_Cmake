// player1_Cmake.cpp: определяет точку входа для приложения.
//

#include "player1_Cmake.h"
#include <clocale>

using namespace std;

int x = 3;
int y = 2;

int main()
{
	setlocale(0, "Russian");

	cout << "Вводите значение x и нажимайте Enter. - " << endl;
	cin >> x;
	cout << "" << endl;
	cout << "Пожалуйста, введите еще значение y" << endl;
	cin >> y;

	y = x + y;
	cout << y;
	cout << " - это новое значение игрека.";

	cout << "Hello CMake." << endl;


	if (x < 4) {
		cout << "Hello CMake 22 ." << endl;
	}
	return 0;
}
