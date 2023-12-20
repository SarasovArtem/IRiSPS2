#include "Figure.h"

Figure::Figure() {
	x = 0;
	y = 0;
	hwnd = GetConsoleWindow();
	hdc = GetDC(hwnd);
	GetClientRect(hwnd, &rt);
}

Figure::Figure(int _x, int _y) {
	hwnd = GetConsoleWindow();
	hdc = GetDC(hwnd);
	GetClientRect(hwnd, &rt);
	x = _x;
	y = _y;
}

void Figure::move(int new_x, int new_y) {
	hide();
	x = new_x;
	y = new_y;
	cout << "moved: " << "x " << x << ", " << "y " << y << endl;
	draw();
}

Figure::~Figure() {};