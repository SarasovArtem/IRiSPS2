#pragma once
#include "ComplexFigure.h"
#include "Figure.h"
#include "Triangle.h"
#include "Circle.h"

class Figures {
private:
	stack<Figure*, list<Figure*>> s;
public:
	void add(Figure* f);
	void show();
	void clearStack();

	~Figures();
};