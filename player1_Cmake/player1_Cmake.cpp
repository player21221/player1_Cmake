// player1_Cmake.cpp: определяет точку входа для приложения.
//

#include "player1_Cmake.h"
#include <clocale>
//#include"math.h"

using namespace std;

int x = 3;
int y = 2;
float z = 0;
int main()
{
	setlocale(0, "Russian");

	cout << "Вводите значение x и нажимайте Enter. - " << endl;
	cin >> x;
	cout << "" << endl;
	cout << "Пожалуйста, введите еще значение y" << endl;
	cin >> y;

	cout << "Hello CMake." << endl;

	z = sin(x + y);
	cout << "Пусть будет значение зет, равное синусу суммы икса и игрека. тогда это самое зет будет равно - " <<endl;
	cout << z <<endl;


	if (x < 4) {
		cout << "Hello CMake 22 ." << endl;
	}
	return 0;
}
