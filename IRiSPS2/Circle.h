#pragma once
#include "Figure.h"

class Circle : public Figure {
private:
	float r; // радиус
	COLORREF color;  // RGB цвета
public:
	Circle(int _x, int _y, float _r, COLORREF _color);

	void escape();
	void draw() override;
	void hide() override;
};