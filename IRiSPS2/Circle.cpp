#include "Circle.h"

Circle::Circle(int _x, int _y, float _r, COLORREF _color) {
	x = _x;
	y = _y;
	r = _r;
	color = _color;
	cout << "Circle has been created!" << endl;
}

void Circle::escape() {
	if (x - r < rt.left || x + r > rt.right || y - r < rt.top || y + r > rt.bottom)
		throw MyException("Figure is out of screen!");
}

void Circle::draw() {
	escape();
	cout << "Circle: " << x << ", " << y << ", " << r << endl;
	HPEN   pen = CreatePen(PS_SOLID, 2, RGB(0, 0, 0));
	HBRUSH brush = CreateSolidBrush(color);
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Ellipse(hdc, x - r, y - r, x + r, y + r);
	DeleteObject(pen);
	DeleteObject(brush);
}

void Circle::hide() {
	cout << "Circle hide: " << x << ", " << y << ", " << r << endl;
	HPEN   pen = CreatePen(PS_SOLID, 2, GetBkColor(hdc));
	HBRUSH brush = CreateSolidBrush(GetBkColor(hdc));
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Ellipse(hdc, x - r, y - r, x + r, y + r);
	DeleteObject(pen);
	DeleteObject(brush);
}