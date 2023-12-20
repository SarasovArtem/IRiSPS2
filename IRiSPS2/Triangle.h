#pragma once
#pragma once
#include "Figure.h"

class Triangle : public Figure {
private:
	float a;         // ������� ������������
	COLORREF color;  // RGB �����
public:
	Triangle(int _x, int _y, float _a, COLORREF _color);

	void escape();
	void draw() override;
	void hide() override;
};