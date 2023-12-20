#pragma once
#include "Figure.h"
#include "Triangle.h"
#include "Circle.h"

class ComplexFigure : public Figure {
private:
	Triangle* t;
	Circle* c;
	float a;
public:
	ComplexFigure(int _x, int _y, float _a, COLORREF tcolor, COLORREF ccolor);
	void draw() override;
	void hide() override;
	void move(int new_x, int new_y);

	~ComplexFigure();
};