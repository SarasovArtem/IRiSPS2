#include "ComplexFigure.h"

ComplexFigure::ComplexFigure(int _x, int _y, float _a, COLORREF tcolor, COLORREF ccolor) {
	x = _x;
	y = _y;
	a = _a;
	t = new Triangle(x, y, a, tcolor);
	c = new Circle(x, y, a * sqrt(3) / 6, ccolor);
	cout << "ComplexFigure has been created!" << endl;
}

void ComplexFigure::draw() {
	cout << "ComplexFigure:" << endl;
	t->draw();
	c->draw();
}

void ComplexFigure::hide() {
	t->hide();
	c->hide();
}

void ComplexFigure::move(int new_x, int new_y) {
	t->move(new_x, new_y);
	c->move(new_x, new_y);
}

ComplexFigure::~ComplexFigure() {
	delete t;
	delete c;
};