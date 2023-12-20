#include "Triangle.h"

Triangle::Triangle(int _x, int _y, float _a, COLORREF _color) {
	x = _x;
	y = _y;
	a = _a;
	color = _color;
	cout << "Triangle has been created!" << endl;
}

void Triangle::escape() {
	if (x - a / 2 < rt.left || x + a / 2 > rt.right || y - a * sqrt(3) / 3 < rt.top || y + a * sqrt(3) / 6 > rt.bottom) {
		throw MyException("Figure is out of screen!");
	}
}

void Triangle::draw() {
	escape();
	cout << "Triangle: " << x << ", " << y << ", " << a << endl;
	POINT points[3]; // массив координат вершин треугольника
	points[0].x = x;
	points[0].y = y - a * sqrt(3) / 3;
	points[1].x = x - a / 2;
	points[1].y = y + a * sqrt(3) / 6;
	points[2].x = x + a / 2;
	points[2].y = points[1].y;
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(0, 0, 0));
	HBRUSH brush = CreateSolidBrush(color);
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Polygon(hdc, points, 3);
	DeleteObject(pen);
	DeleteObject(brush);
}

void Triangle::hide() {
	cout << "Triangle Hide: " << x << ", " << y << ", " << a << endl;
	POINT points[3];
	points[0].x = x;
	points[0].y = y - a * sqrt(3) / 3;
	points[1].x = x - a / 2;
	points[1].y = y + a * sqrt(3) / 6;
	points[2].x = x + a / 2;
	points[2].y = points[1].y;
	HPEN pen = CreatePen(PS_SOLID, 2, GetBkColor(hdc));
	HBRUSH brush = CreateSolidBrush(GetBkColor(hdc));
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Polygon(hdc, points, 3);
	DeleteObject(pen);
	DeleteObject(brush);
}