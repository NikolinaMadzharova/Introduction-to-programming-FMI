#include <iostream>
using namespace std;

int main() {
	int money;
	cin >> money;

	int hundred = money / 100;
	money = money % 100;
	cout << hundred << "x100 lv" << endl;

	int fifty = money / 50;
	money = money % 50;
	cout << fifty << "x50 lv" << endl;

	int twenty = money / 20;
	money = money % 20;
	cout << twenty << "x20 lv" << endl;

	int ten = money / 10;
	money = money % 10;
	cout << ten << "x10 lv" << endl;

	int five = money / 5;
	money = money % 5;
	cout << five << "x5 lv" << endl;

	int two = money / 2;
	money = money % 2;
	cout << two << "x2 lv" << endl;

	cout << money << "x1 lv" << endl;

}